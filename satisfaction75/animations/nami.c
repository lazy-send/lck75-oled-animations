#pragma once

#include "animation-utils.c"


#define TAP_FRAMES_NAMI 10

#ifdef OLED_ENABLE
bool nami(void) {
// 'nami (1)-0', 128x32px
static const char nami_frame_0 [] PROGMEM = {
	0xfb, 0xfb, 0xf7, 0xf7, 0x0f, 0x3f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x6f, 0xbf, 0x9f, 0xdf, 0x4b, 0xcd, 0x76, 0x9b, 0xcc, 0x7e, 0xff, 0x1f, 0x8f, 
	0x7f, 0xc7, 0x93, 0x8f, 0x5f, 0xff, 0xb7, 0xb7, 0x0d, 0xaf, 0xcf, 0xcf, 0x4f, 0xef, 0x5f, 0x57, 
	0x5b, 0x5b, 0x5b, 0xf3, 0xb3, 0xaf, 0x4b, 0xdb, 0xa7, 0xcf, 0x1f, 0x7f, 0xff, 0x3f, 0xff, 0xef, 
	0x9f, 0x33, 0x67, 0xcf, 0x9e, 0x39, 0x67, 0xde, 0xbf, 0x5f, 0xff, 0xbf, 0xff, 0xff, 0x7f, 0x3f, 
	0xdf, 0xdf, 0xdf, 0x8f, 0xdb, 0xdb, 0xfb, 0xfb, 0xfd, 0xfd, 0xfd, 0xfb, 0xf7, 0xf7, 0xe5, 0xed, 
	0xcb, 0x9b, 0xb7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0x9f, 0xbf, 0x3f, 0x3f, 0x7f, 0x7f, 0x3f, 0xbf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xe7, 0xde, 0x3f, 0xbb, 0xb3, 0xff, 
	0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfa, 0xe3, 0xf6, 0xed, 0xff, 0xf6, 0xf4, 0xec, 0xeb, 0xfa, 
	0xdb, 0xda, 0x7a, 0x25, 0x99, 0xd1, 0x99, 0x33, 0xbf, 0x7f, 0x3f, 0x7e, 0x7f, 0x7e, 0x5f, 0xdc, 
	0xdc, 0xec, 0x7e, 0x7e, 0x7f, 0x3f, 0xbf, 0x5e, 0xa9, 0xe4, 0x67, 0x6a, 0xe9, 0xec, 0xea, 0x69, 
	0x99, 0xdb, 0xff, 0xfe, 0xfd, 0xfb, 0xfe, 0xfe, 0xfd, 0xfd, 0xfe, 0xfa, 0xeb, 0xe9, 0xc9, 0x0b, 
	0x4b, 0xab, 0xab, 0x3b, 0x67, 0xd8, 0xbf, 0x6f, 0xcf, 0x8f, 0xff, 0xee, 0xef, 0xef, 0xff, 0xff, 
	0xdf, 0xdf, 0xff, 0xef, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xfd, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x7b, 
	0xff, 0xbf, 0xdf, 0xef, 0xeb, 0xf7, 0xf3, 0xf7, 0xe0, 0xec, 0x3e, 0x7e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0x3f, 0xbf, 0xdf, 0xef, 0xec, 0xf7, 0xfb, 0xf7, 0xf6, 0xca, 0xea, 0xb3, 0x2b, 0x7d, 0x7d, 
	0xbe, 0xfe, 0xce, 0xc7, 0xe6, 0xf2, 0xfa, 0xf9, 0xf5, 0xf2, 0xfd, 0xfa, 0xf8, 0xff, 0xfb, 0x79, 
	0x72, 0x72, 0x36, 0xb7, 0xb7, 0xbb, 0xd8, 0x9e, 0x1f, 0x5f, 0x9c, 0xcc, 0xcf, 0xef, 0xee, 0xe6, 
	0xf7, 0xf7, 0xf3, 0xc3, 0x91, 0x5d, 0xed, 0xbd, 0xa1, 0xb9, 0xdd, 0xed, 0xf1, 0xf9, 0xff, 0xff, 
	0x62, 0x0f, 0xfd, 0xff, 0xb5, 0xea, 0xcd, 0x97, 0x2e, 0x6d, 0xc7, 0x3f, 0xdf, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0xbf, 0xdf, 0x9f, 0xdf, 0xcf, 0xf7, 0xff, 0xff, 0xff, 0xfb, 0xf7, 0xff, 
	0xcf, 0x6f, 0x6f, 0x7f, 0x7f, 0x7f, 0x6d, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xbf, 0xbc, 
	0xbc, 0xfd, 0xdd, 0xdc, 0xdc, 0xfd, 0xed, 0xfd, 0xfb, 0xf7, 0xf7, 0x7b, 0x9b, 0xeb, 0xf9, 0xfc, 
	0xfe, 0xff, 0x7f, 0x1f, 0x1f, 0xcf, 0xef, 0x27, 0xb3, 0xb9, 0x6d, 0xfc, 0x94, 0x56, 0xd7, 0x5e, 
	0x5e, 0x4f, 0x4f, 0x57, 0x57, 0xb3, 0x3b, 0xbb, 0x39, 0x7d, 0x7d, 0x05, 0x1e, 0x3a, 0x9b, 0x9b, 
	0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x4b, 0x4b, 0x6b, 0x24, 0x2c, 0x2b, 0x1f, 0x1f, 0x3f, 0x3f, 0x3f, 
	0xbf, 0xbf, 0x9f, 0x4f, 0xe7, 0xa6, 0x67, 0xa7, 0x67, 0xe7, 0x27, 0x77, 0x67, 0xb7, 0x9b, 0xec, 
	0x56, 0xd8, 0xef, 0xb7, 0xe3, 0xf7, 0xdc, 0xcf, 0xe8, 0xf1, 0xd8, 0xfe, 0xff, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0xfb, 0xd9, 0xdb, 0xdf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-3', 128x32px
static const char nami_frame_3 [] PROGMEM = {
	0xfb, 0xfb, 0xf7, 0xf7, 0x8f, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xa7, 0xb7, 0x5b, 0x6d, 0xb7, 0xd9, 0x7c, 0xb6, 0x9b, 0x4f, 0xa3, 0xd1, 0x6f, 0xb7, 0x5c, 
	0x0e, 0xf7, 0x33, 0x69, 0xdc, 0x81, 0x3c, 0x72, 0x07, 0x3d, 0x5c, 0x5c, 0x3c, 0x3d, 0x3f, 0x3f, 
	0x3e, 0x7e, 0xff, 0xfe, 0xef, 0xcf, 0xcf, 0xef, 0xe7, 0xef, 0xef, 0xc6, 0xff, 0xc0, 0xe9, 0xe4, 
	0xed, 0xf9, 0xed, 0xed, 0xee, 0xef, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xfb, 0xfb, 0xbd, 0xbd, 0xbd, 0x9d, 0xdd, 0x9e, 0xde, 0x4f, 0xaf, 0xce, 0x6f, 0x67, 0x77, 0xf7, 
	0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0xbf, 0x9f, 0x9f, 0x9f, 0x8f, 0xcf, 0xcf, 0xcf, 0xcf, 0xe7, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xef, 0xde, 0xbf, 0x3b, 0xf3, 0x9f, 
	0x5f, 0xbf, 0xbf, 0xef, 0xb7, 0xbf, 0xbf, 0xf7, 0xdf, 0xef, 0x6f, 0x37, 0x9b, 0xcb, 0x6d, 0xb6, 
	0xdb, 0xe9, 0x34, 0x9a, 0x4b, 0x25, 0xc6, 0x63, 0x99, 0x4c, 0x33, 0x89, 0xe6, 0x33, 0xcd, 0xe7, 
	0xf6, 0xf9, 0xf9, 0xfd, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0xdf, 0xdf, 0x9f, 0x6f, 0x2f, 0xaf, 0xcf, 0x2f, 
	0x6f, 0xc7, 0xc7, 0xdf, 0xdb, 0x9b, 0xbb, 0xbb, 0x3b, 0x7b, 0x9b, 0x3d, 0xbd, 0xbd, 0xfd, 0xbd, 
	0xbd, 0x3d, 0x7c, 0x7c, 0x7d, 0x7d, 0x3c, 0x9c, 0xbc, 0xbe, 0xbe, 0xbe, 0x9e, 0x9e, 0xde, 0xde, 
	0xde, 0xd6, 0xd3, 0xdb, 0x5b, 0xeb, 0x6b, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xeb, 0xa3, 0xb3, 
	0xff, 0xff, 0xdf, 0xef, 0xff, 0xf7, 0xf3, 0xf7, 0xe8, 0xee, 0x3e, 0x7e, 0x7f, 0x7b, 0x7e, 0xfd, 
	0xef, 0x3e, 0xde, 0xe6, 0x7a, 0x9c, 0xe6, 0x8b, 0x79, 0xfe, 0xc3, 0x39, 0x7c, 0xc0, 0x9f, 0x3f, 
	0x41, 0xfc, 0x8f, 0x01, 0x7c, 0x07, 0x28, 0xce, 0x01, 0xfc, 0x87, 0x00, 0x03, 0x0c, 0x33, 0xcf, 
	0x3f, 0x7f, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0xfb, 0x6b, 0x33, 0x33, 0xdb, 0x6b, 0xa3, 0xb1, 0xbd, 
	0xbd, 0xb2, 0xbc, 0xbe, 0xbb, 0xbb, 0xbf, 0xbf, 0xbe, 0xbd, 0xbb, 0xbb, 0xb7, 0x2f, 0x7f, 0x7e, 
	0xff, 0xfd, 0xfd, 0xfb, 0xf7, 0x77, 0x6f, 0xdf, 0x3f, 0x7f, 0x7f, 0xfe, 0xff, 0xfd, 0xfc, 0xfc, 
	0xfd, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xf6, 0xd7, 0xb6, 0x74, 0xef, 0xeb, 0xba, 0xd6, 
	0xb7, 0x6f, 0xff, 0xff, 0xbf, 0xdf, 0xbf, 0xdf, 0xdf, 0xf7, 0xff, 0xf7, 0xfb, 0xff, 0xf1, 0xff, 
	0xcf, 0x6f, 0x4f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 
	0x7f, 0x7c, 0xfb, 0xf7, 0xfc, 0x69, 0x73, 0x75, 0x77, 0xce, 0xcd, 0xdb, 0xd7, 0xd6, 0x8c, 0xad, 
	0xfa, 0x52, 0xf5, 0xa4, 0xab, 0xa6, 0xe4, 0x49, 0x5b, 0x54, 0x91, 0xb2, 0xa4, 0x64, 0x68, 0x48, 
	0x51, 0xd6, 0x99, 0xb3, 0xaf, 0xaf, 0x7f, 0x1c, 0x6c, 0x76, 0xe3, 0x48, 0xd6, 0x84, 0x84, 0xa4, 
	0x8c, 0x88, 0x08, 0x08, 0x08, 0x08, 0x18, 0x18, 0x18, 0x10, 0x10, 0x98, 0x98, 0x90, 0x99, 0x9b, 
	0x9c, 0xc3, 0xfe, 0xda, 0xca, 0xee, 0xf6, 0xf3, 0xf4, 0xf7, 0xf7, 0xe6, 0xcc, 0xce, 0xcc, 0xcc, 
	0x0d, 0xcd, 0xcd, 0xcd, 0xcd, 0xcd, 0xc5, 0xd5, 0xc5, 0xcb, 0xcb, 0x68, 0x6b, 0x6b, 0x67, 0xf7, 
	0xf3, 0xf8, 0xff, 0xd9, 0xdf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-4', 128x32px
static const char nami_frame_4 [] PROGMEM = {
	0xfb, 0xfb, 0xf7, 0xf7, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf3, 0x1d, 0xf6, 0xfb, 0x1d, 0xce, 0xf7, 0x3b, 0xcf, 0x77, 0x3b, 0x8d, 0xe6, 0x3b, 
	0x0d, 0x87, 0xef, 0xb7, 0xf3, 0x0c, 0xf7, 0xfb, 0x07, 0xe3, 0x9c, 0xba, 0x7e, 0x7e, 0xfd, 0xf9, 
	0xfa, 0xf8, 0xf9, 0xfa, 0xbe, 0xbc, 0x7e, 0x7f, 0x7f, 0x79, 0x7c, 0xfe, 0x72, 0x35, 0x2d, 0x76, 
	0x7b, 0x6d, 0x5a, 0x6f, 0x76, 0x71, 0x7f, 0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 
	0x7f, 0xcf, 0xdf, 0x97, 0xdf, 0xfb, 0xb9, 0xb9, 0xbd, 0xfd, 0xdd, 0xdb, 0x6f, 0x6f, 0xed, 0xed, 
	0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xef, 0xfe, 0xbe, 0xbb, 0xb3, 0xf7, 
	0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0x7f, 0xc1, 0x7c, 0x02, 0xff, 0x90, 0xc0, 0xff, 0xf1, 0xf2, 0xfa, 0xfb, 0xfd, 
	0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 
	0x7d, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3e, 0xbf, 0xbf, 0x3f, 0xbe, 0xbf, 0x3f, 0x7f, 0x5f, 
	0xdf, 0xdf, 0xdf, 0xdf, 0x6f, 0x6f, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xe7, 
	0xe7, 0xf3, 0x73, 0x73, 0x71, 0x75, 0x75, 0x75, 0x75, 0x74, 0x34, 0xb6, 0xb6, 0xb7, 0xa7, 0xa7, 
	0xa7, 0xa7, 0xa7, 0xb7, 0xd3, 0xd3, 0xd3, 0xdb, 0xdb, 0xd9, 0xd9, 0xdd, 0xcd, 0xcd, 0xdc, 0xdc, 
	0xff, 0xff, 0xdf, 0xff, 0xff, 0xf7, 0xf3, 0xf7, 0xe8, 0xee, 0x3e, 0x7e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xcf, 0xef, 0x6f, 0xaf, 0xff, 0x77, 
	0x97, 0xcb, 0xe5, 0x33, 0x99, 0x6e, 0x37, 0xc9, 0xe7, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf7, 
	0xf3, 0xf1, 0xf5, 0xf5, 0xf4, 0x06, 0xf2, 0xfa, 0x1a, 0xc4, 0x74, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
	0xfe, 0x7f, 0x3f, 0x5e, 0x41, 0x5f, 0x5f, 0x5b, 0x5e, 0x5c, 0x5f, 0x5d, 0x5c, 0x5b, 0x57, 0x5a, 
	0x7e, 0xbe, 0xb4, 0x7d, 0xec, 0xdb, 0x3a, 0xfd, 0xf5, 0xf5, 0xf4, 0xf4, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xee, 0xee, 0xee, 0xeb, 0xef, 0xbb, 0x5f, 0xd7, 0xd7, 0xbf, 0xaf, 0x7f, 0xff, 0xbf, 0xff, 0xff, 
	0xfe, 0xfe, 0x7e, 0xff, 0xbe, 0xde, 0x9e, 0xde, 0xde, 0xf6, 0xf6, 0xfa, 0xfe, 0xfa, 0xf3, 0xff, 
	0xef, 0x6f, 0x6f, 0x5f, 0x7f, 0x7f, 0x6f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 
	0x7d, 0xfd, 0x7d, 0xfc, 0x7c, 0x7d, 0x7d, 0x79, 0x79, 0xfb, 0xcf, 0xb0, 0x6f, 0xd3, 0x9e, 0xc1, 
	0xbf, 0x7f, 0xc0, 0xbe, 0x03, 0x3c, 0xf3, 0xc0, 0x90, 0x7f, 0xe0, 0x8d, 0x7b, 0xf7, 0x2b, 0xbb, 
	0xcb, 0xaf, 0x27, 0xb7, 0x73, 0x5a, 0xeb, 0xfd, 0x0c, 0xf9, 0xf9, 0xf1, 0xe5, 0xe1, 0xe4, 0xc0, 
	0xc1, 0xc3, 0xc3, 0x82, 0x86, 0x86, 0x84, 0x84, 0x84, 0x8c, 0x8d, 0x8d, 0x8d, 0xc9, 0xc9, 0xc9, 
	0xc8, 0xec, 0xd2, 0xec, 0xf7, 0xf3, 0xf4, 0xe6, 0xe6, 0xcc, 0xcd, 0x8d, 0x0d, 0x89, 0x89, 0x89, 
	0x8b, 0x97, 0x97, 0x97, 0x9b, 0x9b, 0x96, 0xd2, 0x52, 0x46, 0x66, 0x67, 0x74, 0x7b, 0xff, 0x7f, 
	0xff, 0xff, 0xfb, 0xd9, 0xdb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-8', 128x32px
static const char nami_frame_8 [] PROGMEM = {
	0xfb, 0xfb, 0xf7, 0xf7, 0x1f, 0x3f, 0x7f, 0xfb, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfb, 
	0xff, 0xff, 0xdf, 0x7d, 0xef, 0x13, 0xfd, 0xff, 0xfe, 0x3f, 0x7f, 0xff, 0x0f, 0x77, 0xdf, 0x37, 
	0x1d, 0xe6, 0x11, 0xef, 0x27, 0xc3, 0xed, 0x97, 0x3b, 0xad, 0xd0, 0xb7, 0xef, 0xd2, 0x8c, 0x3c, 
	0xdf, 0x3f, 0x7c, 0xfd, 0xf9, 0xf8, 0xfe, 0xfc, 0xfe, 0xbf, 0xbf, 0xbf, 0x7c, 0xfa, 0x79, 0xb6, 
	0xd4, 0x75, 0xed, 0xff, 0xfa, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 
	0xdf, 0xfd, 0xdf, 0xcf, 0xdb, 0xdf, 0xf9, 0xf9, 0xfd, 0xfd, 0xfd, 0xfb, 0xf7, 0xe6, 0xe7, 0xed, 
	0xc9, 0xdb, 0x93, 0xe7, 0xf7, 0xf7, 0xf7, 0xf7, 0xbf, 0xbf, 0x3f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xe7, 0xd6, 0x3d, 0xbb, 0xb3, 0xff, 
	0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7b, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x4e, 0xad, 0xfb, 0x67, 0x18, 0xce, 0xf7, 0xf0, 0xf9, 0xfb, 
	0xfa, 0xf9, 0xfd, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0x7e, 0x7e, 0x7f, 0x3c, 0x7e, 0xbd, 0xfc, 
	0x3d, 0x7e, 0x7c, 0x7d, 0x7d, 0x7b, 0x7b, 0x7f, 0x7b, 0x7a, 0x7e, 0x7b, 0x7b, 0x7f, 0x78, 0x75, 
	0x75, 0x75, 0xf7, 0xf7, 0xf5, 0xf7, 0xf5, 0xf7, 0xf7, 0xf7, 0xf5, 0xf7, 0xf6, 0xf7, 0xf7, 0xef, 
	0xee, 0xfd, 0xed, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef, 0xff, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 
	0xf7, 0xf7, 0xf7, 0xff, 0xf7, 0xeb, 0xeb, 0xeb, 0xe9, 0xe9, 0xd9, 0xdb, 0xdb, 0xdb, 0xdf, 0xbf, 
	0xff, 0xff, 0xdf, 0xef, 0xff, 0xf3, 0xf3, 0xf3, 0xec, 0xec, 0x3c, 0x3e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0x7f, 0xff, 0xdf, 0x7f, 0xaf, 0x63, 0x7b, 0xad, 0xad, 0xee, 0x5f, 0xd5, 0xb7, 0xea, 0x4b, 
	0xeb, 0x75, 0x35, 0x99, 0x8e, 0x2c, 0xe7, 0x12, 0xde, 0x3f, 0xc0, 0x0f, 0x7f, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xfb, 0xf9, 0xf5, 0xf6, 0xf6, 0xf6, 0xe7, 0xeb, 0xcb, 0xbd, 0x8d, 0xb2, 
	0xfe, 0xfe, 0xe0, 0xce, 0xbf, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0x7f, 
	0x7f, 0xba, 0x46, 0x76, 0x76, 0x76, 0x76, 0x74, 0x74, 0x7c, 0x6a, 0xea, 0x1a, 0xfa, 0xfa, 0xfa, 
	0xfa, 0xfa, 0xfa, 0xf6, 0xf6, 0xf6, 0xf6, 0x66, 0x54, 0xd4, 0x34, 0xf4, 0xb5, 0xb5, 0xad, 0xa9, 
	0xeb, 0xeb, 0x6b, 0xf3, 0xd3, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 0xd7, 
	0xef, 0x6f, 0x6f, 0x5f, 0x77, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7e, 
	0xce, 0xf3, 0x79, 0x7c, 0xff, 0xfe, 0x1f, 0xe7, 0xfb, 0x0d, 0x96, 0xeb, 0x35, 0xdb, 0xfc, 0x65, 
	0xfa, 0x02, 0xfd, 0xfb, 0xf7, 0xec, 0x53, 0xa4, 0xaf, 0x60, 0xc3, 0x3f, 0x66, 0x8d, 0x0b, 0x13, 
	0x2f, 0x67, 0xb7, 0x73, 0x1b, 0x7b, 0xf9, 0xfd, 0xfd, 0xfd, 0xfd, 0xfc, 0xfc, 0xfe, 0xfc, 0xfe, 
	0xfe, 0xfc, 0xf9, 0xf9, 0xf1, 0xf1, 0xf1, 0xf1, 0xe5, 0xe1, 0xe1, 0xe1, 0xe0, 0xc0, 0xc0, 0xc1, 
	0xc1, 0xe1, 0xa3, 0xe1, 0xe3, 0xf3, 0xe2, 0xe3, 0xcb, 0xa3, 0x65, 0xe6, 0xe3, 0x62, 0x66, 0x62, 
	0x62, 0x62, 0x67, 0x6d, 0x65, 0xe4, 0xb6, 0xf3, 0xd9, 0xec, 0xe7, 0xfb, 0xfc, 0xff, 0xff, 0xff, 
	0xbf, 0x7f, 0x9b, 0xd8, 0xd9, 0x5f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-13', 128x32px
static const char nami_frame_13 [] PROGMEM = {
	0xfb, 0xfb, 0xf3, 0xf7, 0x8f, 0x3f, 0x7f, 0xff, 0x5f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfd, 0xef, 0xff, 0xfb, 0xef, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 
	0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfb, 0xdf, 0xef, 0xdf, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xdf, 0x3f, 0xd7, 0x6b, 0x37, 0x16, 
	0x8b, 0xed, 0xf7, 0xb2, 0x9b, 0xcd, 0xed, 0xf6, 0xd6, 0xeb, 0xef, 0xf7, 0xf3, 0xfd, 0xf6, 0xfb, 
	0xfb, 0xfd, 0xfd, 0xfe, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xf7, 0xf7, 0xcb, 
	0xe9, 0xf1, 0x3a, 0xf7, 0x7b, 0x7b, 0x37, 0x2f, 0x73, 0xdb, 0x05, 0xbd, 0xcd, 0x16, 0xe9, 0xfe, 
	0xf6, 0xfa, 0x4f, 0x7d, 0x93, 0xff, 0xf7, 0xff, 0xff, 0x3f, 0xbf, 0x3f, 0x7f, 0x7f, 0x7f, 0x3f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xf7, 0xfe, 0xbb, 0x3b, 0xb3, 0xf7, 
	0xef, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x6f, 0x7f, 0x7e, 
	0xbf, 0xd9, 0xdd, 0xef, 0xf7, 0xf7, 0xfb, 0xfd, 0xfd, 0xfd, 0x7e, 0x9f, 0x6f, 0x0f, 0xe7, 0xf7, 
	0x77, 0x73, 0x33, 0x3b, 0xdb, 0xab, 0xd9, 0x79, 0x39, 0x1d, 0x89, 0x89, 0x0d, 0x77, 0xe7, 0x67, 
	0xd3, 0x9b, 0xbd, 0xbf, 0x5f, 0x50, 0xf4, 0xec, 0x6c, 0x79, 0x61, 0x71, 0x71, 0x73, 0x7f, 0x39, 
	0xbf, 0x3e, 0x3f, 0x5f, 0x5e, 0xce, 0xa7, 0xa7, 0xb9, 0xb0, 0xd8, 0xdd, 0xd6, 0xd3, 0xe9, 0xe6, 
	0x59, 0x5d, 0x7e, 0x7b, 0x7b, 0xbb, 0xbb, 0xb3, 0xbb, 0xad, 0xbb, 0xdf, 0xdb, 0xdb, 0xdb, 0xdf, 
	0xff, 0xff, 0xdf, 0xff, 0xef, 0xf3, 0xf7, 0xf7, 0xe8, 0xec, 0x9e, 0x3e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xbf, 0xbf, 0xb7, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0x3f, 0x37, 0xd2, 0xdb, 0xf9, 0xeb, 0x6e, 0x54, 0x3d, 0xab, 0xfd, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xb9, 0xd8, 0xcd, 0xee, 0xe4, 0x77, 0x36, 
	0x5a, 0x69, 0x7b, 0x7d, 0x7d, 0xfc, 0xf6, 0xf7, 0xee, 0xee, 0xf1, 0xcf, 0x3c, 0xdb, 0xf7, 0xa6, 
	0x7b, 0xd9, 0xb1, 0x32, 0xc7, 0x8b, 0x9a, 0x38, 0x7f, 0xb9, 0xb0, 0xcb, 0xfd, 0xe6, 0x9b, 0x3d, 
	0x3e, 0x3f, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0xbd, 0xbe, 0xbe, 0xbe, 0x3e, 0x3e, 0x7e, 0x5e, 0x7e, 
	0x7f, 0x7f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xff, 0xdf, 0xdf, 0xdf, 0xdf, 0xff, 0xef, 0xef, 0xef, 
	0xef, 0x6f, 0x6f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 
	0x7c, 0x7d, 0xfd, 0x7d, 0x7c, 0xfd, 0x7d, 0xfd, 0x3b, 0xdb, 0xce, 0xee, 0xe7, 0x7b, 0xf7, 0xf5, 
	0x3d, 0xdb, 0xea, 0x37, 0x19, 0x8d, 0xc6, 0x6a, 0x34, 0x12, 0xfb, 0x0d, 0xac, 0xe7, 0xf7, 0xf7, 
	0xf3, 0xf3, 0xfb, 0xfb, 0xfb, 0xf3, 0xe4, 0xc6, 0x97, 0x93, 0x93, 0x05, 0x46, 0x8b, 0x09, 0x13, 
	0x13, 0x33, 0x23, 0x23, 0x63, 0x52, 0x56, 0x56, 0x57, 0x45, 0x65, 0x6b, 0x4b, 0x58, 0x87, 0xff, 
	0x7f, 0x1e, 0xdd, 0x21, 0xc3, 0x3b, 0x7f, 0xff, 0xfe, 0xfc, 0xfc, 0xfd, 0xfc, 0xfd, 0xf5, 0xfd, 
	0xef, 0xeb, 0xd9, 0xbd, 0x7d, 0xf5, 0xf5, 0xfb, 0xf8, 0xe2, 0xe6, 0xcf, 0xdb, 0x33, 0xd7, 0xff, 
	0xff, 0x77, 0xfb, 0xdb, 0xdb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-15', 128x32px
static const char nami_frame_15 [] PROGMEM = {
	0xfb, 0xfb, 0xf3, 0xdf, 0x9f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0xfe, 0xff, 0xff, 
	0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xf7, 0xfd, 0xe5, 0xf7, 0xdc, 0x7f, 0x9b, 0xcf, 0xf6, 
	0xfb, 0xfd, 0xfe, 0xff, 0x7f, 0x3f, 0xbf, 0xdf, 0xcf, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x3f, 0xdf, 0x2f, 0x93, 0x59, 0x0f, 0x06, 0x77, 0xfb, 0xf9, 0xfd, 0xfe, 0x3f, 0x7f, 
	0x7c, 0x7c, 0xfd, 0x7c, 0xfc, 0xfe, 0xff, 0xfe, 0xbe, 0xbf, 0xcb, 0xec, 0xf6, 0xff, 0xfb, 0xc9, 
	0xdb, 0xcf, 0xc6, 0xed, 0xec, 0x7a, 0x33, 0x89, 0xf4, 0x5f, 0x3f, 0x8a, 0xcd, 0x67, 0xbb, 0xdf, 
	0xe9, 0x77, 0x8f, 0xff, 0x9c, 0xd3, 0xc9, 0xfe, 0x7f, 0x7d, 0x7d, 0xf3, 0xb7, 0xb7, 0xe4, 0xfd, 
	0xdb, 0xdb, 0xf3, 0xff, 0xef, 0xf7, 0xfb, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xf6, 0xbf, 0xbb, 0xb3, 0xf7, 
	0xff, 0xff, 0xfb, 0xff, 0xfe, 0x7f, 0xbf, 0x5f, 0x77, 0xbf, 0x43, 0xe0, 0xff, 0x7f, 0x1f, 0xc7, 
	0xf3, 0x39, 0xcd, 0xe6, 0x73, 0xdd, 0x7d, 0xb7, 0x93, 0xdf, 0xde, 0xed, 0xb8, 0xae, 0xe7, 0x73, 
	0x74, 0x66, 0xe7, 0xcb, 0xcc, 0xb1, 0x72, 0xc7, 0x93, 0xda, 0x3e, 0x3d, 0xfb, 0xf3, 0xf7, 0xe5, 
	0x6f, 0x6e, 0x6e, 0x66, 0x1e, 0x0e, 0x66, 0xb6, 0x77, 0xd7, 0x97, 0x97, 0xc7, 0x93, 0x7b, 0x4b, 
	0xc5, 0xcd, 0x75, 0x74, 0xfa, 0xcb, 0xcb, 0xed, 0xed, 0xf5, 0xf5, 0xf6, 0xfe, 0xfb, 0xfb, 0xff, 
	0x7d, 0x7d, 0xfd, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xbf, 0xbf, 0xbf, 
	0xdf, 0xdf, 0xdf, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xed, 0xfd, 0xfd, 
	0xff, 0xdf, 0xef, 0xdf, 0xef, 0xf3, 0xf3, 0xf2, 0xe9, 0xec, 0x3c, 0x7e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xdf, 0x77, 0x5f, 0xa5, 0x5b, 0xad, 0x76, 0xb3, 0x9d, 0xc6, 0x28, 0x3f, 0xb3, 0x18, 0x77, 0x7b, 
	0xfb, 0xfd, 0x7c, 0x7a, 0xeb, 0xeb, 0xeb, 0xfb, 0xfb, 0xff, 0xf7, 0xd7, 0xf7, 0xf7, 0xf7, 0xef, 
	0xaf, 0xaf, 0xee, 0x5e, 0x5d, 0xdd, 0xba, 0xbb, 0xaf, 0x7b, 0xfb, 0xf7, 0xee, 0xde, 0xbd, 0x7e, 
	0x7a, 0x7b, 0x7b, 0xf3, 0xf7, 0xf7, 0xf7, 0xfa, 0xfd, 0xfa, 0xf9, 0xe9, 0xfa, 0xd5, 0xdf, 0xff, 
	0xde, 0x9c, 0xbd, 0xb8, 0x5a, 0xa5, 0xb5, 0x35, 0x29, 0x56, 0xb6, 0x4e, 0x2e, 0x6e, 0xdc, 0xb6, 
	0xae, 0x5b, 0xfb, 0x2b, 0x6d, 0x7d, 0x7d, 0xde, 0xf6, 0xbe, 0xfb, 0xff, 0xff, 0xff, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xbf, 0xbf, 0x9f, 0xdf, 0xdf, 0xf3, 0xfb, 0xff, 0xfb, 0xf3, 0xf7, 0xf6, 
	0x6f, 0x6f, 0x6f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xfe, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x6e, 
	0xfd, 0xfe, 0x0b, 0xcc, 0xf3, 0x7a, 0x7d, 0xc8, 0x73, 0xe9, 0x04, 0xf1, 0x9f, 0x7a, 0xf4, 0xec, 
	0xea, 0xd0, 0xd1, 0xe1, 0xa2, 0xa2, 0xc6, 0xc5, 0xc5, 0xc5, 0xc5, 0x8f, 0x8b, 0x8b, 0x83, 0x8b, 
	0x83, 0x83, 0xc7, 0x8f, 0xc7, 0xc7, 0xc6, 0x47, 0x67, 0xb8, 0xaf, 0x6f, 0x67, 0xcb, 0xc9, 0xdc, 
	0x93, 0xa4, 0x7f, 0xdf, 0xbf, 0x3f, 0x7f, 0x7f, 0x7f, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0x7f, 0xbf, 0xbf, 0xdd, 0xe3, 0xef, 0xde, 0xde, 0xdc, 0x58, 0x14, 0xed, 
	0xc9, 0x3b, 0xd2, 0xd3, 0xd5, 0xa5, 0xaa, 0x6a, 0x5e, 0xd6, 0x17, 0xae, 0x2b, 0x5f, 0xd7, 0xbf, 
	0x7f, 0x57, 0xbb, 0xd8, 0xdb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-16', 128x32px
static const char nami_frame_16 [] PROGMEM = {
	0xff, 0xfb, 0xf3, 0xf7, 0x8f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfd, 0xff, 0xff, 0xff, 0x3f, 0x83, 0xfc, 0xff, 0xff, 0x7f, 0x7f, 0xbf, 0xdf, 0xcf, 0x9f, 0x7f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xf0, 0x2f, 0xfe, 0x04, 0x73, 0x8c, 0xb7, 
	0x62, 0xdc, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0x9e, 0xbe, 0xbe, 0x3e, 0x7e, 0x7f, 0x7f, 0x7f, 0xff, 
	0x9f, 0xef, 0xe7, 0xf4, 0xfa, 0xff, 0xfd, 0xfc, 0xe6, 0xe9, 0xe7, 0xe3, 0x63, 0x76, 0x36, 0xbb, 
	0xd1, 0xec, 0xad, 0x58, 0xcf, 0x67, 0xb7, 0xfb, 0x1d, 0xcf, 0x74, 0x5f, 0xeb, 0xa5, 0xaf, 0xd7, 
	0xdb, 0xda, 0xd9, 0xeb, 0xeb, 0xef, 0xfd, 0xf5, 0xf5, 0xff, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0xbf, 0xbf, 0xbf, 0xcf, 0x57, 0x68, 0x63, 0x3f, 0x3f, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xbf, 0xbb, 0xb3, 0xb7, 
	0xdf, 0x7f, 0xb7, 0xdf, 0x68, 0x37, 0xdf, 0xf9, 0x1c, 0x4e, 0xf7, 0xb9, 0xdd, 0xfe, 0xfd, 0xe3, 
	0xed, 0xf4, 0xf0, 0xff, 0xef, 0xff, 0xdf, 0xd8, 0xfa, 0xbb, 0xb1, 0xf0, 0x61, 0xe0, 0xc8, 0x3d, 
	0xf8, 0xe5, 0xec, 0xcf, 0x9e, 0xbc, 0x7d, 0xbb, 0xba, 0xb2, 0xb7, 0xb3, 0x9b, 0xdb, 0xdb, 0xdb, 
	0xc3, 0xdb, 0x9b, 0x7b, 0x99, 0x69, 0x6d, 0xe9, 0xe5, 0xcc, 0xd2, 0xdc, 0xaa, 0x35, 0x75, 0x56, 
	0x92, 0x3a, 0x7b, 0x7d, 0xbc, 0x3e, 0xbf, 0xbe, 0xbf, 0x1f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0x7f, 
	0x7f, 0x3f, 0xbf, 0xbf, 0xdf, 0xdf, 0xdf, 0xef, 0xef, 0xe7, 0xf3, 0xf7, 0xd9, 0xf9, 0xd9, 0xdc, 
	0xdc, 0xfc, 0xde, 0xfe, 0xff, 0xfb, 0xfb, 0xfb, 0xf9, 0xff, 0xfb, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xe9, 0xec, 0x3c, 0xee, 0x3f, 0xcd, 0x76, 0x2d, 
	0xf6, 0x1b, 0x49, 0xfe, 0xc5, 0x1a, 0x3d, 0x36, 0x7e, 0x7f, 0xfa, 0xfe, 0xfe, 0xfd, 0xf5, 0xfd, 
	0xfd, 0xfd, 0xfd, 0xfd, 0xfb, 0xeb, 0xfb, 0xfb, 0xfb, 0xff, 0xd7, 0xf7, 0xf7, 0xf7, 0xef, 0xae, 
	0xed, 0x0b, 0xfe, 0xfd, 0xfb, 0xf3, 0xe7, 0xce, 0x9e, 0x3e, 0x3c, 0x3d, 0xdd, 0xfc, 0xfe, 0xfb, 
	0xfd, 0xfc, 0xff, 0xff, 0xfe, 0xfc, 0xfc, 0xf8, 0xf5, 0xfd, 0xfb, 0xff, 0xed, 0xeb, 0xef, 0xc6, 
	0xd2, 0xbd, 0x5d, 0x9a, 0xb4, 0x29, 0x47, 0x9b, 0xba, 0x77, 0x75, 0x69, 0xee, 0xc6, 0xf6, 0xaf, 
	0xaf, 0xcf, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x7f, 0xff, 0xbf, 0xbf, 0x9f, 0xdf, 0xdf, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xf3, 0xff, 
	0xff, 0x6f, 0x6f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x79, 0x7d, 0x7f, 0x7c, 
	0x73, 0xef, 0xfc, 0xd9, 0xb3, 0xb7, 0x62, 0x5e, 0x7c, 0xe8, 0xe8, 0xd0, 0xf0, 0xf1, 0xe0, 0xe1, 
	0xe3, 0xe1, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
	0xe3, 0xf3, 0xef, 0xd7, 0xd3, 0xd3, 0xd5, 0xa5, 0xa6, 0xaf, 0x6c, 0xdf, 0x9f, 0x3f, 0x3f, 0x3f, 
	0x3f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x7f, 0x3f, 0xbf, 0xdf, 0xdf, 0xdf, 0xff, 
	0xef, 0xf7, 0xf6, 0x55, 0xf7, 0x6f, 0x6f, 0xee, 0x7c, 0x99, 0xe7, 0x32, 0x02, 0x14, 0xac, 0x9a, 
	0x32, 0xe9, 0xd9, 0x35, 0xf5, 0xf5, 0xf5, 0xb1, 0xeb, 0xea, 0x6a, 0x5a, 0xd2, 0xd2, 0xb7, 0xb5, 
	0xa5, 0x6d, 0x6f, 0xda, 0x9f, 0x37, 0x6f, 0xdf, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-17', 128x32px
static const char nami_frame_17 [] PROGMEM = {
	0xfb, 0xfb, 0xf3, 0xf7, 0x8f, 0x3f, 0x7f, 0x7f, 0xdf, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0xfd, 
	0xe5, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x77, 
	0xff, 0x00, 0x7f, 0xff, 0xff, 0x7f, 0xbf, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xf0, 0xed, 0xde, 0xb1, 0x55, 0xde, 0x8a, 0x01, 0xf2, 0xfc, 0xfd, 0xf4, 0xe2, 0xe7, 0x73, 
	0xe7, 0xb6, 0xcc, 0xee, 0xff, 0xff, 0xfe, 0xf0, 0xd3, 0xd7, 0x3b, 0x58, 0x71, 0x37, 0x3f, 0x69, 
	0xe0, 0xcd, 0xeb, 0x17, 0x81, 0xfc, 0x1f, 0x97, 0xd9, 0x6e, 0xb3, 0xdc, 0x23, 0x9f, 0xe7, 0x79, 
	0xbc, 0x7f, 0x4f, 0x70, 0x9f, 0xad, 0xed, 0xdb, 0x9d, 0x7d, 0xff, 0xfb, 0xf7, 0xf5, 0xf5, 0xe9, 
	0xcb, 0xdb, 0xf3, 0xb7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xbf, 0x3f, 0x7f, 0x7f, 0x7f, 0x3f, 0xbf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xef, 0xd6, 0x7d, 0xbb, 0xb3, 0xd7, 
	0xdf, 0xff, 0x7f, 0x7f, 0x7f, 0xfb, 0xff, 0xbf, 0x7f, 0x5f, 0x7f, 0xff, 0xaf, 0xaf, 0xaf, 0xbe, 
	0xb7, 0xdf, 0xf4, 0xc7, 0x58, 0xf2, 0x7b, 0x7d, 0xdf, 0xe4, 0xed, 0x87, 0x21, 0x5c, 0xc6, 0xe7, 
	0xe3, 0xe3, 0xe5, 0xf5, 0xf6, 0xf6, 0x91, 0x32, 0xee, 0xdc, 0xb9, 0x77, 0x67, 0x6f, 0x6d, 0x6a, 
	0x1f, 0xaf, 0xaf, 0x8f, 0x9f, 0x8f, 0xaf, 0xef, 0x2f, 0xaf, 0x4f, 0xae, 0x27, 0x97, 0x87, 0xe7, 
	0x9b, 0xc5, 0xa6, 0xb7, 0x95, 0x8a, 0x75, 0x7b, 0x00, 0x70, 0x7c, 0xc6, 0xb5, 0xb4, 0x53, 0xdb, 
	0xd8, 0xd9, 0xfd, 0xca, 0xd9, 0x97, 0x73, 0x63, 0x6f, 0x6f, 0x5f, 0xdf, 0xde, 0xbe, 0xbf, 0x7d, 
	0x7d, 0x7d, 0x7f, 0x7b, 0x7b, 0x7b, 0x7b, 0xf7, 0xf7, 0xf5, 0xf7, 0xef, 0xef, 0xef, 0xeb, 0xda, 
	0xff, 0xdf, 0xff, 0xcf, 0xeb, 0xf7, 0xf3, 0xf3, 0xf4, 0xec, 0x7e, 0x7e, 0x7f, 0x7f, 0x7f, 0xff, 
	0xf3, 0xfb, 0xfd, 0xc7, 0x3b, 0x7d, 0xea, 0xea, 0xfb, 0x7b, 0xd7, 0xf7, 0xf7, 0xff, 0x8f, 0x73, 
	0xfb, 0xfd, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xff, 
	0xff, 0xff, 0x7f, 0x3f, 0x9f, 0xc7, 0x3f, 0xbf, 0xde, 0xfd, 0xfb, 0xfb, 0xe7, 0xd7, 0xdf, 0xd7, 
	0xe7, 0xfb, 0xfb, 0xf3, 0xfd, 0xf5, 0xfd, 0xfe, 0x11, 0xb4, 0xf7, 0xa0, 0xe7, 0x6f, 0x6f, 0xdf, 
	0x9f, 0x3f, 0xcf, 0xcf, 0xcf, 0xcf, 0x4f, 0x4e, 0x6e, 0x0e, 0x4f, 0x4f, 0xde, 0x9e, 0xde, 0x5e, 
	0xde, 0x7e, 0xfe, 0x7e, 0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x7e, 0x7e, 0x7f, 
	0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0xbf, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbe, 0xbd, 0xbd, 0x9f, 0x9f, 
	0xef, 0x6f, 0x6f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 
	0x7e, 0xfd, 0xfc, 0xfd, 0xdf, 0x5e, 0x5e, 0x7c, 0xec, 0x5d, 0xd1, 0x79, 0x98, 0x91, 0x55, 0xf3, 
	0xd2, 0xf1, 0xf1, 0xf3, 0xf3, 0xf3, 0xf7, 0xf7, 0xf7, 0xf3, 0xfd, 0xf3, 0xf3, 0xf3, 0xf5, 0xf5, 
	0xf4, 0xf6, 0xe6, 0xef, 0xef, 0xe8, 0xcc, 0x9b, 0x93, 0x37, 0x37, 0xaf, 0x3f, 0x5f, 0x5f, 0x5f, 
	0xdf, 0xaf, 0xaf, 0x2f, 0x77, 0x37, 0x73, 0x74, 0x76, 0x77, 0x77, 0x7f, 0x6f, 0x6f, 0x6f, 0x6f, 
	0x6f, 0x6f, 0xbe, 0xde, 0x68, 0x62, 0x9e, 0xc0, 0xff, 0x3f, 0x0f, 0xa0, 0xc8, 0xf1, 0xff, 0x3e, 
	0x08, 0xe0, 0x9f, 0x66, 0x79, 0x9f, 0x7b, 0xff, 0x1f, 0xdb, 0xdf, 0x7f, 0x6f, 0xdf, 0x9f, 0xff, 
	0xff, 0xff, 0xdb, 0xdb, 0xdf, 0x9f, 0x7f, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
// 'nami (1)-20', 128x32px
static const char nami_frame_20 [] PROGMEM = {
	0xff, 0xfb, 0xf3, 0xff, 0x8f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 
	0xb7, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xbf, 0xbd, 0xff, 0xf7, 0xff, 0x1f, 0xe7, 0xf9, 
	0xfe, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x33, 
	0xbc, 0x5f, 0x2d, 0xa5, 0xdb, 0x77, 0x82, 0xd9, 0xe6, 0xb1, 0x0c, 0x37, 0x9a, 0x9b, 0xb8, 0x59, 
	0xf1, 0xdd, 0xdd, 0xee, 0xa7, 0x93, 0xf3, 0xb1, 0x9a, 0xef, 0xed, 0x76, 0x37, 0xb7, 0x9f, 0xdf, 
	0xdf, 0x6f, 0xaf, 0xb3, 0xd9, 0x6f, 0xa7, 0xbf, 0x9f, 0xdf, 0xff, 0x3f, 0x9f, 0xff, 0xfe, 0x7d, 
	0x83, 0xff, 0xf3, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xbf, 0x3f, 0x3f, 0x7f, 0x7f, 0x3f, 0xbf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0x7e, 0xfe, 0xff, 0xbe, 0xbd, 0xfb, 0x53, 0xdf, 
	0xdf, 0x7b, 0xaf, 0xaf, 0xdd, 0xd7, 0x55, 0x77, 0xad, 0xaf, 0xab, 0x4b, 0x4b, 0xcb, 0xeb, 0xe6, 
	0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xe5, 0xc5, 0xc3, 0xa2, 0xea, 0x4a, 0x62, 0xef, 0xf5, 0xf9, 
	0xda, 0xae, 0xb7, 0x13, 0x1b, 0x99, 0x93, 0x99, 0xcd, 0xcd, 0xce, 0xce, 0x2e, 0xee, 0xef, 0xe0, 
	0xc9, 0x9d, 0x6c, 0xe6, 0xb0, 0xe3, 0x9f, 0x3f, 0x6f, 0x67, 0x47, 0xef, 0xcf, 0xdd, 0xde, 0xdf, 
	0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0xbe, 0xb2, 0xb5, 0xb1, 0x11, 0x1b, 0x5a, 0x4e, 0xf7, 0x30, 0x56, 
	0x9a, 0x59, 0x2d, 0xac, 0x96, 0xc7, 0x63, 0xb4, 0xdb, 0xbd, 0xee, 0x67, 0x7b, 0x6f, 0x6d, 0x2e, 
	0xef, 0xdf, 0x3f, 0x6f, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xfd, 0xfb, 0xfb, 0xfd, 0xff, 0xfb, 0xfb, 
	0xff, 0xff, 0xff, 0xe7, 0x73, 0x79, 0x3f, 0xb4, 0x99, 0xac, 0x75, 0x9b, 0xcc, 0xae, 0x77, 0x97, 
	0xab, 0xa9, 0x5d, 0x76, 0xc1, 0xa4, 0x0e, 0x59, 0xb1, 0x33, 0xd3, 0xe7, 0x77, 0xde, 0xdb, 0xb9, 
	0x7d, 0x7f, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x9f, 0x4f, 0x3f, 0xbf, 0xbb, 0xb3, 0xb6, 0x95, 0xd3, 0xdb, 
	0xff, 0xd7, 0xe6, 0x74, 0x7d, 0xb5, 0xbd, 0x6d, 0x6d, 0x6d, 0x65, 0x76, 0x69, 0xdc, 0xc2, 0x98, 
	0xb0, 0xac, 0x8b, 0x99, 0x99, 0xb9, 0x38, 0x7a, 0xfc, 0xf7, 0xf3, 0xfb, 0xf5, 0xf2, 0xfa, 0xfd, 
	0xee, 0xe7, 0xdb, 0xdb, 0xd5, 0xd4, 0xb5, 0xb3, 0xb3, 0x37, 0x78, 0x6a, 0x7b, 0x74, 0x77, 0x73, 
	0x6f, 0x67, 0x5f, 0xcf, 0xbe, 0x9e, 0x3d, 0x7d, 0x7d, 0xfb, 0xfb, 0xfb, 0xf7, 0xf7, 0xff, 0xef, 
	0xef, 0x6f, 0x6f, 0x5f, 0x7f, 0x7f, 0x7f, 0xff, 0x03, 0xe4, 0xf3, 0x7d, 0x7e, 0xfe, 0xff, 0x00, 
	0x67, 0xb0, 0x56, 0xab, 0xad, 0x55, 0x59, 0x2f, 0x76, 0xb6, 0xd4, 0x4d, 0x2b, 0x93, 0x43, 0x4b, 
	0x23, 0x1a, 0xe6, 0xf6, 0xfa, 0xe6, 0xf6, 0xf2, 0xf2, 0xf2, 0xfb, 0xfb, 0xfb, 0xfb, 0xfa, 0xf2, 
	0xf4, 0xf6, 0x8e, 0x1a, 0x5d, 0x59, 0x1e, 0x2f, 0x4f, 0x2f, 0xaf, 0x77, 0x77, 0x77, 0x7b, 0xd3, 
	0xd5, 0xf6, 0xee, 0xaf, 0xef, 0xef, 0xff, 0xdf, 0xdf, 0xdf, 0x5f, 0xdf, 0xbf, 0xbf, 0xbe, 0x31, 
	0xc7, 0x1b, 0xa3, 0x73, 0x3b, 0x99, 0x59, 0xaf, 0x6c, 0x6d, 0xad, 0xdd, 0x6d, 0x6d, 0xed, 0xec, 
	0x6c, 0xed, 0xe9, 0x6b, 0xdb, 0x53, 0xd7, 0xd7, 0xdf, 0xdf, 0xff, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0x3f, 0xff, 0xfe, 0x7e, 0x7e, 0x7f, 0x7e, 0xfe, 0x7e, 0xfe, 0xfe, 0xfe, 0xfd, 0xfd, 0xfd
};
// 'nami (1)-22', 128x32px
static const char nami_frame_22 [] PROGMEM = {
	0xfb, 0xfb, 0xf7, 0xf7, 0x9f, 0x3f, 0x6f, 0xfb, 0xff, 0x7f, 0x7f, 0xff, 0xfe, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 
	0xff, 0xff, 0x7f, 0x87, 0xf8, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x7f, 0xff, 0xff, 0x0f, 0x71, 0xfe, 0xfb, 0xe3, 0xed, 0xe2, 0xe3, 0xf3, 0x77, 0x9a, 0xc5, 0xfc, 
	0xff, 0xff, 0xfe, 0xfc, 0xfd, 0xeb, 0x10, 0x5a, 0x1d, 0x9e, 0xbc, 0xb9, 0xe3, 0xf3, 0x79, 0x36, 
	0xcf, 0x60, 0x1f, 0xc1, 0xef, 0x7f, 0x9f, 0x27, 0xc9, 0xff, 0x3e, 0xdb, 0xcf, 0x67, 0x7a, 0x49, 
	0x35, 0x35, 0x7f, 0x7b, 0xf2, 0xee, 0xeb, 0xe9, 0xfd, 0xdd, 0xff, 0xdb, 0xd7, 0xf7, 0xe5, 0xad, 
	0xab, 0xbb, 0xb3, 0xb7, 0xf7, 0x67, 0x77, 0x7f, 0x7f, 0x7f, 0x3f, 0xff, 0xff, 0xff, 0xbf, 0xbf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xef, 0xfc, 0x7d, 0xbb, 0xb3, 0xbf, 
	0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xef, 0xf7, 0xdf, 0x6f, 0xbf, 0xdb, 
	0xef, 0x77, 0xec, 0xb3, 0x99, 0x4c, 0xde, 0xdf, 0xdf, 0xde, 0xcf, 0xe1, 0xf9, 0xdf, 0xdf, 0x4f, 
	0x0f, 0xef, 0xe1, 0xb7, 0xa8, 0xdc, 0x39, 0xf3, 0xe7, 0xef, 0xdc, 0x5d, 0x59, 0x59, 0x5b, 0x5b, 
	0x4b, 0x6b, 0x2f, 0x2f, 0xef, 0xaf, 0x1f, 0x67, 0xf7, 0xb7, 0x0b, 0x33, 0xc9, 0x04, 0xd2, 0xd3, 
	0xc4, 0xd2, 0xdb, 0xcd, 0x86, 0xbf, 0xa8, 0xb3, 0xc1, 0xc7, 0x9e, 0xb8, 0xb6, 0x8f, 0xbf, 0xbf, 
	0x9f, 0xdf, 0xde, 0xde, 0xce, 0xfc, 0xec, 0xed, 0xe9, 0xe9, 0xeb, 0xe3, 0xe7, 0xf7, 0xf7, 0xf7, 
	0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 
	0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xf3, 0xf3, 0xf5, 0xec, 0x1e, 0x7a, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0xff, 0x1f, 0xef, 0xff, 0x0f, 0x17, 0xea, 0xfb, 0xf5, 0xfe, 0xf6, 0xae, 0xaf, 0xed, 0x5d, 
	0x5f, 0xdf, 0xde, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbe, 0x7e, 0x7e, 0x7f, 0x41, 0xfe, 0xff, 0xfe, 
	0xfe, 0xfc, 0xf9, 0x1b, 0xe7, 0xc7, 0x9e, 0x7e, 0xbe, 0xfe, 0xfc, 0xfd, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xff, 0xfc, 0xc0, 0x33, 0x76, 0xec, 0x59, 0xdb, 0xb6, 0xcd, 
	0xcb, 0xd7, 0x87, 0x77, 0x77, 0x57, 0x57, 0x67, 0xe7, 0x37, 0xbb, 0x3f, 0x3f, 0xbf, 0x3f, 0xff, 
	0xbf, 0x3f, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xcf, 0xef, 0x6f, 0xef, 0xef, 0xef, 0xa7, 
	0xb7, 0xf7, 0xf7, 0x77, 0xb3, 0xbb, 0x9b, 0xdb, 0xcb, 0xfd, 0xfd, 0xf5, 0xf5, 0xfc, 0xf6, 0xfe, 
	0xef, 0x6f, 0x6f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 
	0x7d, 0x7d, 0xfc, 0xff, 0x7f, 0x7c, 0x38, 0x98, 0xa5, 0xe9, 0xa9, 0x63, 0xc3, 0xc3, 0x47, 0xc7, 
	0xc7, 0xc7, 0x86, 0x86, 0x86, 0x8e, 0x8f, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xe4, 0xe7, 0xef, 
	0xef, 0xe3, 0xeb, 0xcc, 0xcf, 0xdf, 0xd8, 0xb2, 0x2f, 0x5f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 
	0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xbf, 0xbf, 0xbf, 0xdf, 0xd1, 0xdf, 0xdf, 0xff, 0xbf, 0xbf, 
	0xbe, 0xbe, 0xbc, 0x3b, 0xc7, 0x78, 0x00, 0x66, 0x01, 0xb7, 0xdf, 0x47, 0x90, 0x4b, 0xa1, 0xb8, 
	0x4f, 0xf2, 0xdd, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xed, 0xdb, 0x5a, 0xdb, 0x5f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 12144)
static const  char* tap[TAP_FRAMES_NAMI] = {
	nami_frame_0,
	nami_frame_3,
	nami_frame_4,
	nami_frame_8,
	nami_frame_13,
	nami_frame_15,
	nami_frame_16,
	nami_frame_17,
	nami_frame_20,
	nami_frame_22
};

    render_animation(tap, TAP_FRAMES_NAMI);
    return false;
}
#endif