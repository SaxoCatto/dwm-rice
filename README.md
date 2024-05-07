# Reason
- Bored. Broken PC to come into my life, by a friend called H. Will work on more, should help me set things up faster in accordance to my arch-script.
- Most DE/WM uses Xorg and its utils, so I wanted something special for myself. But I will have to build it by my own.
- Ideals somewhat align with the suckless devs.
## Updates
- I should be updating my `man` page at [`dwn.1`](https://github.com/SaxoCatto/dwm-rice/blob/main/dwm.1). Or you can look at it directly [`config.h`](https://github.com/SaxoCatto/dwm-rice/blob/main/config.h).
- Some documentation might call <kbd>Winkey</kbd> as <kbd>Super</kbd>, <kbd>Enter</kbd> as <kbd>Return</kbd>. Also for dwm, <kbd>LeftAlt</kbd> as <kbd>Mod4</kbd>, <kbd>Super</kbd> as <kbd>Mod1</kbd>.
- This is not my dream setup yet. Still workable. So when such time comes, I will notify.
- Stay tuned for my script + config for Hyprland environment.
- You might need libxft-bgra, but [this](https://aur.archlinux.org/packages/libxft-bgra/) doesn't seem to exist anymore.
- How the fuck do I make it clickable now.

# Dwm, Dwmblocks and more
## How to use
- I like Hyprland too. But sometimes it borks itself for faulty theme installs. So rip.
- Make your own environment with this. DE is abit bloated. WM is cool, but they all feel the same. Dwm is no exception, but least painful. Product of [`these guys`](https://suckless.org/).
## Scratch pad
- In accordance to dwm's default floating window management. [`scratchpad`](https://dwm.suckless.org/patches/scratchpad/) will spawn a floating window at center.
## Installation
- Dwm, Dwmblocks must be installed correctly.
```
make # in dwm/dwmblock directory
sudo make clean install # check the cli output 
```
- Tinker should be done in [`config.h`](https://github.com/SaxoCatto/dwm-rice/blob/main/config.h). Then run below again:
```
sudo make clean install # check the cli output 
```

# Features
- Tilting windows, center master (for the Terminal at least)
- Clickable workspace and clickable windows tilting style.
## Patches
- Patch: patch -i ./path/to/patch.diff
- [`statuscmd`](https://dwm.suckless.org/patches/statuscmd/): core for the status bar. 
- [`systray`](https://dwm.suckless.org/patches/systray/): adds a tray.
- [`scratchpad`](https://dwm.suckless.org/patches/scratchpad/): spawn or restore a floating window.
- [`cfact`](https://dwm.suckless.org/patches/cfacts/): different weights for different windows. You can now implement it, well I haven't do it in this config yet.
- [`layoutmenu`](https://dwm.suckless.org/patches/layoutmenu/): adds a context menu in dwm. Right click layout icon.
- [Riodraw]: can't seem to find it
## Binding
- Open Dmenu: <kbd>Alt</kbd>+</kbd>D<kbd>
- Open terminal (kitty is the default): <kbd>Alt</kbd>+<kbd>Enter</kbd>
- Quit dwm normally: <kbd>Alt</kbd>+<kbd>Shift</kbd>+<kbd>Q</kbd>
- Switch workspaces: <kbd>Alt</kbd>+<kbd>Number</kbd> *(Number is 1 to 0)*
- Cycle through workspaces: <kbd>Alt</kbd>+<kbd>G</kbd>
- Open file manager (Thunar is the default): <kbd>Super</kbd>+<kbd>F</kbd>
- I will not list all here, but if you must, check the [`config.h`](https://github.com/SaxoCatto/dwm-rice/blob/main/config.h)
## Preview
- Yea, I will add an subfolder here for the pictures and videos. 

### Way I do things
- Write scripts. Might have multiple versions for one specific feature.
- Have one master file to control the features. Hence trying out 1 features but for multiple versions.
- Within dwmblock.c, I change the update interval and link to the script.
- I put things in my <kbd>/.local/bin</kbd>, but you **MUST** source the absolute path.
