#include "TVout.h"
//#include <fontALL.h>


PROGMEM const unsigned char schematic[] = {
120,96,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFE,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x0B,0x0C,0xE4,0x41,0x00,0x00,0x03,0x12,0x0E,0x22,0x61,0x80,0xB8,0x71,0x82,
0x0B,0x0D,0x94,0x41,0x00,0x00,0x05,0x14,0x11,0x22,0x61,0x80,0xA4,0xC9,0x82,
0x0A,0x95,0x04,0x41,0x00,0x00,0x01,0x14,0x11,0x22,0x52,0x80,0xA4,0x81,0x42,
0x0A,0x95,0x04,0x41,0x00,0x00,0x01,0x18,0x11,0x3E,0x52,0x80,0xB8,0x82,0x42,
0x0A,0x65,0x04,0x41,0x00,0x00,0x01,0x14,0x11,0x22,0x4C,0x80,0xA4,0x83,0xC2,
0x0A,0x65,0x94,0x41,0x00,0x00,0x01,0x12,0x11,0x22,0x4C,0x80,0xA4,0xCA,0x22,
0x0A,0x64,0xE3,0x81,0x00,0x00,0x07,0x92,0x0E,0x22,0x4C,0x80,0xA4,0x74,0x22,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFE,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x08,0x70,0x00,0x01,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x80,0x00,0x02,
0x08,0x90,0x00,0x01,0x00,0x00,0x02,0x80,0x02,0x80,0x02,0x80,0x80,0x00,0x02,
0x08,0x84,0x5E,0x39,0x00,0x00,0x04,0x40,0x04,0x40,0x04,0x40,0x80,0x00,0x02,
0x08,0x64,0x92,0x41,0x00,0x00,0x08,0x20,0x08,0x20,0x08,0x20,0x80,0x00,0x02,
0x08,0x12,0x92,0x41,0xFF,0xFF,0xF0,0x10,0x10,0x10,0x10,0x1C,0x80,0x00,0x02,
0x08,0x92,0x92,0x41,0x00,0x00,0x00,0x08,0x20,0x08,0x20,0x04,0x80,0x00,0x02,
0x08,0xE1,0x12,0x39,0x00,0x00,0x00,0x04,0x40,0x04,0x40,0x04,0xA1,0x4F,0x02,
0x08,0x01,0x00,0x01,0x00,0x00,0x00,0x02,0x80,0x02,0x80,0x04,0xB3,0x49,0x82,
0x08,0x02,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x04,0x92,0x48,0x82,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x92,0x48,0x82,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x9C,0x48,0x82,
0x08,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x04,0x8C,0x49,0x82,
0x08,0x02,0x14,0xF1,0x00,0x00,0x02,0x80,0x02,0x80,0x02,0x84,0x8C,0x4F,0x02,
0x08,0x03,0x34,0x99,0x00,0x00,0x04,0x40,0x04,0x40,0x04,0x44,0x80,0x00,0x02,
0x08,0x01,0x24,0x89,0x00,0x00,0x08,0x20,0x08,0x20,0x08,0x24,0x80,0x00,0x02,
0x08,0x01,0x24,0x89,0xFF,0xFF,0xF0,0x10,0x10,0x10,0x10,0x1C,0x80,0x00,0x02,
0x08,0x01,0xC4,0x89,0x00,0x00,0x00,0x08,0x20,0x08,0x20,0x00,0x80,0x00,0x02,
0x08,0x00,0xC4,0x99,0x00,0x00,0x00,0x04,0x40,0x04,0x40,0x00,0x80,0x00,0x02,
0x08,0x00,0xC4,0xF1,0x00,0x00,0x00,0x02,0x80,0x02,0x80,0x00,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x0C,0xF9,0xC1,0xC4,0x4C,0x30,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x14,0x1A,0x42,0x24,0x4C,0x30,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x34,0x12,0x42,0x24,0x4A,0x50,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x24,0x32,0x42,0x27,0xCA,0x50,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x3E,0x22,0x42,0x24,0x49,0x90,0x80,0x00,0x02,
0x08,0x00,0x00,0x01,0x00,0x00,0x04,0x62,0x42,0x24,0x49,0x90,0x80,0x00,0x02,
0x08,0x1E,0x64,0xF1,0x00,0x00,0x04,0x43,0x81,0xC4,0x49,0x90,0x9E,0x64,0xF2,
0x08,0x32,0x64,0x99,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB2,0x64,0x9A,
0x08,0x20,0x54,0x89,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA0,0x54,0x8A,
0x08,0x26,0x54,0x89,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA6,0x54,0x8A,
0x08,0x22,0x4C,0x89,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA2,0x4C,0x8A,
0x08,0x32,0x4C,0x99,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB2,0x4C,0x9A,
0x08,0x1E,0x4C,0xF1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0x4C,0xF2,
0x08,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x02,
0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x30,0x00,0x00,0x04,0x00,0x00,0x40,0x00,0x00,0x00,0x03,0x81,0xC6,0x04,0x00,
0x48,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x04,0x42,0x2A,0x04,0x00,
0x42,0x25,0x87,0x04,0x38,0x3C,0x48,0x8B,0xC8,0x8E,0x08,0x24,0x02,0x0A,0x00,
0x22,0x26,0x48,0x04,0x40,0x02,0x48,0x88,0x28,0x90,0x08,0x24,0x02,0x0A,0x00,
0x11,0x44,0x48,0x04,0x60,0x1E,0x45,0x51,0xE5,0x18,0x08,0x24,0x02,0x11,0x00,
0x09,0x44,0x48,0x04,0x18,0x22,0x45,0x52,0x25,0x06,0x08,0x24,0x02,0x1F,0x00,
0x48,0x84,0x48,0x04,0x08,0x22,0x42,0x22,0x22,0x02,0x04,0x42,0x22,0x20,0x80,
0x30,0x84,0x47,0x04,0x70,0x1E,0x42,0x21,0xE2,0x1C,0x03,0x81,0xCF,0xA0,0x80,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x82,0x8F,0x01,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x82,0x88,0x80,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
0x44,0x88,0x41,0x0E,0x0F,0x02,0x03,0x8B,0x03,0xC5,0x91,0x07,0x87,0x17,0xE0,
0x44,0x88,0x41,0x10,0x08,0x82,0x04,0x4C,0x80,0x26,0x51,0x04,0x48,0x98,0x80,
0x28,0x88,0x41,0x18,0x08,0x84,0x04,0x48,0x81,0xE4,0x4A,0x04,0x48,0x90,0x80,
0x28,0x88,0x41,0x06,0x08,0x84,0x04,0x48,0x82,0x24,0x4A,0x04,0x48,0x90,0x80,
0x10,0x88,0x81,0x02,0x08,0x88,0x04,0x48,0x82,0x24,0x44,0x04,0x48,0x90,0x80,
0x10,0x8F,0x01,0x1C,0x0F,0x08,0x03,0x88,0x81,0xE4,0x44,0x07,0x87,0x10,0x60,
0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

PROGMEM const unsigned char TVOlogo[] = {
96,32,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,
0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x10,0x38,
0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x04,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x02,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x80,0x02,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x02,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xC2,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x42,
0x4F,0xFF,0x60,0x18,0x00,0x00,0x00,0x00,0x17,0xFF,0xFF,0x42,
0x4F,0xFF,0x60,0x18,0x00,0x00,0x00,0x30,0x14,0x00,0x01,0x42,
0x40,0x60,0x60,0x18,0x00,0x00,0x00,0x30,0x14,0x70,0x71,0x42,
0x40,0x60,0x30,0x30,0x00,0x00,0x00,0x30,0x14,0x88,0x89,0x42,
0x40,0x60,0x30,0x30,0x3E,0x06,0x0C,0xFE,0x15,0x05,0x25,0x42,
0x40,0x60,0x30,0x60,0xFF,0x86,0x0C,0xFE,0x15,0x72,0x75,0x42,
0x40,0x60,0x18,0x60,0xC1,0x86,0x0C,0x30,0x15,0x05,0x25,0x42,
0x40,0x60,0x18,0x61,0x80,0xC6,0x0C,0x30,0x14,0x88,0x89,0x42,
0x40,0x60,0x18,0xC1,0x80,0xC6,0x0C,0x30,0x14,0x70,0x71,0x42,
0x40,0x60,0x0C,0xC1,0x80,0xC6,0x0C,0x30,0x14,0x00,0x01,0x42,
0x40,0x60,0x0C,0xC1,0x80,0xC6,0x0C,0x30,0x17,0xFF,0xFF,0x42,
0x40,0x60,0x0F,0x81,0x80,0xC6,0x0C,0x30,0x10,0x00,0x00,0x42,
0x40,0x60,0x07,0x80,0xC1,0x87,0x1C,0x30,0x15,0x40,0x15,0x42,
0x40,0x60,0x07,0x80,0xFF,0x83,0xFC,0x3E,0x12,0x8A,0x8A,0x42,
0x40,0x60,0x03,0x00,0x3E,0x01,0xEC,0x1E,0x15,0x40,0x15,0x42,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x42,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xC2,
0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,
0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,
0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,
0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

};

TVout TV;

int zOff = 150;
int xOff = 0;
int yOff = 0;
int cSize = 50;
int view_plane = 64;
float angle = PI/60;

float cube3d[8][3] = {
  {xOff - cSize,yOff + cSize,zOff - cSize},
  {xOff + cSize,yOff + cSize,zOff - cSize},
  {xOff - cSize,yOff - cSize,zOff - cSize},
  {xOff + cSize,yOff - cSize,zOff - cSize},
  {xOff - cSize,yOff + cSize,zOff + cSize},
  {xOff + cSize,yOff + cSize,zOff + cSize},
  {xOff - cSize,yOff - cSize,zOff + cSize},
  {xOff + cSize,yOff - cSize,zOff + cSize}
};
unsigned char cube2d[8][2];


void intro() {
unsigned char w,l,wb;
  int index;
  w = pgm_read_byte(TVOlogo);
  l = pgm_read_byte(TVOlogo+1);
  if (w&7)
    wb = w/8 + 1;
  else
    wb = w/8;
  index = wb*(l-1) + 2;
  for ( unsigned char i = 1; i < l; i++ ) {
    TV.bitmap((TV.hres() - w)/2,0,TVOlogo,index,w,i);
    index-= wb;
    TV.delay(50);
  }
  for (unsigned char i = 0; i < (TV.vres() - l)/2; i++) {
    TV.bitmap((TV.hres() - w)/2,i,TVOlogo);
    TV.delay(50);
  }
  TV.delay(3000);
  TV.clear_screen();
}

void zrotate(float q) {
  float tx,ty,temp;
  for(byte i = 0; i < 8; i++) {
    tx = cube3d[i][0] - xOff;
    ty = cube3d[i][1] - yOff;
    temp = tx * cos(q) - ty * sin(q);
    ty = tx * sin(q) + ty * cos(q);
    tx = temp;
    cube3d[i][0] = tx + xOff;
    cube3d[i][1] = ty + yOff;
  }
}

void yrotate(float q) {
  float tx,tz,temp;
  for(byte i = 0; i < 8; i++) {
    tx = cube3d[i][0] - xOff;
    tz = cube3d[i][2] - zOff;
    temp = tz * cos(q) - tx * sin(q);
    tx = tz * sin(q) + tx * cos(q);
    tz = temp;
    cube3d[i][0] = tx + xOff;
    cube3d[i][2] = tz + zOff;
  }
}

void xrotate(float q) {
  float ty,tz,temp;
  for(byte i = 0; i < 8; i++) {
    ty = cube3d[i][1] - yOff;
    tz = cube3d[i][2] - zOff;
    temp = ty * cos(q) - tz * sin(q);
    tz = ty * sin(q) + tz * cos(q);
    ty = temp;
    cube3d[i][1] = ty + yOff;
    cube3d[i][2] = tz + zOff;
  }
}

void draw_cube() {
  TV.draw_line(cube2d[0][0],cube2d[0][1],cube2d[1][0],cube2d[1][1],WHITE);
  TV.draw_line(cube2d[0][0],cube2d[0][1],cube2d[2][0],cube2d[2][1],WHITE);
  TV.draw_line(cube2d[0][0],cube2d[0][1],cube2d[4][0],cube2d[4][1],WHITE);
  TV.draw_line(cube2d[1][0],cube2d[1][1],cube2d[5][0],cube2d[5][1],WHITE);
  TV.draw_line(cube2d[1][0],cube2d[1][1],cube2d[3][0],cube2d[3][1],WHITE);
  TV.draw_line(cube2d[2][0],cube2d[2][1],cube2d[6][0],cube2d[6][1],WHITE);
  TV.draw_line(cube2d[2][0],cube2d[2][1],cube2d[3][0],cube2d[3][1],WHITE);
  TV.draw_line(cube2d[4][0],cube2d[4][1],cube2d[6][0],cube2d[6][1],WHITE);
  TV.draw_line(cube2d[4][0],cube2d[4][1],cube2d[5][0],cube2d[5][1],WHITE);
  TV.draw_line(cube2d[7][0],cube2d[7][1],cube2d[6][0],cube2d[6][1],WHITE);
  TV.draw_line(cube2d[7][0],cube2d[7][1],cube2d[3][0],cube2d[3][1],WHITE);
  TV.draw_line(cube2d[7][0],cube2d[7][1],cube2d[5][0],cube2d[5][1],WHITE);
}

void printcube() {
  //calculate 2d points
  for(byte i = 0; i < 8; i++) {
    cube2d[i][0] = (unsigned char)((cube3d[i][0] * view_plane / cube3d[i][2]) + (TV.hres()/2));
    cube2d[i][1] = (unsigned char)((cube3d[i][1] * view_plane / cube3d[i][2]) + (TV.vres()/2));
  }
  TV.delay_frame(1);
  TV.clear_screen();
  draw_cube();
}



void setup() {
  TV.begin(PAL,120,96);
  //TV.select_font(font6x8);
  intro();
  TV.println("I am the TVout\nlibrary running on a freeduino\n");
  TV.delay(2500);
  TV.println("I generate a PAL\nor NTSC composite  video using\ninterrupts\n");
  TV.delay(2500);
  TV.println("My schematic:");
  TV.delay(1500);
  TV.bitmap(0,0,schematic);
  TV.delay(10000);
  TV.clear_screen();
  TV.println("Lets see what\nwhat I can do");
  TV.delay(2000);
  
  /*fonts
  TV.clear_screen();
  TV.println(0,0,"Multiple fonts:");
  TV.select_font(font4x6);
  TV.println("4x6 font FONT");
  TV.select_font(font6x8);
  TV.println("6x8 font FONT");
  TV.select_font(font8x8);
  TV.println("8x8 font FONT");
  TV.select_font(font6x8);
  TV.delay(2000);*/
  
  TV.clear_screen();
  TV.println("Draw Basic Shapes");
  TV.delay(2000);
  
  //circles
  TV.clear_screen();
  TV.draw_circle(TV.hres()/2,TV.vres()/2,TV.vres()/3,WHITE);
  TV.delay(500);
  TV.draw_circle(TV.hres()/2,TV.vres()/2,TV.vres()/2,WHITE,INVERT);
  TV.delay(2000);
  
  //rectangles and lines
  TV.clear_screen();
  TV.draw_rect(20,20,80,56,WHITE);
  TV.delay(500);
  TV.draw_rect(10,10,100,76,WHITE,INVERT);
  TV.delay(500);
  TV.draw_line(60,20,60,76,INVERT);
  TV.draw_line(20,48,100,48,INVERT);
  TV.delay(500);
  TV.draw_line(10,10,110,86,INVERT);
  TV.draw_line(10,86,110,10,INVERT);
  TV.delay(2000);
  
  //random cube forever.
  TV.clear_screen();
  /*TV.print(16,40,"Random Cube");
  TV.print(28,48,"Rotation");
  TV.delay(2000);*/
  
  randomSeed(analogRead(0));
}

void loop() {
  int rsteps = arduinoRandom(10,60);
  switch(arduinoRandom(6)) {
    case 0:
      for (int i = 0; i < rsteps; i++) {
        zrotate(angle);
        printcube();
      }
      break;
    case 1:
      for (int i = 0; i < rsteps; i++) {
        zrotate(2*PI - angle);
        printcube();
      }
      break;
    case 2:
      for (int i = 0; i < rsteps; i++) {
        xrotate(angle);
        printcube();
      }
      break;
    case 3:
      for (int i = 0; i < rsteps; i++) {
        xrotate(2*PI - angle);
        printcube();
      }
      break;
    case 4:
      for (int i = 0; i < rsteps; i++) {
        yrotate(angle);
        printcube();
      }
      break;
    case 5:
      for (int i = 0; i < rsteps; i++) {
        yrotate(2*PI - angle);
        printcube();
      }
      break;
  }
}
