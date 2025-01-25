## General Programs

[Vim](https://www.vim.org/) and [Zsh](https://www.zsh.org/) configs are located in `/RC's`

  - If you use [Visual Studio Code](https://code.visualstudio.com/) you can link your `.vimrc` file to your vim plugin

`/Scripts` contains scripts for a variety of uses

`/Newsboat` contains the `urls` and `config` files for the for [Newsboat](https://newsboat.org/index.html)

## Arch Linux Guide

Use DWM as the window manager

`/dwm` for [dwm](https://dwm.suckless.org/)

  - **Most keybindings are in keys.h**
  - This is done with `#include "keys.h"`

## Linux Mint Win XP Rice

[Mental Outlaws Video](https://www.youtube.com/watch?v=b0_0fJkvhP8&pp=ygUZbWVudGFsIG91dGxhdyB3aW5kb3dzIHN4cA%3D%3D)

```console
apt-get install build-essential
apt-get install git
apt-get install libglib2.0-dev

git clone https://github.com/sass/sassc.git
git clone https://github.com/sass/libsass.git
cd sassc
SASS_LIBSASS_PATH=../libsass make
sudo SASS_LIBSASS_PATH=../libsass make install

git clone https://github.com/ndwarshuis/CinnXP

cd CinnXP

./compile-theme

sudo cp -r pkg/usr/share/icons/CinnXP/ /usr/share/icons/
sudo cp -r pkg/usr/share/themes/CinnXP-Luna/ /usr/share/themes/

git clone https://github.com/B00merang-Artwork/...

git clone https://github.com/B00merang-Project/...

sudo cp -r Windows-XP/Windows\ XP\ Luna/metacity-1/ /usr/share/themes/CinnXP-Luna

sudo cp -r ~/winxp-icons /usr/share/icons
```

Windows Style PS1

```bash
echo "Micorosoft Windows XP (Version 5.1.2600)"
echo "(C) 1985-2001 Microsoft Corp."
echo
 
export PS1='C:\\\[\e[1;32m\]\w\[\e[0m\] > '
```
