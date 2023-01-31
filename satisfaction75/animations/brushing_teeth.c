#pragma once

#include "animation-utils.c"


#define TAP_FRAMES_BRUSHING 10

#ifdef OLED_ENABLE
bool brushing_teeth(void) {
    if (!oled_task_user()) {
        return false;
    }
// 'brushing teeth (1)-0', 128x32px
static const char spike_brushing_teeth_0 [] PROGMEM = {
	0xfd, 0x80, 0x80, 0x80, 0xc0, 0x80, 0x80, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80, 0x20, 0xe0, 0xc2, 
	0xc2, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc2, 0x82, 0x80, 0x80, 0xa4, 0xc8, 0x48, 0xc0, 0xc0, 
	0xc0, 0x80, 0xc0, 0x40, 0x80, 0x00, 0xa0, 0x00, 0xa0, 0x20, 0x00, 0x88, 0xa0, 0xc0, 0x30, 0xb0, 
	0xb4, 0xa0, 0xc0, 0x80, 0x84, 0x84, 0x4c, 0xc4, 0xc0, 0x40, 0x8a, 0x88, 0xc0, 0x80, 0x80, 0x21, 
	0x81, 0x80, 0x84, 0x86, 0x86, 0x86, 0x86, 0x86, 0x84, 0x0c, 0x88, 0x02, 0x06, 0x02, 0x04, 0x25, 
	0x03, 0x21, 0x21, 0x0a, 0x02, 0xb2, 0x94, 0x91, 0x99, 0x1c, 0x06, 0x66, 0x32, 0x22, 0x32, 0x18, 
	0x10, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x2c, 0x0c, 0x0c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x9c, 
	0x58, 0x4c, 0x4c, 0x42, 0x02, 0x42, 0x62, 0x82, 0x22, 0x22, 0x22, 0xa2, 0xb2, 0xb2, 0x12, 0x12, 
	0xfe, 0xe4, 0xe6, 0xec, 0xec, 0xe5, 0xed, 0xed, 0xec, 0xed, 0xed, 0xe5, 0xe7, 0xe6, 0xee, 0xee, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xe6, 0xee, 0xef, 0xef, 0xff, 0xf7, 0xee, 0xea, 0xee, 
	0xee, 0xee, 0xeb, 0xef, 0xef, 0xeb, 0xef, 0xef, 0xef, 0xed, 0xed, 0xed, 0xed, 0xee, 0xeb, 0xed, 
	0xef, 0xe5, 0xef, 0xef, 0xef, 0xef, 0xae, 0x3e, 0x3f, 0x3f, 0x37, 0x3f, 0x3f, 0x3f, 0xbf, 0xbd, 
	0xee, 0xed, 0xed, 0xef, 0xef, 0xef, 0xed, 0xee, 0xef, 0xf2, 0xf2, 0xef, 0xe7, 0xfb, 0xf7, 0xed, 
	0xff, 0xfb, 0xf9, 0xfb, 0xff, 0xfa, 0xff, 0xf9, 0xef, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 
	0xf6, 0xea, 0xea, 0xef, 0xef, 0xeb, 0xeb, 0xeb, 0xe9, 0xe9, 0xf9, 0xfd, 0xed, 0xfd, 0xec, 0xea, 
	0xea, 0xec, 0xec, 0xeb, 0xeb, 0xec, 0xfd, 0xfd, 0xbe, 0xdb, 0xdb, 0xdb, 0xd5, 0xd5, 0xf4, 0xd5, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xff, 0x5f, 0xdf, 0xdf, 0x7f, 0x5f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xbf, 0x7f, 0x7f, 0xff, 0x7f, 
	0x7f, 0xbf, 0x7f, 0xf1, 0xf1, 0x71, 0x19, 0x05, 0x09, 0x0d, 0xc9, 0xcd, 0x01, 0x01, 0x0d, 0x3c, 
	0xfc, 0xfd, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x5f, 0xff, 0x3f, 0x7f, 0x6f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0x7b, 0x3f, 0x3b, 0xff, 0x7f, 0x7f, 0xdf, 0xff, 0x7f, 0x3f, 0x3f, 0x3b, 0x3f, 0x7f, 0x7f, 
	0x44, 0x4c, 0x4c, 0x6c, 0x6c, 0x68, 0x68, 0x6c, 0x68, 0x68, 0x68, 0x68, 0x29, 0x69, 0x68, 0x6d, 
	0x69, 0x69, 0x69, 0x69, 0x69, 0x49, 0x45, 0x51, 0x55, 0x59, 0x51, 0x59, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x5d, 0x55, 0x59, 0x5d, 0x5d, 0x57, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x5d, 0x53, 0x5b, 0x5b, 
	0x57, 0x11, 0x3c, 0x7f, 0x41, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x3f, 0x3c, 0x30, 0xe0, 0x80, 
	0x01, 0x4f, 0x3f, 0x3b, 0xbb, 0x3b, 0x3b, 0x33, 0x33, 0x33, 0x37, 0x36, 0x36, 0x1b, 0x3f, 0x35, 
	0x33, 0x37, 0x15, 0x32, 0x1f, 0x5b, 0x53, 0x51, 0x51, 0x59, 0x51, 0x53, 0x53, 0x5b, 0x5b, 0x5b, 
	0x1a, 0x1b, 0x7b, 0x1a, 0x5b, 0x5a, 0x7b, 0x5a, 0x7a, 0x5a, 0x5a, 0x32, 0x5a, 0x5a, 0x7a, 0x52, 
	0x58, 0x5a, 0x1e, 0x32, 0x5a, 0x52, 0x1a, 0x52, 0x52, 0x52, 0x52, 0x5a, 0x52, 0x72, 0x73, 0x52
};
// 'brushing teeth (1)-4', 128x32px
static const char spike_brushing_teeth_4 [] PROGMEM = {
	0xff, 0x00, 0x80, 0x80, 0xc0, 0x80, 0x40, 0x90, 0x80, 0x80, 0x80, 0x80, 0xa0, 0xe0, 0xe0, 0xc2, 
	0xc2, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x84, 0xec, 0x40, 0xc0, 0xc0, 
	0xc2, 0x80, 0x80, 0x80, 0x80, 0x20, 0x20, 0xe0, 0x60, 0x20, 0x20, 0x28, 0x80, 0x20, 0xb0, 0xb0, 
	0xb0, 0xa0, 0xc0, 0x80, 0x84, 0x84, 0x84, 0xc4, 0x40, 0x48, 0x0a, 0x88, 0xc0, 0x00, 0x80, 0xa1, 
	0x80, 0x80, 0x80, 0x06, 0x86, 0x06, 0x86, 0x06, 0x04, 0x0c, 0x08, 0x26, 0x06, 0x02, 0x04, 0x05, 
	0x43, 0x11, 0x21, 0x02, 0x02, 0xb2, 0x90, 0x90, 0x5d, 0x0c, 0x44, 0x26, 0x32, 0xa2, 0x32, 0x98, 
	0x90, 0x00, 0x44, 0x0c, 0x0c, 0x0c, 0x0c, 0x04, 0x2c, 0x0c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x9c, 
	0x4c, 0x5c, 0x4a, 0x42, 0x42, 0x82, 0x42, 0x22, 0x22, 0x22, 0x22, 0x22, 0xb2, 0xb2, 0x32, 0x12, 
	0xff, 0xe4, 0xec, 0xec, 0xec, 0xec, 0xed, 0xed, 0xe4, 0xe6, 0xe4, 0xed, 0xe4, 0xe6, 0xee, 0xfe, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xee, 0xe6, 0xeb, 0xfa, 0xee, 0xee, 0xf6, 0xee, 
	0xea, 0xee, 0xef, 0xef, 0xef, 0xef, 0xef, 0xe5, 0xed, 0xe5, 0xed, 0xe5, 0xed, 0xef, 0xef, 0xef, 
	0xed, 0xef, 0xed, 0xed, 0xef, 0xee, 0xbf, 0x3e, 0x3f, 0x3f, 0x3f, 0x3f, 0x3d, 0x3f, 0xbd, 0xbd, 
	0xed, 0xed, 0xed, 0xed, 0xef, 0xed, 0xed, 0xed, 0xed, 0xff, 0xe7, 0xf2, 0xf7, 0xeb, 0xf7, 0xe5, 
	0xfe, 0xfb, 0xfb, 0xfb, 0xff, 0xfa, 0xf7, 0xfd, 0xe9, 0xed, 0xed, 0xef, 0xed, 0xed, 0xed, 0xe5, 
	0xf6, 0xee, 0xeb, 0xf9, 0xef, 0xfa, 0xee, 0xeb, 0xe9, 0xfd, 0xf9, 0xed, 0xfd, 0xfd, 0xfe, 0xfa, 
	0xea, 0xef, 0xfe, 0xea, 0xea, 0xed, 0xef, 0xfd, 0xde, 0xdb, 0xdb, 0xd7, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xef, 0x5f, 0xdf, 0x5f, 0xff, 0x7f, 0xdf, 0xff, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xbf, 0x7f, 0x7f, 0xff, 0x7f, 
	0x7f, 0xff, 0x7f, 0xf1, 0xf1, 0x71, 0x19, 0x01, 0x09, 0x0d, 0xc9, 0xcd, 0x05, 0x01, 0x09, 0x3d, 
	0xfc, 0xfd, 0x7d, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x7f, 0xff, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x5f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 
	0xff, 0x7f, 0x3f, 0x3f, 0xff, 0x7f, 0x5f, 0xdf, 0xef, 0x7f, 0x3f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 
	0x44, 0x4c, 0x4c, 0x6c, 0x6c, 0x68, 0x68, 0x6c, 0x68, 0x68, 0x68, 0x68, 0x69, 0x69, 0x6d, 0x69, 
	0x69, 0x69, 0x6d, 0x68, 0x6d, 0x48, 0x45, 0x55, 0x55, 0x51, 0x59, 0x59, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x55, 0x55, 0x5d, 0x5d, 0x5d, 0x57, 0x59, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x53, 0x5f, 0x5b, 
	0x51, 0x53, 0x1e, 0x7f, 0xc1, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x30, 0xe0, 0x80, 
	0x01, 0x6f, 0x3f, 0x3b, 0x33, 0x3b, 0x3b, 0x33, 0x33, 0x37, 0x17, 0x13, 0x36, 0x3b, 0x3f, 0x33, 
	0x37, 0x57, 0x36, 0x7a, 0x54, 0x5b, 0x55, 0x51, 0x51, 0x51, 0x51, 0x53, 0x59, 0x5b, 0x5a, 0x1b, 
	0x1b, 0x1b, 0x3b, 0x1a, 0x5b, 0x5a, 0x5b, 0x5a, 0x52, 0x5a, 0x52, 0x12, 0x1a, 0x5a, 0x5a, 0x52, 
	0x58, 0x52, 0x1a, 0x1a, 0x72, 0x52, 0x1a, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x72, 0x73, 0x52
};
// 'brushing teeth (1)-24', 128x32px
static const char spike_brushing_teeth_24 [] PROGMEM = {
	0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x90, 0x90, 0x80, 0x80, 0x80, 0xa0, 0xe0, 0xc0, 0xe2, 
	0xc2, 0xc0, 0xc0, 0xc0, 0x80, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x84, 0xa4, 0xe8, 0x48, 0xc0, 0xc0, 
	0xc0, 0xc0, 0x80, 0x00, 0xc0, 0x00, 0xe0, 0xe0, 0x60, 0x20, 0x10, 0x88, 0xa0, 0xa0, 0x90, 0xb0, 
	0xb4, 0xc0, 0xc0, 0x80, 0x84, 0x84, 0x8c, 0xc4, 0x60, 0x62, 0x8a, 0x80, 0x80, 0xa0, 0x80, 0x81, 
	0x81, 0x80, 0x84, 0x86, 0x06, 0x06, 0x86, 0x84, 0x04, 0x0c, 0x88, 0x06, 0x06, 0x02, 0x05, 0x11, 
	0x5b, 0x49, 0x29, 0x0a, 0x2a, 0xb4, 0x94, 0x15, 0xd4, 0x16, 0x46, 0x32, 0x32, 0x22, 0x33, 0x19, 
	0x91, 0x01, 0x04, 0x4c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0e, 0x0c, 0x8c, 0x8e, 0x8c, 0x8c, 0x8c, 0x9c, 
	0xdc, 0x4c, 0xce, 0x46, 0x42, 0x82, 0x42, 0xa2, 0x22, 0x22, 0x22, 0x22, 0xb2, 0xb2, 0x32, 0x12, 
	0xf7, 0xe4, 0xec, 0xec, 0xec, 0xed, 0xed, 0xed, 0xe4, 0xe6, 0xf5, 0xed, 0xee, 0xe6, 0xe6, 0xee, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xee, 0xe7, 0xea, 0xf2, 0xf6, 0xe6, 0xee, 0xee, 
	0xee, 0xee, 0xea, 0xeb, 0xeb, 0xef, 0xef, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xef, 0xef, 0xef, 
	0xee, 0xed, 0xee, 0xef, 0xed, 0xed, 0xbe, 0x3e, 0x3f, 0x3d, 0x3f, 0x3f, 0x3f, 0x3f, 0xbf, 0xbf, 
	0xef, 0xeb, 0xfd, 0xef, 0xef, 0xef, 0xff, 0xef, 0xff, 0xf5, 0xef, 0xe3, 0xfb, 0xf3, 0xf3, 0xfb, 
	0xfb, 0xfb, 0xfb, 0xfb, 0xfd, 0xfe, 0xfd, 0xfd, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xe4, 
	0xf7, 0xe6, 0xea, 0xfb, 0xff, 0xfb, 0xeb, 0xeb, 0xef, 0xed, 0xed, 0xfd, 0xfd, 0xfd, 0xfe, 0xfa, 
	0xee, 0xeb, 0xee, 0xeb, 0xeb, 0xed, 0xef, 0xfa, 0x9f, 0xdb, 0xdb, 0xd7, 0xd5, 0xf5, 0xd5, 0xf7, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xef, 0x5f, 0xff, 0xdf, 0x7f, 0x5f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0x5f, 0x7f, 0x5f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 
	0x7f, 0xff, 0x3f, 0xf1, 0xf1, 0x71, 0x19, 0x01, 0x0d, 0x0d, 0xc1, 0xcd, 0x09, 0x01, 0x09, 0x3d, 
	0xfc, 0xfd, 0x7d, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x7f, 0xff, 0x3f, 0x3f, 0x7f, 0x5f, 0x7f, 0x77, 
	0x7f, 0x5f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x37, 0x3f, 0xff, 0x7f, 0x7f, 0x7f, 0x7b, 0xdf, 0x7f, 
	0xef, 0x7b, 0x3f, 0x3b, 0xff, 0x7b, 0x7f, 0xcf, 0xef, 0x7b, 0x37, 0x3b, 0x3f, 0x3f, 0x7f, 0x6f, 
	0x44, 0x4c, 0x4c, 0x6c, 0x68, 0x68, 0x6c, 0x28, 0x68, 0x68, 0x2c, 0x68, 0x29, 0x69, 0x6d, 0x69, 
	0x69, 0x69, 0x6d, 0x68, 0x68, 0x49, 0x45, 0x59, 0x55, 0x51, 0x5d, 0x59, 0x51, 0x51, 0x51, 0x51, 
	0x59, 0x5d, 0x55, 0x59, 0x59, 0x5d, 0x57, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x5d, 0x5f, 0x5f, 0x5f, 
	0x17, 0x53, 0x1c, 0x7f, 0x41, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3e, 0x30, 0xe0, 0x00, 
	0x01, 0x4f, 0x3f, 0x3b, 0xb3, 0x33, 0x3f, 0x33, 0x33, 0x37, 0x33, 0x37, 0x37, 0x3e, 0x3f, 0x33, 
	0x13, 0x1f, 0x56, 0x13, 0x15, 0x5b, 0x55, 0x59, 0x59, 0x51, 0x5b, 0x53, 0x53, 0x1b, 0x1b, 0x1a, 
	0x1a, 0x3b, 0x3b, 0x1a, 0x53, 0x5b, 0x5a, 0x5b, 0x52, 0x5a, 0x52, 0x12, 0x12, 0x5a, 0x1a, 0x52, 
	0x58, 0x12, 0x1a, 0x52, 0x1a, 0x52, 0x1a, 0x52, 0x52, 0x52, 0x52, 0x5a, 0x52, 0x53, 0x53, 0x52
};
// 'brushing teeth (1)-27', 128x32px
static const char spike_brushing_teeth_27 [] PROGMEM = {
	0xfd, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x10, 0x80, 0xc0, 0xc0, 0x80, 0x80, 0xe0, 0xc0, 0xc2, 
	0xc2, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x82, 0x80, 0x84, 0x80, 0xe8, 0x40, 0xc0, 0xc0, 
	0x80, 0x80, 0x80, 0xa0, 0x80, 0x00, 0xe0, 0xa0, 0x40, 0x20, 0x10, 0x48, 0xa0, 0xe0, 0xb0, 0xb0, 
	0xa0, 0xa0, 0xc0, 0x80, 0x84, 0x84, 0x84, 0xc4, 0x40, 0x48, 0x0a, 0x80, 0x00, 0x80, 0x80, 0xa1, 
	0x80, 0x00, 0x04, 0x86, 0x06, 0x06, 0x26, 0x24, 0x24, 0xac, 0xa8, 0x22, 0x92, 0x92, 0x14, 0x19, 
	0x59, 0x09, 0x29, 0x2a, 0x0a, 0xb4, 0x94, 0x94, 0x04, 0x16, 0x06, 0x32, 0x32, 0x22, 0x11, 0x10, 
	0x90, 0x00, 0x44, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x2c, 0x0c, 0x0c, 0x8c, 0x8c, 0x8c, 0x8c, 0x9c, 
	0x5c, 0x48, 0xcc, 0x46, 0x42, 0x82, 0x62, 0x02, 0x22, 0x22, 0x22, 0x22, 0xb2, 0xb2, 0x32, 0x12, 
	0xf7, 0xe4, 0xec, 0xec, 0xec, 0xed, 0xed, 0xed, 0xec, 0xe6, 0xd7, 0xed, 0xe5, 0xe6, 0xee, 0xee, 
	0xec, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xe6, 0xee, 0xe6, 0xe6, 0xfa, 0xf7, 0xea, 0xea, 0xee, 
	0xea, 0xee, 0xee, 0xef, 0xeb, 0xeb, 0xef, 0xef, 0xed, 0xed, 0xed, 0xed, 0xed, 0xef, 0xef, 0xef, 
	0xec, 0xed, 0xee, 0xef, 0xed, 0xed, 0x3f, 0x3e, 0x3f, 0x3d, 0x3d, 0x3f, 0x3f, 0x37, 0xbf, 0xbf, 
	0xee, 0xef, 0xed, 0xef, 0xef, 0xef, 0xef, 0xff, 0xfd, 0xfb, 0xe7, 0xf6, 0xfb, 0xfb, 0xeb, 0xfb, 
	0xfb, 0xfb, 0xfb, 0xff, 0xf9, 0xfb, 0xfd, 0xf9, 0xed, 0xed, 0xef, 0xef, 0xed, 0xed, 0xe5, 0xe6, 
	0xe7, 0xea, 0xeb, 0xfb, 0xef, 0xeb, 0xeb, 0xeb, 0xe9, 0xf9, 0xe9, 0xfd, 0xfd, 0xfd, 0xeb, 0xea, 
	0xfa, 0xeb, 0xee, 0xea, 0xee, 0xed, 0xef, 0xfc, 0xdf, 0xf3, 0xdb, 0xd7, 0xf6, 0xf7, 0xd5, 0xf7, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xef, 0x5f, 0xdf, 0x7f, 0x7f, 0x7f, 0xdf, 0xff, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0x5f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 
	0x7f, 0xff, 0x7f, 0xf1, 0xf1, 0x71, 0x19, 0x05, 0x05, 0x8d, 0xc1, 0x8d, 0x01, 0x01, 0x0d, 0x3d, 
	0xfc, 0xfd, 0x7d, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x77, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 
	0xff, 0x7f, 0x37, 0x3f, 0x7f, 0x7f, 0x7f, 0xdf, 0xef, 0x7f, 0x3f, 0x3f, 0x3f, 0x37, 0x7f, 0x7f, 
	0x4c, 0x4c, 0x4c, 0x68, 0x68, 0x68, 0x68, 0x68, 0x6c, 0x68, 0x68, 0x2c, 0x69, 0x69, 0x69, 0x69, 
	0x69, 0x69, 0x69, 0x69, 0x68, 0x49, 0x45, 0x51, 0x51, 0x59, 0x5d, 0x51, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x5d, 0x5d, 0x59, 0x59, 0x5d, 0x51, 0x59, 0x59, 0x5f, 0x5d, 0x5d, 0x59, 0x57, 0x5f, 0x5f, 
	0x53, 0x57, 0x1c, 0x77, 0xc1, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x30, 0xc0, 0x00, 
	0x01, 0x6f, 0x3f, 0x3b, 0xb3, 0x3b, 0x37, 0x33, 0x33, 0x33, 0x13, 0x37, 0x36, 0x3f, 0x3f, 0x33, 
	0x33, 0x17, 0x37, 0x33, 0x11, 0x79, 0x53, 0x55, 0x59, 0x51, 0x53, 0x53, 0x53, 0x1b, 0x5a, 0x1a, 
	0x1a, 0x1b, 0x3b, 0x1a, 0x59, 0x5a, 0x5a, 0x5a, 0x72, 0x5a, 0x5a, 0x3a, 0x5a, 0x52, 0x1a, 0x32, 
	0x58, 0x1a, 0x3e, 0x14, 0x52, 0x52, 0x1a, 0x52, 0x32, 0x52, 0xd2, 0x5a, 0x52, 0x53, 0x53, 0x52
};
// 'brushing teeth (1)-29', 128x32px
static const char spike_brushing_teeth_29 [] PROGMEM = {
	0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0xe0, 0xc2, 
	0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x84, 0xa0, 0xe8, 0x68, 0xc0, 0xc0, 
	0xc0, 0x80, 0x80, 0x40, 0x80, 0x00, 0x60, 0xc0, 0x40, 0x20, 0xb0, 0x08, 0x80, 0x60, 0xb0, 0xb0, 
	0xb0, 0xe2, 0xc0, 0x80, 0x84, 0x84, 0xc4, 0xc4, 0xc0, 0xe0, 0x8a, 0x40, 0x08, 0xa0, 0x80, 0xa1, 
	0xa0, 0x80, 0xc4, 0x46, 0x46, 0x46, 0x46, 0x26, 0x24, 0xac, 0xa8, 0x22, 0x92, 0x12, 0x15, 0x11, 
	0x4b, 0x49, 0x29, 0x2a, 0x0a, 0x96, 0x94, 0x94, 0x15, 0x1c, 0x24, 0x40, 0x32, 0x22, 0x32, 0x11, 
	0x90, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x2c, 0x0c, 0x0c, 0x8c, 0x8c, 0x8c, 0x8c, 0x8c, 0x9c, 
	0x5c, 0x48, 0x4a, 0x46, 0x42, 0x82, 0x82, 0xa2, 0x22, 0x22, 0x22, 0x22, 0xb2, 0xb2, 0x12, 0x12, 
	0xff, 0xe4, 0xec, 0xec, 0xec, 0xed, 0xec, 0xed, 0xec, 0xe6, 0xed, 0xed, 0xe6, 0xe6, 0xee, 0xee, 
	0xee, 0xee, 0xe6, 0xe6, 0xe6, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xef, 0xfa, 0xe6, 0xee, 0xee, 0xee, 
	0xee, 0xee, 0xef, 0xeb, 0xef, 0xef, 0xef, 0xed, 0xe5, 0xe5, 0xed, 0xed, 0xed, 0xef, 0xef, 0xef, 
	0xed, 0xec, 0xef, 0xef, 0xef, 0xee, 0xad, 0x3e, 0x3f, 0x3d, 0x3e, 0x3d, 0x3d, 0x3d, 0xbc, 0xbc, 
	0xed, 0xee, 0xec, 0xef, 0xef, 0xef, 0xef, 0xef, 0xff, 0xf5, 0xe7, 0xe6, 0xef, 0xf3, 0xf7, 0xf7, 
	0xff, 0xfb, 0xfb, 0xf7, 0xfb, 0xf2, 0xf7, 0xfd, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xf5, 
	0xf6, 0xe7, 0xea, 0xfd, 0xeb, 0xeb, 0xfb, 0xeb, 0xfb, 0xf9, 0xe9, 0xfd, 0xfd, 0xfd, 0xee, 0xfa, 
	0xfa, 0xfa, 0xee, 0xea, 0xeb, 0xed, 0xef, 0xfd, 0xdf, 0xdb, 0xdb, 0xd7, 0xd4, 0xd5, 0xd5, 0xd7, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x3f, 0x6f, 0xff, 0x5f, 0xdf, 0x5f, 0x7f, 0x7f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 
	0x7f, 0xff, 0xbf, 0xf1, 0xf1, 0x71, 0x19, 0x05, 0x05, 0x8d, 0xc1, 0x8d, 0x01, 0x01, 0x0d, 0x3d, 
	0xfc, 0xfd, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x5f, 0xff, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x77, 0x7f, 0xdf, 0x7f, 0x7f, 0x7f, 0x7f, 0xdf, 0x7f, 
	0xff, 0x7f, 0x3f, 0x37, 0xff, 0x7f, 0x7f, 0xdf, 0xff, 0x7f, 0x3f, 0x1f, 0x3b, 0x37, 0x7f, 0x6f, 
	0x44, 0x4c, 0x4c, 0x68, 0x6c, 0x68, 0x6c, 0x68, 0x68, 0x68, 0x68, 0x29, 0x69, 0x69, 0x69, 0x6d, 
	0x69, 0x69, 0x69, 0x68, 0x68, 0x49, 0x45, 0x51, 0x51, 0x59, 0x59, 0x51, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x55, 0x5d, 0x51, 0x5d, 0x5d, 0x53, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x5b, 0x57, 0x5f, 0x5f, 
	0x13, 0x52, 0x3e, 0x77, 0xc1, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x70, 0xc0, 0x00, 
	0x01, 0x6f, 0x3f, 0x3b, 0x33, 0x3b, 0x33, 0x33, 0x33, 0x33, 0x37, 0x37, 0x36, 0x37, 0x3e, 0x33, 
	0x37, 0x33, 0x33, 0x14, 0x15, 0x7b, 0x53, 0x51, 0x59, 0x51, 0x51, 0x53, 0x51, 0x1b, 0x5b, 0x5b, 
	0x12, 0x79, 0x3b, 0x18, 0x5a, 0x5a, 0x1b, 0x5a, 0x72, 0x5a, 0x5a, 0x32, 0x5a, 0x52, 0x3a, 0x32, 
	0x58, 0x1a, 0x1a, 0x12, 0x5a, 0x72, 0x1a, 0x52, 0x5a, 0x52, 0xd2, 0x5a, 0x52, 0x53, 0x93, 0x52
};
// 'brushing teeth (1)-31', 128x32px
static const char spike_brushing_teeth_31 [] PROGMEM = {
	0xff, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x80, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0xc0, 0xe2, 
	0xc2, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0xc0, 0x80, 0x80, 0x84, 0xa4, 0xc8, 0x20, 0x80, 0xc0, 
	0x80, 0x80, 0x80, 0x00, 0x80, 0x60, 0x20, 0x60, 0x40, 0x20, 0x00, 0x28, 0xa0, 0x60, 0xb0, 0x30, 
	0xa0, 0xa0, 0xc0, 0x80, 0x84, 0x84, 0x84, 0xc4, 0x60, 0x60, 0x26, 0x48, 0x40, 0x80, 0xa0, 0xa1, 
	0xa1, 0x80, 0xc4, 0xc6, 0x46, 0x46, 0x46, 0x26, 0x24, 0xac, 0xa8, 0x06, 0x06, 0x02, 0x05, 0x05, 
	0x41, 0x21, 0x21, 0x22, 0x02, 0x92, 0x90, 0x99, 0x50, 0x14, 0x04, 0x52, 0x32, 0x22, 0x32, 0x18, 
	0x10, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x8c, 0x0c, 0x8c, 0x8c, 0x9c, 
	0x5c, 0xc8, 0xcc, 0x42, 0x02, 0x42, 0x22, 0xa2, 0x22, 0x22, 0x22, 0x22, 0xb2, 0xb2, 0x12, 0x12, 
	0xff, 0xe4, 0xec, 0xec, 0xec, 0xec, 0xed, 0xe4, 0xec, 0xee, 0xf4, 0xec, 0xee, 0xe6, 0xee, 0xce, 
	0xee, 0xee, 0xe6, 0xe6, 0xea, 0xee, 0xe6, 0xe6, 0xe6, 0xe6, 0xeb, 0xff, 0xe6, 0xe2, 0xee, 0xea, 
	0xee, 0xee, 0xef, 0xeb, 0xeb, 0xef, 0xef, 0xef, 0xe5, 0xed, 0xed, 0xed, 0xed, 0xef, 0xef, 0xef, 
	0xef, 0xed, 0xe5, 0xe7, 0xef, 0xef, 0xbe, 0x3e, 0x3b, 0x3b, 0x37, 0x3d, 0x3d, 0x3d, 0xbd, 0xbc, 
	0xef, 0xec, 0xee, 0xea, 0xee, 0xef, 0xff, 0xed, 0xff, 0xfb, 0xe6, 0xf3, 0xe3, 0xeb, 0xf3, 0xfb, 
	0xfa, 0xfb, 0xfb, 0xff, 0xf9, 0xfa, 0xfd, 0xfb, 0xe9, 0xed, 0xed, 0xed, 0xed, 0xed, 0xe5, 0xe5, 
	0xf7, 0xea, 0xea, 0xfd, 0xec, 0xfa, 0xeb, 0xef, 0xe9, 0xe9, 0xf9, 0xed, 0xfd, 0xfd, 0xf8, 0xfa, 
	0xfe, 0xea, 0xf8, 0xeb, 0xeb, 0xec, 0xee, 0xf4, 0xdd, 0xd3, 0xdb, 0xd3, 0xd5, 0xd5, 0xd5, 0xd5, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x3f, 0x6f, 0xff, 0x5f, 0xcf, 0x6f, 0x7f, 0x7f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0xdf, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 
	0x7f, 0xff, 0xbf, 0xf1, 0xf1, 0x71, 0x19, 0x05, 0x0d, 0x8d, 0xc1, 0xcd, 0x01, 0x01, 0x0d, 0x3c, 
	0xfc, 0xfd, 0x6f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x3f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x5f, 0xff, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x5f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 
	0xef, 0x7f, 0x3f, 0x3f, 0xff, 0x7f, 0x5f, 0xdf, 0xef, 0x7f, 0x3f, 0x1b, 0x1f, 0x3f, 0x7f, 0x7f, 
	0x44, 0x4c, 0x4c, 0x68, 0x68, 0x68, 0x68, 0x68, 0x6c, 0x68, 0x68, 0x2c, 0x29, 0x69, 0x69, 0x69, 
	0x69, 0x69, 0x69, 0x69, 0x69, 0x49, 0x45, 0x59, 0x51, 0x51, 0x5d, 0x59, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x55, 0x5d, 0x51, 0x5d, 0x5d, 0x53, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x5d, 0x53, 0x5f, 0x5f, 
	0x53, 0x53, 0x3c, 0x77, 0xc1, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x30, 0x40, 0x80, 
	0x01, 0x4f, 0x3f, 0x3b, 0xb7, 0x3b, 0x37, 0x3b, 0x33, 0x33, 0x37, 0x37, 0x36, 0x17, 0x3f, 0x33, 
	0x13, 0x37, 0x3f, 0x57, 0x59, 0x1b, 0x73, 0x51, 0x51, 0x51, 0x53, 0x5b, 0x33, 0x5b, 0x7b, 0x1b, 
	0x12, 0x1b, 0x3b, 0x3a, 0x3a, 0x5b, 0x5a, 0x5b, 0x7a, 0x5a, 0x5a, 0x32, 0x1a, 0x7a, 0x5a, 0x5a, 
	0x58, 0x32, 0x1a, 0x32, 0x5a, 0x72, 0x1a, 0x52, 0x32, 0x52, 0x92, 0x5a, 0x52, 0x73, 0xb3, 0x52
};
// 'darkenedfinal-32', 128x32px
static const char spike_brushing_teeth_32 [] PROGMEM = {
	0xfe, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x90, 0x80, 0x80, 0x80, 0x80, 0xa0, 0xe0, 0xe0, 0xc2, 
	0xc0, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0xc0, 0x80, 0x80, 0x80, 0x84, 0x84, 0x88, 0x20, 0x80, 0xc0, 
	0xc2, 0x80, 0x80, 0x40, 0x80, 0x20, 0xc0, 0x00, 0x40, 0x00, 0xa0, 0x88, 0x20, 0x00, 0xb0, 0xb0, 
	0xa0, 0xe0, 0x80, 0xa0, 0x84, 0x84, 0x84, 0x84, 0x40, 0x40, 0x2a, 0x40, 0xc0, 0xa0, 0x80, 0xa1, 
	0xa1, 0xc0, 0x04, 0x86, 0x86, 0x06, 0x86, 0x06, 0x04, 0x0c, 0x08, 0x02, 0x06, 0x02, 0x04, 0x25, 
	0x01, 0x21, 0x21, 0x02, 0x02, 0xb2, 0x98, 0x14, 0x18, 0x54, 0x24, 0x26, 0x30, 0x22, 0x32, 0x18, 
	0x10, 0x00, 0x04, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x8c, 0x0c, 0x8c, 0x8c, 0x8c, 0x9c, 
	0x5c, 0x4c, 0xc8, 0x46, 0x02, 0x82, 0x82, 0xa2, 0x02, 0x22, 0x22, 0x22, 0xb2, 0x92, 0x12, 0x12, 
	0xff, 0xe4, 0xec, 0xe4, 0xed, 0xec, 0xed, 0xed, 0xec, 0xe6, 0xe4, 0xed, 0xed, 0xee, 0xf6, 0xee, 
	0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe6, 0xe6, 0xe6, 0xeb, 0xf6, 0xf2, 0xe6, 0xe2, 0xea, 
	0xea, 0xea, 0xef, 0xef, 0xeb, 0xef, 0xe5, 0xf7, 0xff, 0xfd, 0xed, 0xed, 0xed, 0xef, 0xef, 0xed, 
	0xed, 0xe4, 0xe7, 0xe6, 0xe7, 0xee, 0xbe, 0x3a, 0x3a, 0x3b, 0x3f, 0x3d, 0x3d, 0x3d, 0xbc, 0xbc, 
	0xec, 0xec, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xfb, 0xe2, 0xf7, 0xeb, 0xf7, 0xfb, 0xf3, 
	0xfe, 0xfb, 0xf9, 0xfd, 0xfb, 0xfe, 0xfb, 0xf9, 0xe9, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xe5, 
	0xf7, 0xeb, 0xeb, 0xfd, 0xfb, 0xe9, 0xeb, 0xeb, 0xe9, 0xe9, 0xfd, 0xfd, 0xfd, 0xed, 0xf9, 0xfa, 
	0xea, 0xfb, 0xfe, 0xeb, 0xfb, 0xec, 0xeb, 0xfd, 0xb7, 0xdb, 0xdb, 0xd3, 0xd5, 0xd5, 0xf5, 0xd5, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xff, 0x5f, 0xdf, 0xef, 0x7f, 0x7f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 
	0x7f, 0xff, 0xbf, 0xf1, 0xf1, 0x71, 0x19, 0x05, 0x0d, 0x0d, 0xc9, 0xcd, 0x01, 0x01, 0x0d, 0x3c, 
	0xfc, 0xfd, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x5f, 0xff, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 
	0x7f, 0x5f, 0x7f, 0x5f, 0x7f, 0x5f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xdf, 0x7f, 
	0xef, 0x7f, 0x37, 0x3f, 0xff, 0x7f, 0x5f, 0xdf, 0xef, 0x77, 0x37, 0x3f, 0x1f, 0x3f, 0x7f, 0x7f, 
	0x4c, 0x4c, 0x6c, 0x6c, 0x68, 0x68, 0x6c, 0x68, 0x68, 0x68, 0x68, 0x68, 0x69, 0x69, 0x69, 0x69, 
	0x69, 0x69, 0x6d, 0x69, 0x6d, 0x49, 0x45, 0x59, 0x51, 0x51, 0x5d, 0x59, 0x51, 0x51, 0x51, 0x53, 
	0x59, 0x55, 0x55, 0x59, 0x5d, 0x5d, 0x53, 0x59, 0x59, 0x59, 0x5d, 0x5d, 0x5d, 0x5b, 0x5f, 0x5f, 
	0x1b, 0x57, 0x3c, 0x7f, 0xc3, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x30, 0xc0, 0x80, 
	0x01, 0x4f, 0x3f, 0x3b, 0x37, 0x33, 0x3f, 0x33, 0x33, 0x3b, 0x37, 0x37, 0x3e, 0x17, 0x1f, 0x33, 
	0x33, 0x37, 0x71, 0x15, 0x75, 0x5b, 0x77, 0x51, 0x5d, 0x51, 0x5b, 0x5b, 0x53, 0x5b, 0x5b, 0x1b, 
	0x1a, 0x3b, 0x1b, 0x1a, 0x7b, 0x5a, 0x5b, 0x5b, 0x5a, 0x5a, 0x52, 0x3a, 0x5a, 0x7a, 0x5a, 0x72, 
	0x58, 0x12, 0x1e, 0x1a, 0x72, 0x52, 0x1a, 0x50, 0x72, 0x52, 0x92, 0x5a, 0x52, 0x73, 0x93, 0x53
};
// 'darkenedfinal-33', 128x32px
static const char spike_brushing_teeth_33 [] PROGMEM = {
	0xfd, 0x00, 0xc0, 0xc0, 0x40, 0x80, 0x80, 0x90, 0x80, 0x80, 0x80, 0x00, 0x60, 0xa0, 0x40, 0x42, 
	0xc2, 0xc0, 0xc0, 0x80, 0xc0, 0x80, 0xc0, 0x80, 0x80, 0x80, 0x84, 0x84, 0x48, 0x08, 0xc0, 0xc0, 
	0xc2, 0xc0, 0x80, 0x80, 0x40, 0x20, 0x20, 0xe0, 0x60, 0x20, 0x20, 0x88, 0xa0, 0x60, 0xb0, 0xb0, 
	0xa0, 0xe0, 0xc0, 0x80, 0x84, 0x84, 0x84, 0xc4, 0x40, 0x48, 0xaa, 0xc8, 0xc0, 0x80, 0x80, 0xa1, 
	0x81, 0x80, 0x84, 0x06, 0x86, 0x86, 0x86, 0x86, 0x84, 0x0c, 0x0a, 0x02, 0x06, 0x06, 0x24, 0x05, 
	0x01, 0x31, 0x21, 0x22, 0x02, 0xb2, 0x90, 0x98, 0x98, 0x0c, 0x24, 0x26, 0x30, 0x32, 0x30, 0x18, 
	0x10, 0x00, 0x04, 0x0c, 0x0c, 0x2c, 0x0c, 0x0c, 0x0c, 0x0c, 0x84, 0x8c, 0x0c, 0x8c, 0x8c, 0x9c, 
	0x5c, 0x4a, 0x4c, 0x42, 0x02, 0x42, 0x02, 0xa2, 0x22, 0xa2, 0x22, 0xa2, 0xb2, 0x92, 0x12, 0x12, 
	0xf7, 0xe4, 0xec, 0xec, 0xec, 0xed, 0xed, 0xec, 0xed, 0xee, 0xfc, 0xed, 0xec, 0xe6, 0xee, 0xee, 
	0xee, 0xee, 0xee, 0xee, 0xea, 0xee, 0xee, 0xe6, 0xee, 0xee, 0xea, 0xfa, 0xea, 0xee, 0xe6, 0xee, 
	0xee, 0xee, 0xef, 0xef, 0xef, 0xef, 0xe7, 0xf5, 0xf7, 0xe5, 0xed, 0xfd, 0xed, 0xef, 0xef, 0xed, 
	0xed, 0xe4, 0xe6, 0xe6, 0xee, 0xee, 0xae, 0x3e, 0x3a, 0x33, 0x3e, 0x3d, 0x35, 0x3d, 0xbd, 0xbd, 
	0xed, 0xed, 0xed, 0xed, 0xed, 0xfd, 0xfd, 0xfd, 0xed, 0xfd, 0xe6, 0xff, 0xfb, 0xeb, 0xf7, 0xfb, 
	0xfb, 0xfb, 0xfb, 0xff, 0xff, 0xfc, 0xfd, 0xf5, 0xed, 0xed, 0xe5, 0xed, 0xed, 0xed, 0xed, 0xe5, 
	0xf6, 0xe6, 0xea, 0xfb, 0xe9, 0xfa, 0xea, 0xeb, 0xe9, 0xf9, 0xf9, 0xed, 0xfd, 0xfd, 0xfe, 0xea, 
	0xea, 0xfb, 0xea, 0xfa, 0xea, 0xed, 0xef, 0xf9, 0x9d, 0xdb, 0xd3, 0xd7, 0xd4, 0xd5, 0xd5, 0xd5, 
	0xbf, 0x9f, 0x1f, 0x9f, 0x9f, 0x37, 0x6f, 0xef, 0x5f, 0xdf, 0x4f, 0x7f, 0x7f, 0xdf, 0xdf, 0x5f, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x5f, 0x7f, 0x7f, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 
	0x7f, 0xff, 0x3f, 0xf1, 0xf1, 0x71, 0x19, 0x01, 0x01, 0x0d, 0xc1, 0xcd, 0x09, 0x01, 0x09, 0x3d, 
	0xfc, 0xfd, 0x7d, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 
	0x7f, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xdf, 0x5f, 0xdf, 0x3f, 0x3f, 0x7f, 0x7f, 0x6f, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x37, 0x3f, 0xff, 0x5f, 0x7f, 0x7f, 0x7f, 0xdf, 0x7f, 
	0xef, 0x7f, 0x3b, 0x3f, 0xff, 0x7b, 0x7f, 0xdb, 0xef, 0x7b, 0x3b, 0x3f, 0x3b, 0x3b, 0x7f, 0x7f, 
	0x4c, 0x4c, 0x4c, 0x6c, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x6c, 0x29, 0x69, 0x69, 0x69, 0x69, 
	0x69, 0x69, 0x69, 0x68, 0x6c, 0x49, 0x45, 0x51, 0x59, 0x51, 0x5d, 0x51, 0x51, 0x51, 0x51, 0x51, 
	0x51, 0x55, 0x55, 0x59, 0x5d, 0x5d, 0x53, 0x5d, 0x59, 0x59, 0x5d, 0x5d, 0x5d, 0x5b, 0x5f, 0x5f, 
	0x53, 0x97, 0x3e, 0x7f, 0xc1, 0x00, 0x00, 0xc0, 0x38, 0x3f, 0x37, 0x1f, 0x3c, 0x30, 0xe0, 0x00, 
	0x01, 0x4f, 0x3f, 0x3b, 0xb3, 0x3b, 0x3b, 0x33, 0x37, 0x33, 0x37, 0x36, 0x37, 0x3b, 0x3f, 0x33, 
	0x17, 0x17, 0x37, 0x11, 0x51, 0x5b, 0x55, 0x55, 0x51, 0x51, 0x53, 0x53, 0x53, 0x5b, 0x5b, 0x1b, 
	0x1a, 0x5b, 0x3b, 0x1a, 0x5b, 0x5a, 0x5a, 0x5b, 0x52, 0x52, 0x5a, 0x32, 0x12, 0x7a, 0x5a, 0x12, 
	0x58, 0x12, 0x1e, 0x3a, 0x52, 0x72, 0x1a, 0x52, 0x5a, 0x52, 0x92, 0x5a, 0x52, 0x72, 0x53, 0x52
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 22704)
static const char* tap[TAP_FRAMES_BRUSHING] = {
	spike_brushing_teeth_33,
	spike_brushing_teeth_32,
	spike_brushing_teeth_31,
	spike_brushing_teeth_29,
	spike_brushing_teeth_27,
	spike_brushing_teeth_24,
	spike_brushing_teeth_4,
	spike_brushing_teeth_0
};
    render_animation(tap, TAP_FRAMES_BRUSHING);
    return false;
}
#endif