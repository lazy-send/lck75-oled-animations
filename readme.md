# Lck75 firmware with several new features

## Quick Install: <br/>

#### Flash the lck_mo keyboard firmware
 - Setup [Qmk Flash](https://qmk.github.io/qmk_mkdocs/master/en/tutorial_flashing/) on your machine
 - Flash the lck_mo firmware
   - Linux: `qmk flash -kb lazy_send/satisfaction75/rev1 -km default`
   - Max/Windows: flash the firmware `lazy_send/lck_mo` with QMK Toolbox using the [default keymap hexfile](https://github.com/lazy-send/lck75-oled-animations/tree/main/lck_mo/lazy_send_lck_mo_default.hex)  

## Animations: <br/>
#### Check the [Animations](https://github.com/lazy-send/lck75-oled-animations/tree/main/animations) folder for the gifs that will play on the OLED 
- LCK75's bongo
- Monty Python's French Taunting
- One Piece Ship
- One Piece Nami
- HXH Killua
- One Punch Man Saitama
#### To add an animation to the OLED
 1. Drag it from the [animations_bin](https://github.com/lazy-send/lck75-oled-animations/tree/main/lck75/animations_bin) folder into the [animations](https://github.com/lazy-send/lck75-oled-animations/tree/main//lck75/animations) folder.
 2. Import the animation file into  [lck75.c](https://github.com/lazy-send/lck75-oled-animations/blob/db70a9d407e65d285fe090b0d688fa8e2fac45d4/lck75/lck75.c#L16.) by adding a line or replacing a previous animation
 3. Call the animation function in the [animation_select](https://github.com/lazy-send/lck75-oled-animations/blob/db70a9d407e65d285fe090b0d688fa8e2fac45d4/lck75/lck75.c#L45) by adding another case or replacing a previous animation
4. Re-flash and test it out!

## Repo Filestructure: <br/>

```
lck75-oled-animations
│   lck75_mo_OLED.gif [demo of lck_mo OLED]
│   README.md
|
└───animations [gif demos of OLED animations]
│   │   onepiece_ship.gif
│   │   ...
|
└───lck75 [LCK75 with different OLED animations]
│   │   lck75.c
│   │   lck75.h
|   |   ...
│   │
│   └───animations [Installed animations]
│   │   │   nami.c
│   │   │   ship.c
│   │   │   animations-utils.c
│   │
│   └───animations_bin [Functional but not installed]
│       |   killua.c
│       |   onepunch.c
│       |   taunt.c
│       |   bongo.c
│   
└───lck_mo [LCK75 with nami, ship, killua animations]
    |   lck_mo.c
    |   lck_mo.h
    |   ...
    |
    └───animations
        │   nami.c
        │   ship.c
        │   killua.c
        │   animations-utils.c
```

Added : 
- Hotkeys to swap between animations
   - Mod + PAGE_UP => view next animation
   - Mod + PAGE_DOWN => view previous animation

LCK75R2 Fixed : 
 - Rotary Encoder Volume won't stop going up on mac / linux
 - Caps Lock doesn't work without modifier key
