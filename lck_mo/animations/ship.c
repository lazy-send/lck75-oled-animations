#pragma once

#include "animation-utils.c"


#define IDLE_FRAMES_SHIP 1
#define TAP_FRAMES_SHIP 9

#ifdef OLED_ENABLE
bool ship(void) {
    if (!oled_task_user()) {
        return false;
    }
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-0', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_0 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x82, 0x82, 0x80, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x23, 0xc3, 0x33, 0x0b, 0xe3, 
	0xf9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0xa8, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa4, 0xe3, 0x23, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf9, 0x08, 0x09, 0x99, 
	0x67, 0x2e, 0xb1, 0xbe, 0xfc, 0x3b, 0xb0, 0xe9, 0xbb, 0x20, 0x93, 0x9c, 0xb7, 0x97, 0x44, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x48, 0x80, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 0x20, 0x20, 0x00, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x01, 0x81, 0x01, 
	0x00, 0x02, 0x07, 0x8c, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0b, 0x0e, 0x0f, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x8c, 0x0e, 0x0e, 0x0f, 0x8e, 0x0e, 0x0d, 0x0f, 0x0e, 0x0e, 0x0f, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x40, 0x90, 0x90, 0x90, 
	0x90, 0x10, 0x40, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x20, 0x00, 0x10, 0x00, 0x10, 
	0x00, 0x30, 0x40, 0x40, 0x90, 0x40, 0x10, 0x00, 0x40, 0x10, 0x90, 0x10, 0x30, 0x10, 0x90, 0x90
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-2', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x81, 0x80, 0x81, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x02, 0x02, 
	0x00, 0x02, 0x02, 0x00, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xe9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa0, 0xe3, 0x23, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xfd, 0x0c, 0x09, 0x99, 
	0x67, 0x2c, 0xb3, 0xbe, 0xbc, 0x3b, 0xb0, 0xa9, 0xbb, 0x24, 0x93, 0x9c, 0xb7, 0x97, 0x54, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 
	0x0c, 0x48, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x10, 0x80, 0x40, 0x00, 0x00, 0x80, 0x00, 0x41, 0x01, 0x01, 
	0x00, 0x02, 0x87, 0x04, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x8f, 0x0e, 0x0e, 0x8d, 0x0f, 0x0e, 0x0e, 0x8f, 0x80, 
	0x00, 0x80, 0x00, 0x40, 0x00, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x90, 0x90, 0x90, 0x10, 0x41, 0xc0, 0x90, 0x00, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 
	0x00, 0x10, 0x00, 0x40, 0x10, 0x20, 0x00, 0x90, 0x40, 0x90, 0x40, 0x90, 0x90, 0x90, 0x90, 0x90
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-4', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_4 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x01, 0x00, 0x00, 0x22, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x02, 0x20, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x40, 0x40, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xe9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x20, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x30, 0x00, 0xa8, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa4, 0xe2, 0xa3, 0xae, 0xfe, 0x0d, 0x05, 0x05, 0xfa, 0xf8, 0x0a, 0x09, 0x99, 
	0x67, 0x6c, 0x93, 0xbe, 0xbc, 0x3b, 0xb8, 0xe9, 0xbb, 0x20, 0x93, 0x9c, 0xb7, 0x97, 0x44, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x03, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 
	0x00, 0x80, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x20, 0x80, 0x00, 0x20, 
	0x00, 0x80, 0x00, 0x90, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x41, 0x01, 0x01, 
	0x00, 0x02, 0x07, 0x04, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x0f, 0x8e, 0x0e, 0x0d, 0x0f, 0x8e, 0x0e, 0x8f, 0x00, 
	0x00, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x40, 0x90, 
	0xc0, 0x90, 0x10, 0x90, 0x90, 0x10, 0x90, 0x40, 0x40, 0x90, 0x10, 0x80, 0x90, 0x40, 0x20, 0x20, 
	0x00, 0x10, 0x00, 0x20, 0x01, 0x10, 0x10, 0x90, 0x40, 0x00, 0x20, 0x10, 0x10, 0x40, 0x40, 0x90
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-7', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_7 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 
	0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x04, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xf9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa0, 0xe3, 0x23, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf9, 0x0c, 0x09, 0x99, 
	0x67, 0x6c, 0x93, 0xbe, 0xfc, 0x3a, 0xb8, 0xe9, 0xbb, 0x24, 0x93, 0x9c, 0xb7, 0xd7, 0x44, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x0c, 0x48, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x00, 0x10, 0x50, 0x00, 0x40, 0x80, 0x00, 0x01, 0x01, 0x81, 
	0x40, 0x02, 0x07, 0x04, 0x0f, 0x0c, 0x8f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0b, 0x0e, 0x0f, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x8e, 0x0e, 0x0f, 0x0e, 0x0e, 0x8d, 0x0f, 0x0e, 0x0e, 0x0f, 0x00, 
	0x80, 0x00, 0x00, 0x82, 0x00, 0x40, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x00, 
	0x10, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x20, 0x20, 0x00, 0x10, 0x00, 0x90, 0x40, 0x00, 0x20
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-10', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_10 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 
	0x00, 0x01, 0x01, 0x02, 0x02, 0x10, 0x00, 0x01, 0x01, 0x02, 0x02, 0x22, 0x02, 0x02, 0x02, 0x02, 
	0x04, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xe9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa1, 0xf1, 0x50, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x21, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa4, 0xa3, 0xa3, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf9, 0x0a, 0x09, 0x99, 
	0x67, 0x6c, 0x93, 0xbe, 0xfc, 0x3b, 0xb0, 0xe9, 0xbb, 0x20, 0x93, 0x9c, 0x97, 0xd7, 0x54, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x48, 0x80, 
	0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x01, 0x41, 0x11, 
	0x00, 0x02, 0x07, 0x0c, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0f, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0d, 0x0f, 0x0e, 0x0e, 0x0f, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x90, 0x90, 0x90, 0x00, 0x10, 0x90, 0x90, 0x90, 
	0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0xc0, 0x90, 0x10, 0x90
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-13', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_13 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x00, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xe9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x50, 0xc0, 0x41, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x20, 0x01, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa0, 0xe3, 0x23, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf9, 0x0a, 0x09, 0x99, 
	0x67, 0x2c, 0xb3, 0xbe, 0xfc, 0x3a, 0xb0, 0xe9, 0xbb, 0x20, 0x93, 0x9c, 0xb7, 0xd7, 0x54, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0x00, 0x08, 0x40, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x80, 0x10, 0x00, 0x80, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x80, 0x00, 0x90, 0x00, 0x80, 0x00, 0x81, 0x01, 0x11, 
	0x00, 0x02, 0x47, 0x04, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x8f, 0x8e, 0x0e, 0x8d, 0x0f, 0x0e, 0x0e, 0x0f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x90, 0x90, 0x40, 0x00, 0x00, 0x10, 0x10, 0x00, 0x80, 0x90, 0x40, 0x90, 0x90, 0x90, 
	0x10, 0x10, 0x10, 0x90, 0x90, 0x40, 0xc0, 0x10, 0x90, 0x40, 0x00, 0x00, 0x20, 0x00, 0x10, 0x40
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-16', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_16 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x02, 0x22, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xe9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x50, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x31, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa4, 0xa3, 0xa3, 0xae, 0xfe, 0x8d, 0x05, 0x05, 0xfa, 0xf8, 0x0e, 0x09, 0x99, 
	0x67, 0x2c, 0xb1, 0xb6, 0xfc, 0x3b, 0xb0, 0xe9, 0xbb, 0x24, 0x93, 0x9c, 0xb7, 0x97, 0x54, 0x45, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x04, 0x48, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x08, 
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x01, 0x01, 0x01, 
	0x00, 0x02, 0x07, 0x04, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x8f, 0x0e, 0x0e, 0x8d, 0x0f, 0x0e, 0x0e, 0x0f, 0x81, 
	0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x90, 0x10, 0x10, 0x00, 0x40, 0x40, 0x00, 0x10, 0x10, 
	0x00, 0x10, 0x00, 0x10, 0x10, 0x10, 0x90, 0x90, 0x10, 0x90, 0x10, 0x00, 0x10, 0x00, 0x10, 0x10
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-19', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_19 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 
	0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x04, 
	0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x33, 0xc3, 0x33, 0x0b, 0xe3, 
	0xf9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa0, 0xa3, 0xa3, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf9, 0x0e, 0x09, 0x99, 
	0x67, 0x2c, 0xb3, 0xb6, 0xbc, 0x3b, 0xb0, 0xe9, 0xbb, 0x20, 0x93, 0x9c, 0xb7, 0xd7, 0x54, 0x47, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x08, 0x48, 0x80, 0x00, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x08, 0x00, 0x00, 0x00, 0x28, 
	0x08, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x90, 0x00, 0x40, 0x80, 0x00, 0x40, 0x00, 0x01, 0x01, 0x21, 
	0x00, 0x02, 0x07, 0x0c, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x0f, 0x8e, 0x0e, 0x8d, 0x8f, 0x8e, 0x8e, 0x0f, 0x81, 
	0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x10, 0x10, 0x00, 
	0x40, 0x40, 0x00, 0x90, 0x90, 0xc0, 0x90, 0x90, 0x90, 0x10, 0x90, 0x90, 0x10, 0x10, 0x10, 0x10
};
// 'be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX-22', 128x32px
static const char epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_22 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x02, 0x02, 0x10, 0x01, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x02, 0x04, 0x04, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x60, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0xe8, 0xe4, 0x64, 0x74, 0x6f, 0x23, 0xc3, 0x33, 0x0b, 0xe3, 
	0xf9, 0x85, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xa0, 0xf0, 0x40, 0xc0, 0x40, 0x20, 
	0xe0, 0xf0, 0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x01, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x00, 0x28, 0xb8, 0x18, 
	0xe8, 0xa0, 0xa0, 0xa0, 0xe3, 0xa3, 0xae, 0xfa, 0x8d, 0x05, 0x05, 0xfa, 0xf8, 0x0a, 0x09, 0x99, 
	0x67, 0x2c, 0x93, 0xb6, 0xfc, 0x3a, 0xb0, 0xe9, 0xbb, 0x20, 0x93, 0xbc, 0xb7, 0x97, 0x44, 0x57, 
	0x67, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x04, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
	0x00, 0x00, 0x40, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x10, 0x80, 0x10, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x81, 
	0x40, 0x02, 0x07, 0xc4, 0x0f, 0x0c, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0f, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0f, 0x0e, 0x0c, 0x0e, 0x0e, 0x0f, 0x0e, 0x8e, 0x0d, 0x8f, 0x0e, 0x0e, 0x0f, 0x80, 
	0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x90, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x40, 0x00, 0x00, 0x40, 0x00, 0x90, 0x20, 0x40, 0x90, 
	0x90, 0x90, 0x90, 0x10, 0x40, 0x40, 0x40, 0x00, 0x10, 0x00, 0x90, 0x90, 0x90, 0x10, 0x40, 0x90
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 12144)
static const char* tap[TAP_FRAMES_SHIP] = {
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_0,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_2,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_4,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_7,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_10,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_13,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_16,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_19,
	epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_22
};

    // Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 5280)
    const char* PROGMEM  idle[IDLE_FRAMES_SHIP] = {
        epd_bitmap_be351c1c19624aa6f8f891db094c53d2Yr9ezFN5tY8ui7AX_0
    };

    render_animation(tap, idle, TAP_FRAMES_SHIP, IDLE_FRAMES_SHIP);
    return false;
}
#endif