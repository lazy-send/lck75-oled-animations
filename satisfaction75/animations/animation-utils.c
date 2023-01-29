#pragma once

#ifndef MAX_ANIMATION_SPEED
  #define MAX_ANIMATION_SPEED 5 //Max animation speed
#endif
#ifndef ANIM_FRAME_DURATION
  #define ANIM_FRAME_DURATION 600 //Invert animation color and background
#endif
#ifndef ANIM_SIZE
  #define ANIM_SIZE 512
#endif

static void render_animation(char **tap_frames, uint8_t tap_frames_len, bool rewrite) {
    static uint32_t anim_timer = 0;
    static uint8_t current_tap_frame = 0;
    uint anim_speed = ANIM_FRAME_DURATION;

    void animation_phase(void) {
      if (!rewrite){
        current_tap_frame = (current_tap_frame + 1) % tap_frames_len;
      }
        oled_write_raw_P(tap_frames[abs((tap_frames_len-1)-current_tap_frame)], ANIM_SIZE);
    }

    if (get_current_wpm() * 5 > ANIM_FRAME_DURATION){
        anim_speed = MAX_ANIMATION_SPEED;
    } else {
        anim_speed = ANIM_FRAME_DURATION - get_current_wpm() * 5;
    }
    if (rewrite){
        animation_phase();
    } else if (timer_elapsed32(anim_timer) > anim_speed) {
        anim_timer = timer_read32();
        animation_phase();
    }
}
  
