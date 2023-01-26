#pragma once

#include "animation-utils.c"


#define IDLE_FRAMES_KILLUA 1
#define TAP_FRAMES_KILLUA 8

#ifdef OLED_ENABLE
bool killua(void) {
    if (!oled_task_user()) {
        return false;
    }
// 'cropped1-0', 128x32px
static const char killua_frame_0 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x70, 0x60, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x89, 
	0x9f, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xf9, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
	0xfc, 0xf6, 0xf4, 0xfc, 0xf8, 0x78, 0x38, 0x18, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x18, 0x0c, 0xf8, 0xf9, 0xb9, 0xfb, 0xfb, 0xff, 
	0xff, 0xaf, 0xf7, 0xfb, 0xcf, 0xff, 0xff, 0x9f, 0xa7, 0xbf, 0xbe, 0xcf, 0xdf, 0xff, 0xff, 0xff, 
	0xe7, 0xf3, 0xc7, 0xc7, 0x9f, 0x9f, 0x9f, 0xff, 0xf7, 0xdf, 0xdf, 0xfb, 0xfb, 0xb7, 0xf7, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xee, 0x6e, 0x6e, 0x0e, 0x06, 0x06, 0x02, 0x03, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x83, 
	0x03, 0x07, 0x07, 0x47, 0x47, 0x47, 0x5f, 0x1e, 0x0e, 0x1e, 0x1f, 0x3f, 0x3f, 0x7f, 0xfe, 0xfe, 
	0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x1e, 0x1e, 0x1e, 0x4f, 0x0f, 0x0f, 0x0f, 0x0f, 0x03, 0x83, 0x83, 
	0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe8, 0xf4, 0xf2, 0xf3, 0xe1, 0x81, 0x01, 0xfc, 
	0xfc, 0xf0, 0xe0, 0x80, 0xb8, 0xf8, 0xfc, 0xfc, 0xfc, 0xf9, 0xf3, 0xf1, 0xf3, 0xe2, 0xe0, 0xe0, 
	0xe0, 0xe2, 0x72, 0x31, 0x19, 0x09, 0x01, 0x81, 0xc0, 0xe0, 0xf0, 0xf0, 0xe0, 0xf0, 0xf0, 0xf0, 
	0x80, 0x01, 0xe1, 0xf9, 0xfa, 0xf2, 0xf4, 0xec, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cropped(1)-2', 128x32px
static const char killua_frame_2 [] PROGMEM = {
	0x00, 0x80, 0x82, 0x92, 0x92, 0x90, 0x80, 0x88, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc2, 0xc3, 0x40, 
	0x83, 0x84, 0x02, 0x46, 0x46, 0x46, 0x00, 0x84, 0x86, 0xc2, 0xc3, 0xc0, 0x60, 0xb0, 0x30, 0x18, 
	0x18, 0x08, 0x08, 0x18, 0x18, 0x38, 0xf8, 0xf0, 0xf1, 0xe1, 0xe0, 0xc0, 0xe3, 0xe7, 0xee, 0xcd, 
	0x9f, 0xfe, 0xff, 0xfd, 0xd9, 0xfa, 0xfa, 0xf3, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 
	0xff, 0xf7, 0xf7, 0xff, 0xff, 0x7b, 0x7d, 0x39, 0x3b, 0x1f, 0x0b, 0x0d, 0x0d, 0x05, 0x04, 0x24, 
	0x1c, 0x0c, 0x04, 0x24, 0x10, 0x00, 0x00, 0x00, 0x40, 0x20, 0x00, 0x10, 0x30, 0x10, 0xf1, 0xb8, 
	0x38, 0x38, 0x30, 0x08, 0x0c, 0x04, 0x0c, 0x98, 0x0c, 0x1c, 0x1e, 0x31, 0x11, 0x08, 0x0c, 0x8c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x04, 0x01, 0x00, 0x01, 0x01, 
	0x01, 0x00, 0x00, 0x04, 0x04, 0x20, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x03, 0x02, 0x06, 0x0c, 0x0e, 0x0c, 0x0c, 0x0c, 0x3c, 0x3c, 0xf9, 0xf9, 0xf9, 0xfb, 0xff, 0xff, 
	0xff, 0xbf, 0xf7, 0xfb, 0xdf, 0xff, 0xff, 0x9f, 0xaf, 0xbf, 0xbe, 0xcf, 0xdf, 0xff, 0xff, 0xff, 
	0xf7, 0xf3, 0xc3, 0xc7, 0xbf, 0x9f, 0xbf, 0xff, 0xf7, 0xdf, 0xdf, 0xfb, 0xfb, 0xb7, 0xfe, 0xff, 
	0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xee, 0xee, 0x6f, 0x6f, 0x67, 0x67, 0x67, 0x43, 0x83, 0x03, 0x03, 
	0x07, 0x07, 0x03, 0x00, 0x82, 0x03, 0x01, 0x08, 0x80, 0xe0, 0x60, 0x60, 0x02, 0x02, 0x23, 0x31, 
	0x71, 0x39, 0x18, 0x0c, 0x06, 0x40, 0x40, 0x10, 0x00, 0x00, 0x1c, 0x1c, 0x46, 0x02, 0x03, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x83, 0x83, 
	0x43, 0x47, 0x47, 0x4f, 0x47, 0x47, 0x1f, 0x1e, 0x8e, 0x1e, 0x1f, 0x3f, 0x3f, 0x7f, 0xfe, 0xfe, 
	0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x1f, 0x1e, 0x1f, 0x4f, 0x4f, 0x4f, 0x4f, 0x0f, 0x03, 0x83, 0x03, 
	0x06, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe8, 0xf6, 0xf2, 0xf3, 0xe1, 0x81, 0x01, 0xfc, 
	0xfc, 0xf0, 0xe0, 0x80, 0xb8, 0xf8, 0xfc, 0xfc, 0xfc, 0xf9, 0xf3, 0xf3, 0xf3, 0xe2, 0xe0, 0xe0, 
	0xe0, 0xe2, 0x73, 0x31, 0x1b, 0x09, 0x05, 0x81, 0xc0, 0xe0, 0xf0, 0xf0, 0xe0, 0xf0, 0xf0, 0xf0, 
	0x80, 0x01, 0xe1, 0xf9, 0xf2, 0xf2, 0xf6, 0xec, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cropped(1)-4', 128x32px
static const char killua_frame_4 [] PROGMEM = {
	0x00, 0x80, 0x82, 0x92, 0x92, 0x90, 0x80, 0x88, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc3, 0xc3, 0xc0, 
	0x85, 0x84, 0x00, 0x46, 0x46, 0x44, 0x06, 0x86, 0x86, 0xc2, 0xc3, 0xc2, 0x60, 0x30, 0x50, 0x58, 
	0x58, 0x48, 0x08, 0x18, 0x18, 0x38, 0xf8, 0xf9, 0xf1, 0xf1, 0xe0, 0xc0, 0xe3, 0xe7, 0xee, 0xcd, 
	0x9f, 0xfe, 0xff, 0xfd, 0xfb, 0xfa, 0xfa, 0xf3, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 
	0xff, 0xf7, 0xf7, 0xff, 0xff, 0x7f, 0x7d, 0x7d, 0xfb, 0x7f, 0x7f, 0x7d, 0xbd, 0x3d, 0x3c, 0xfc, 
	0xbc, 0xdc, 0x7c, 0x7e, 0x3c, 0x3f, 0x1c, 0x1e, 0x7e, 0xfe, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xbb, 
	0x7b, 0x7d, 0x31, 0x39, 0x1d, 0x2d, 0x1c, 0x9c, 0x9d, 0xde, 0x3f, 0x3b, 0x31, 0x18, 0x0c, 0x8c, 
	0x10, 0x10, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x01, 0x01, 0x00, 0x00, 0x01, 0x41, 0x41, 0x00, 
	0x00, 0x00, 0x80, 0x80, 0x80, 0xc4, 0xc1, 0xc5, 0x47, 0x43, 0x41, 0x40, 0xc0, 0x40, 0x40, 0x62, 
	0x23, 0x26, 0x26, 0x0c, 0x0e, 0x0c, 0x0c, 0x2c, 0x3c, 0xfc, 0xfd, 0xf9, 0xfb, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xf7, 0xfb, 0xdf, 0xff, 0xff, 0xdf, 0xaf, 0xbf, 0xbe, 0xef, 0xdf, 0xff, 0xff, 0xff, 
	0xf7, 0xf3, 0xc3, 0xe7, 0x9f, 0x9f, 0xbf, 0xff, 0xf7, 0xdf, 0xdf, 0xff, 0xfb, 0xb7, 0xfe, 0xff, 
	0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xee, 0x6e, 0x6f, 0x6e, 0xef, 0x67, 0xe7, 0xc3, 0xc3, 0x33, 0x03, 
	0x07, 0x07, 0x03, 0x43, 0xc3, 0x43, 0x03, 0x1e, 0x9f, 0xe2, 0xe0, 0xe1, 0xe3, 0xc7, 0xe3, 0xf3, 
	0xf9, 0xf9, 0xbd, 0x05, 0x07, 0xc3, 0xe0, 0x30, 0x00, 0x18, 0x1c, 0x1c, 0x46, 0x43, 0x23, 0x01, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 
	0x02, 0x03, 0x01, 0x21, 0x11, 0x90, 0x10, 0x10, 0x18, 0x08, 0x00, 0x00, 0x02, 0x8c, 0xc4, 0x80, 
	0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe4, 0x7f, 0x3f, 0x3f, 0x1f, 0x1b, 0x1f, 0xcf, 0xcf, 0x8f, 
	0x4f, 0x6f, 0x47, 0x4f, 0x47, 0x67, 0x7f, 0x1f, 0x8f, 0x1f, 0x5f, 0x3f, 0x7f, 0x7f, 0xff, 0xfe, 
	0xff, 0x7f, 0x7f, 0x3f, 0x5f, 0xdf, 0x9f, 0x9f, 0xcf, 0xcf, 0xcf, 0xef, 0xef, 0xe3, 0xe3, 0xc3, 
	0xc7, 0xc6, 0xc4, 0xc8, 0x8c, 0x84, 0x04, 0x86, 0x82, 0x81, 0x83, 0x83, 0x81, 0xc5, 0xc1, 0xe1, 
	0xe1, 0x61, 0x70, 0x78, 0x38, 0x7c, 0x7e, 0x7a, 0xb9, 0x38, 0xe0, 0xc0, 0xc8, 0xec, 0x26, 0x07, 
	0x0d, 0x05, 0x00, 0x00, 0x02, 0x04, 0x06, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x80, 0x80, 0x00, 0x00, 0x02, 0x00, 0x22, 0x01, 0x34, 0x18, 0x1e, 0x0c, 0x0f, 0x0f, 0x07, 0x07, 
	0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x80, 0xc0, 0xec, 0xf6, 0xf2, 0xfb, 0xe3, 0x83, 0x01, 0xfc, 
	0xfc, 0xf0, 0xe0, 0xc0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xf9, 0xf3, 0xf1, 0xf3, 0xe2, 0xe0, 0xe0, 
	0xe2, 0xe2, 0x73, 0x31, 0x1b, 0x8b, 0x01, 0x81, 0xc0, 0xe0, 0xf0, 0xf8, 0xe0, 0xf0, 0xf2, 0xf2, 
	0xe0, 0xdf, 0xf7, 0xff, 0xfb, 0xfb, 0xff, 0xfb, 0xf3, 0xe3, 0x63, 0xe1, 0xe3, 0xed, 0xed, 0x69, 
	0x61, 0x61, 0x72, 0x3c, 0x30, 0x30, 0x38, 0x39, 0x1d, 0x1e, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cropped(1)-1', 128x32px
static const char killua_frame_1 [] PROGMEM = {
	0x00, 0x80, 0x82, 0x92, 0x92, 0x90, 0x80, 0x88, 0x80, 0x94, 0xc0, 0x81, 0xc1, 0xc3, 0xc1, 0xc0, 
	0xc0, 0x84, 0xc7, 0x43, 0xc2, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc2, 0xe0, 0xe3, 0xf0, 0xf0, 0x78, 
	0x78, 0xf8, 0x78, 0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 0xf8, 0xe0, 0xe3, 0xe7, 0xee, 0xd9, 
	0x9f, 0xfe, 0xfe, 0xfd, 0xfb, 0xfa, 0xfe, 0xf7, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfd, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x7f, 0x7d, 0x3f, 0x1f, 0x0f, 0x0c, 0x8d, 0x8d, 0xe4, 0xf4, 
	0xdc, 0xec, 0xe4, 0x74, 0x10, 0x10, 0x00, 0x00, 0x60, 0xe4, 0x02, 0x10, 0x30, 0x70, 0xf9, 0xf8, 
	0x78, 0x38, 0x30, 0x1c, 0x0c, 0x04, 0x0c, 0x9c, 0x8c, 0x1c, 0x3e, 0x33, 0x31, 0x08, 0x0c, 0x8c, 
	0x11, 0x99, 0x90, 0x84, 0xf9, 0xec, 0xfc, 0xf7, 0xf7, 0x71, 0x7d, 0x7f, 0x5f, 0x17, 0x6f, 0x6f, 
	0x07, 0x03, 0xbb, 0x7f, 0x7f, 0xbf, 0xab, 0xe7, 0x67, 0xef, 0x67, 0x47, 0x05, 0x11, 0x31, 0x02, 
	0x03, 0x07, 0x26, 0x0c, 0x0e, 0x0d, 0x0d, 0x0c, 0x3c, 0xbd, 0xfd, 0xf9, 0xf9, 0xfb, 0xff, 0xff, 
	0xff, 0xbf, 0xf7, 0xff, 0xdf, 0xff, 0xff, 0x9f, 0xaf, 0xbf, 0xbf, 0xef, 0xdf, 0xff, 0xff, 0xff, 
	0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xf7, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xe7, 0xe7, 0xc7, 0xe7, 0xf3, 0x17, 0x1f, 0xdf, 0xe7, 0xe3, 0xe3, 0xfb, 0xd7, 0x77, 0xf3, 
	0xfb, 0xf9, 0xbd, 0x8f, 0xef, 0xe6, 0xe0, 0xf0, 0xd8, 0xf8, 0xfc, 0xfc, 0xee, 0xe7, 0xf3, 0xfd, 
	0xfc, 0xff, 0x7f, 0x3f, 0xbf, 0x1f, 0x1f, 0x9f, 0x06, 0x02, 0x02, 0x10, 0x04, 0x06, 0x04, 0x04, 
	0x06, 0x03, 0x01, 0x21, 0x11, 0x01, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xe7, 0xc3, 
	0xc3, 0xe7, 0xe7, 0x6f, 0x67, 0x77, 0x7f, 0x3f, 0xef, 0x5f, 0x5f, 0x3f, 0x7f, 0x7f, 0xff, 0xfe, 
	0xff, 0x7f, 0x7f, 0x7f, 0x9f, 0x9f, 0x9f, 0x9f, 0x4f, 0x4f, 0x4f, 0x6f, 0xcf, 0xff, 0xf7, 0xbf, 
	0xbf, 0xbf, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xf7, 0xf7, 0xf7, 0xf7, 0xf3, 0xf3, 
	0xf3, 0x71, 0x70, 0x78, 0x78, 0x1c, 0x1f, 0x1f, 0x1f, 0x1f, 0x0c, 0x1c, 0x1e, 0x1e, 0x1f, 0x0f, 
	0x1f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x07, 0x07, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0xfe, 0xf6, 0xf2, 0xff, 0xff, 0xff, 0x3f, 0xff, 
	0xff, 0xf9, 0xf0, 0xf2, 0xfb, 0xf8, 0xfc, 0xfc, 0xfc, 0xfb, 0xf3, 0xf7, 0xf3, 0xf6, 0xfe, 0xec, 
	0xe8, 0xe6, 0x73, 0x33, 0x1b, 0x0b, 0x07, 0x81, 0xc0, 0xe0, 0xf0, 0xf8, 0xe0, 0xf0, 0xf0, 0xf0, 
	0x80, 0xdf, 0xff, 0xfb, 0xfb, 0xff, 0xfe, 0xec, 0xd6, 0x86, 0x00, 0x00, 0x00, 0x09, 0x08, 0x01, 
	0x01, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cropped(1)-13', 128x32px
static const char killua_frame_13 [] PROGMEM = {
	0x00, 0x82, 0x82, 0x93, 0x93, 0x93, 0x8f, 0x8f, 0x9d, 0xdf, 0xdf, 0xdf, 0xdb, 0xeb, 0xcf, 0xc7, 
	0xcf, 0xcf, 0xcf, 0xef, 0xef, 0xef, 0xdf, 0xdf, 0xdf, 0xdf, 0xdb, 0xfb, 0xf3, 0xf3, 0xf9, 0xf9, 
	0xf9, 0xf8, 0xfc, 0xfc, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xfd, 0xfc, 0xf9, 0xff, 0xf7, 0xee, 0xed, 
	0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfa, 0xfa, 0xf7, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 
	0xff, 0xf7, 0xff, 0xff, 0xff, 0x7f, 0x7d, 0x3d, 0x7f, 0x5f, 0x0b, 0x2d, 0x8d, 0x8d, 0xe4, 0xf4, 
	0xfc, 0xfc, 0xec, 0x7c, 0x78, 0xb9, 0x9c, 0xf8, 0xfc, 0xf4, 0xf6, 0xfe, 0xfc, 0xfe, 0xff, 0xff, 
	0xff, 0x7f, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x9f, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x2f, 0x9f, 
	0xf9, 0xf9, 0xf9, 0xfd, 0xfd, 0xff, 0xfe, 0xff, 0x7f, 0xbf, 0x2f, 0x7f, 0xdf, 0x7f, 0x3f, 0x6f, 
	0x0f, 0x1f, 0xbf, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 
	0xf7, 0xf7, 0xf7, 0xff, 0x7f, 0x7f, 0x6f, 0x7d, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xf7, 0xff, 0xdf, 0xff, 0xff, 0xbf, 0xef, 0xbf, 0xbf, 0xef, 0xdf, 0xff, 0xff, 0xff, 
	0xf7, 0xf3, 0xdf, 0xcf, 0x9f, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xb7, 0xfe, 0xff, 
	0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xef, 0xef, 0xef, 0xef, 0xff, 0xff, 0xef, 0xeb, 0xfb, 0xff, 0xff, 
	0xe7, 0xa7, 0xa7, 0xc3, 0xeb, 0xfb, 0xcf, 0xdf, 0xdf, 0xef, 0xe7, 0xef, 0xff, 0xf7, 0x77, 0xf3, 
	0xfb, 0xfb, 0x3d, 0x0d, 0x0f, 0xc7, 0xe2, 0x30, 0x00, 0x18, 0x1c, 0x9c, 0x4e, 0x47, 0x23, 0x09, 
	0x01, 0x01, 0x01, 0x81, 0x81, 0xc8, 0xc4, 0xe4, 0xf6, 0xf2, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfe, 
	0xfe, 0xff, 0xff, 0xff, 0xfe, 0xde, 0xf8, 0x38, 0x18, 0x88, 0x8c, 0x84, 0x8f, 0xce, 0xcc, 0x8c, 
	0x8d, 0x46, 0xc6, 0xc6, 0x87, 0x8b, 0x8f, 0x67, 0x23, 0x81, 0x84, 0x83, 0xc7, 0xc7, 0xc7, 0xc3, 
	0xc3, 0x67, 0x47, 0x4f, 0x47, 0x67, 0x7f, 0x3f, 0x9f, 0x5f, 0x5f, 0x3f, 0x3f, 0x7f, 0xff, 0xfe, 
	0xff, 0x7f, 0x7f, 0xbf, 0x9f, 0x9f, 0x9f, 0xdf, 0x4f, 0x4f, 0x4f, 0x6f, 0xcf, 0xff, 0xdf, 0xbf, 
	0xaf, 0xbc, 0xbe, 0xbe, 0x9e, 0x1f, 0x5f, 0x5f, 0x1f, 0x1f, 0x07, 0x07, 0x0f, 0x07, 0x07, 0x81, 
	0x83, 0xc1, 0xc1, 0xd1, 0xdb, 0xcd, 0xe7, 0x67, 0x3f, 0x36, 0x30, 0x18, 0x18, 0x3c, 0x3e, 0x1f, 
	0x1f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x06, 0x04, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x10, 0xf8, 0xff, 0xff, 0xdf, 0xff, 0x9f, 0x0f, 0x46, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x03, 
	0x01, 0x07, 0x07, 0x07, 0x3f, 0xef, 0x6f, 0x7b, 0xf7, 0xf7, 0xff, 0xef, 0xef, 0xe5, 0xf1, 0xf1, 
	0xf3, 0xf9, 0x18, 0x1c, 0x2c, 0x0f, 0x86, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 
	0xfc, 0xf8, 0xe0, 0xc0, 0xfc, 0xf8, 0xfc, 0xfc, 0xfc, 0xfb, 0xf3, 0xf7, 0xff, 0xfa, 0xfe, 0xfe, 
	0xfe, 0xfe, 0x7f, 0x3f, 0xbf, 0xdf, 0x6f, 0xaf, 0xde, 0xef, 0xf7, 0xff, 0xef, 0xf7, 0xf7, 0xf7, 
	0xc7, 0xdf, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x9f, 0x9e, 0xbe, 0xbe, 0x9f, 0xfb, 0xfb, 
	0xf1, 0xf1, 0x75, 0x7c, 0x7c, 0x30, 0x32, 0x30, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x0c, 0x8c, 
	0x8c, 0xcc, 0x80, 0x84, 0xc4, 0xc0, 0x60, 0x70, 0x70, 0x38, 0x38, 0x38, 0x1a, 0x1e, 0x1e, 0x1f
};
// 'cropped(1)-14', 128x32px
static const char killua_frame_14 [] PROGMEM = {
	0xe0, 0xe0, 0xe2, 0xf3, 0xd2, 0x92, 0xc8, 0xc8, 0xd0, 0xdc, 0xd8, 0xc1, 0xc1, 0xeb, 0xcb, 0xc1, 
	0xc7, 0xc7, 0xc7, 0xc7, 0x4f, 0xc7, 0xc6, 0x86, 0xc6, 0xcf, 0xc3, 0xe3, 0xf3, 0xf3, 0xf9, 0xfd, 
	0xfd, 0x7e, 0x7e, 0x3f, 0x3b, 0xfb, 0xf9, 0xff, 0xff, 0xf7, 0xe7, 0xe3, 0xe3, 0xe7, 0xee, 0xef, 
	0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfa, 0xfa, 0xf7, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x9f, 0xff, 0xff, 
	0xfd, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x1f, 0x07, 0xef, 0xe7, 0x37, 0xb3, 0x71, 0xfb, 0xf9, 0xf9, 
	0xf8, 0x7c, 0x70, 0xbc, 0x3c, 0x2d, 0x1c, 0x9c, 0x8d, 0xde, 0x3f, 0x3b, 0x31, 0x18, 0x0c, 0x8c, 
	0x11, 0x11, 0x99, 0x82, 0x0d, 0xcf, 0x6f, 0x4f, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x1f, 0x4f, 0x0f, 
	0x0f, 0x9f, 0xbf, 0xff, 0x7f, 0x7f, 0x7b, 0x7f, 0x7f, 0xff, 0xf7, 0xef, 0xfd, 0xf9, 0xf3, 0x73, 
	0x73, 0x27, 0x37, 0x2f, 0x0e, 0x1e, 0x3c, 0x3c, 0x3d, 0xfd, 0xfd, 0xfb, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xf7, 0xff, 0xdf, 0xff, 0xff, 0x9f, 0xef, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xbf, 
	0xaf, 0x87, 0x0f, 0xcb, 0xcb, 0xdf, 0x1f, 0x1f, 0xdf, 0xee, 0xe6, 0xe7, 0x6f, 0xc7, 0x67, 0xf7, 
	0xfb, 0x3b, 0x1f, 0x0d, 0x0f, 0xc6, 0xe0, 0x30, 0x10, 0x10, 0x1c, 0x9c, 0x46, 0x63, 0x23, 0x01, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x04, 0x00, 0x80, 0x02, 0x00, 0x00, 0x04, 0x04, 0x04, 0xce, 
	0xd7, 0xcf, 0xef, 0xf3, 0xfa, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfe, 0xfd, 0xec, 0x6c, 0xec, 
	0x6d, 0x4c, 0xcc, 0xce, 0x8e, 0x86, 0x86, 0xf7, 0x27, 0x23, 0x6f, 0x7f, 0xff, 0xff, 0xff, 0xfb, 
	0xf3, 0x7b, 0xf7, 0xef, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
	0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x7f, 0x7f, 0xef, 0xff, 0xff, 0xf3, 0xff, 
	0xff, 0xbf, 0x3f, 0x1f, 0x3f, 0x2f, 0x1f, 0x0f, 0x1f, 0x07, 0x07, 0x03, 0x03, 0x07, 0x03, 0x01, 
	0x81, 0x81, 0x00, 0x00, 0x10, 0x8c, 0xc6, 0xe2, 0xe1, 0xe0, 0xf0, 0xf0, 0xf8, 0x7c, 0x7e, 0x7f, 
	0x7f, 0x7c, 0x38, 0x78, 0x7c, 0x74, 0x64, 0x60, 0x61, 0xe1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfe, 0xff, 0xfc, 
	0xfc, 0xff, 0xf6, 0xf6, 0xf7, 0xe7, 0xe7, 0xe7, 0x67, 0x27, 0x01, 0x01, 0x01, 0x03, 0x01, 0x00, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xd8, 0xfe, 0xf6, 0xf3, 0xfb, 0xff, 0x8f, 0x33, 0xff, 
	0xff, 0xf3, 0xe7, 0xc7, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xed, 
	0xee, 0xff, 0x77, 0x37, 0x1b, 0x0b, 0x0d, 0x83, 0xc2, 0xe3, 0xf6, 0xfb, 0xef, 0xf7, 0xf7, 0xf7, 
	0xcf, 0xff, 0xef, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf0, 0xf0, 0x70, 0x78, 0x3c, 0x3e, 0x3d, 0x1e, 
	0x0e, 0x07, 0x06, 0x07, 0x0f, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x07
};
// 'cropped(1)-16', 128x32px
static const char killua_frame_16 [] PROGMEM = {
	0x00, 0x80, 0x82, 0x92, 0x92, 0x90, 0x80, 0x88, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc1, 0x41, 0x41, 
	0x80, 0x85, 0x41, 0x46, 0x46, 0x02, 0x06, 0x86, 0xc6, 0xc6, 0xc3, 0xc3, 0x62, 0xf1, 0xf1, 0x79, 
	0x79, 0x78, 0x78, 0x7c, 0xbc, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 
	0xff, 0xff, 0xff, 0xfd, 0xff, 0xfa, 0xfe, 0xf7, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 
	0xff, 0xf7, 0xf7, 0xff, 0xfb, 0x7f, 0x7d, 0x7d, 0x3f, 0x9f, 0x8f, 0x8d, 0x8d, 0x8d, 0xe4, 0xf4, 
	0xfc, 0xcc, 0xfc, 0xfc, 0xf8, 0xf1, 0xc0, 0xe0, 0xe0, 0xe4, 0xf6, 0xf0, 0x70, 0xf8, 0xf9, 0xfc, 
	0xfc, 0x7c, 0xfe, 0xbe, 0x3f, 0x2f, 0x9f, 0x9f, 0xbf, 0x7f, 0x3f, 0x3b, 0x33, 0x0f, 0x0d, 0x8f, 
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x01, 0x00, 0x04, 0x00, 0x00, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x43, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x03, 0x23, 0x06, 0x0e, 0x0e, 0x1c, 0x0c, 0x2d, 0x3d, 0xbd, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xbf, 0xf7, 0xff, 0xdf, 0xff, 0xff, 0x9f, 0xaf, 0xbf, 0xbe, 0xef, 0xdf, 0xff, 0xff, 0xff, 
	0xff, 0xfb, 0xdf, 0xf7, 0x9f, 0x9f, 0xbf, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xfb, 0xb6, 0xfe, 0xff, 
	0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 
	0x87, 0xa7, 0x07, 0xc3, 0xc3, 0xc3, 0x1b, 0x1f, 0xdf, 0xf6, 0xf0, 0xf9, 0x7b, 0xd7, 0x67, 0xf3, 
	0xfb, 0x79, 0x1d, 0x0f, 0x0f, 0xc6, 0xe0, 0x30, 0x10, 0x18, 0x1c, 0x1c, 0x4e, 0x66, 0x27, 0x0d, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 
	0x02, 0x81, 0x81, 0xf0, 0x90, 0xf0, 0xf8, 0x78, 0x38, 0x38, 0x70, 0x70, 0x70, 0x74, 0x60, 0x60, 
	0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x60, 0x20, 0x20, 0x00, 0x01, 0x04, 0xc6, 0xc3, 0xc3, 
	0xc3, 0xc7, 0x47, 0x4f, 0x47, 0x67, 0x1f, 0x1f, 0x9e, 0x5f, 0x5f, 0x3f, 0x7f, 0x7f, 0xff, 0xfe, 
	0xff, 0xff, 0x7f, 0xbf, 0xff, 0xdf, 0xbf, 0xff, 0xcf, 0xef, 0xef, 0xef, 0xff, 0xf7, 0xf3, 0xfb, 
	0xf7, 0xf6, 0xfe, 0xfe, 0x7e, 0x7e, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x37, 
	0x8f, 0x07, 0x26, 0x36, 0x36, 0x1e, 0x37, 0x37, 0x3f, 0x37, 0x37, 0x33, 0x37, 0x3f, 0x3f, 0x3f, 
	0x3f, 0x27, 0x23, 0x27, 0x67, 0x67, 0x67, 0x26, 0x07, 0x03, 0x03, 0x03, 0x06, 0x06, 0x07, 0x06, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x02, 0x06, 0x02, 0x02, 
	0x03, 0x03, 0x03, 0x03, 0x01, 0x03, 0x00, 0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x81, 0x80, 0xd0, 0xfe, 0xf6, 0xfb, 0xfb, 0xfb, 0xcf, 0xf1, 0xfc, 
	0xfc, 0xf0, 0xe4, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0x7f, 0x3f, 0xbf, 0x9f, 0x5f, 0x9b, 0xdf, 0xff, 0xff, 0xff, 0xef, 0xfd, 0xff, 0xff, 
	0xcf, 0xdf, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x83, 0x03, 0x03, 0x03, 0x03, 0x0b, 0x01, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cropped(1)-12', 128x32px
static const char killua_frame_12 [] PROGMEM = {
	0x00, 0x80, 0x82, 0x92, 0x92, 0x90, 0x80, 0x88, 0x80, 0x80, 0x80, 0x81, 0x81, 0xc9, 0x43, 0x40, 
	0x84, 0x84, 0x00, 0x44, 0x44, 0x44, 0x04, 0x04, 0x84, 0xc0, 0xc2, 0xc2, 0x60, 0x30, 0x10, 0x18, 
	0x48, 0x08, 0x08, 0x18, 0x18, 0x38, 0xf8, 0xf8, 0xf1, 0xf1, 0xe0, 0xc0, 0xe3, 0xe7, 0xee, 0x8d, 
	0x9f, 0xfe, 0xff, 0xfd, 0xf9, 0xfa, 0xfa, 0xf3, 0xf1, 0xfe, 0xff, 0x7f, 0x7e, 0xff, 0xff, 0xfc, 
	0xfb, 0xfb, 0xff, 0xff, 0xff, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 
	0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x7d, 0x7d, 0xff, 0xdf, 0x7f, 0x3d, 0xbd, 0x3d, 0x7d, 0x7c, 
	0x7c, 0xbc, 0xfc, 0x7e, 0x3c, 0x1d, 0x1d, 0x1f, 0xfe, 0xfe, 0x3e, 0x3f, 0x37, 0xff, 0xfb, 0xfb, 
	0xbb, 0x7d, 0x71, 0x1d, 0x0d, 0x2d, 0x1e, 0x9c, 0x8d, 0x5e, 0x3f, 0x33, 0x31, 0x08, 0x0c, 0x8c, 
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x04, 0x04, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x00, 0x80, 0x84, 0x80, 0xe0, 0xc1, 0xc1, 0x61, 0x41, 0x40, 0xc0, 0xc4, 0x80, 0x90, 0x22, 
	0x23, 0x26, 0x26, 0x2c, 0x0e, 0x0c, 0x0c, 0x2c, 0x3c, 0xfc, 0xf9, 0xf9, 0xf9, 0xfb, 0xff, 0xff, 
	0xff, 0xbf, 0xf7, 0xfb, 0xdf, 0xff, 0xff, 0xbf, 0xe7, 0xbf, 0xbe, 0xef, 0xdf, 0xff, 0xff, 0xff, 
	0xe7, 0xf3, 0xcf, 0xc7, 0xbf, 0x9f, 0x9f, 0xff, 0xf7, 0xdf, 0xdf, 0xfb, 0xfb, 0xb6, 0xfe, 0xff, 
	0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xee, 0x6e, 0x6f, 0x6e, 0x66, 0xe7, 0xe7, 0xc7, 0xc7, 0xa3, 0x03, 
	0x07, 0x07, 0x03, 0x43, 0xc3, 0x43, 0x03, 0x1c, 0x9f, 0xe2, 0xe0, 0xe1, 0x43, 0xc3, 0xe3, 0xf3, 
	0xf1, 0xf9, 0x39, 0x0d, 0x07, 0xc2, 0xc0, 0x30, 0x00, 0x18, 0x1c, 0x1c, 0x46, 0x42, 0x03, 0x01, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 
	0x02, 0x03, 0x81, 0x21, 0x10, 0x10, 0x10, 0x18, 0x18, 0x08, 0x00, 0x00, 0x80, 0x84, 0x80, 0x80, 
	0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe1, 0x35, 0x3e, 0x3f, 0x1f, 0x1f, 0x1f, 0xdf, 0xcf, 0xcf, 
	0x6f, 0x67, 0x47, 0x4f, 0x47, 0x67, 0x1f, 0x3f, 0x9e, 0x5f, 0x5f, 0x3f, 0x3f, 0x7f, 0xfe, 0xfe, 
	0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0xde, 0x9e, 0x9e, 0xcf, 0xcf, 0xcf, 0xef, 0xcf, 0xe3, 0xc3, 0xc3, 
	0xc6, 0xc6, 0xc4, 0xc0, 0x80, 0x84, 0x07, 0x06, 0x80, 0x82, 0x83, 0x81, 0x80, 0xc4, 0xc1, 0xc1, 
	0xe1, 0x61, 0x70, 0x78, 0x38, 0x3c, 0x3e, 0x3b, 0x39, 0x30, 0x60, 0xc0, 0xc0, 0x94, 0x06, 0x07, 
	0x0f, 0x05, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x21, 0x31, 0x3a, 0x1b, 0x0c, 0x0e, 0x0f, 0x07, 0x07, 
	0x03, 0x03, 0x01, 0x00, 0x01, 0x00, 0x80, 0xd8, 0xec, 0xf6, 0xf2, 0xf3, 0xf1, 0x8d, 0x03, 0xfc, 
	0xfc, 0xf0, 0xe0, 0xc0, 0xb8, 0xf8, 0xfc, 0xfc, 0xfc, 0xf9, 0xf3, 0xf3, 0xf3, 0xe2, 0xe0, 0xe0, 
	0xe2, 0xe2, 0x73, 0x33, 0x1b, 0x0b, 0x05, 0x81, 0xc0, 0xe0, 0xf0, 0xf8, 0xe0, 0xf0, 0xf0, 0xf0, 
	0xc0, 0xcf, 0xf7, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xe3, 0xe3, 0xe1, 0xe1, 0xe5, 0x79, 0x60, 
	0x60, 0x61, 0x60, 0x38, 0x30, 0x30, 0x38, 0x18, 0x18, 0x1e, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 8976)
static const char* tap[TAP_FRAMES_KILLUA] = {
	killua_frame_0,
	killua_frame_2,
	killua_frame_4,
	killua_frame_1,
	killua_frame_13,
	killua_frame_14,
	killua_frame_16,
	killua_frame_12,
	killua_frame_2
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 5280)
const char* PROGMEM  idle[IDLE_FRAMES_KILLUA] = {
	killua_frame_0
};

render_animation(tap, idle, TAP_FRAMES_KILLUA, IDLE_FRAMES_KILLUA);
return false;
}
#endif