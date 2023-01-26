# lck75

lck75 firmware with several new features

Animations: 
    Check the [Animations](https://github.com/lazy-send/lck75-oled-animations/tree/main/animations) folder for the gifs that will play on the OLED
        - LCK75's bongo
        - Monty Python's French Taunting
        - One Piece Ship
        - One Piece Nami
        - HXH Killua
        - One Punch Man Saitama
    To add an animation to the OLED, drag it from the [animations_bin](https://github.com/lazy-send/lck75-oled-animations/tree/main/lck75/animations_bin) folder into the [animations](https://github.com/lazy-send/lck75-oled-animations/tree/main//lck75/animations) folder.
    Then, import it in [lck75.c](https://github.com/lazy-send/lck75-oled-animations/blob/db70a9d407e65d285fe090b0d688fa8e2fac45d4/lck75/lck75.c#L16.)
    Finally, call the animation function in the [animation_select](https://github.com/lazy-send/lck75-oled-animations/blob/db70a9d407e65d285fe090b0d688fa8e2fac45d4/lck75/lck75.c#L45).
    Re-flash and test it out!

Added : 
- Hotkeys to swap between them
   - Mod + PAGE_UP => view next animation
   - Mod + PAGE_DOWN => view previous animation

LCK75R2 Fixed : 
 - Rotary Encoder Volume won't stop going up on mac / linux
 - Caps Lock doesn't work without modifier key
