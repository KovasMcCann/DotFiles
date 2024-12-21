#!/bin/bash

response=$(wget -qO- https://epic.gsfc.nasa.gov/api/natural)

image_info=$(echo "$response" | jq '.[0]')
image_name=$(echo "$image_info" | jq -r '.image')
date=$(echo "$image_info" | jq -r '.date')

year=$(echo "$date" | cut -d' ' -f1 | cut -d'-' -f1)
month=$(echo "$date" | cut -d' ' -f1 | cut -d'-' -f2)
day=$(echo "$date" | cut -d' ' -f1 | cut -d'-' -f3)

image_url="https://epic.gsfc.nasa.gov/archive/natural/$year/$month/$day/png/$image_name.png"

wget "$image_url"

xwallpaper --focus "$image_name.png"
