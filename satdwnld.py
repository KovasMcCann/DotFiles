import requests
from PIL import Image
from io import BytesIO

# Settings
layer = "MODIS_Terra_CorrectedReflectance_TrueColor"
date = "2025-08-21"
zoom = 6
x_range = range(16, 20)  # 16,17,18,19
y_range = range(39, 43)  # 39,40,41,42

url_template = "https://gibs.earthdata.nasa.gov/wmts/epsg3857/best/{layer}/default/{date}/GoogleMapsCompatible_Level9/{z}/{y}/{x}.jpg"

# Create blank image for stitching
tile_size = 256
img_width = tile_size * len(x_range)
img_height = tile_size * len(y_range)
world = Image.new("RGB", (img_width, img_height))

# Download and paste tiles
for ix, x in enumerate(x_range):
    for iy, y in enumerate(y_range):
        url = url_template.format(layer=layer, date=date, z=zoom, x=x, y=y)
        r = requests.get(url)
        if r.status_code == 200:
            tile = Image.open(BytesIO(r.content))
            world.paste(tile, (ix*tile_size, iy*tile_size))
        else:
            print(f"Missing tile: {x},{y}")

# Resize/crop to 1440x1080
world = world.resize((1440, 1080), Image.LANCZOS)
world.save("chicago_wallpaper.jpg")
print("Saved 1440x1080 Chicago-centered wallpaper as chicago_wallpaper.jpg")
