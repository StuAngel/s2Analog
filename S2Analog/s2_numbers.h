/* 
  this is RLE data - being a 2 tone screen there is no need for colour information as its either on or off, so its just continuous till it requires a colour flip 
*/

const unsigned int s2_numbers [] PROGMEM = 
{ 
  0x271, 0x10c4, 0x3, 0x8, 0x5, 0xb8, 0x3, 0x7, 0x8, 0xb5, 0x4, 0x6, 0x9, 0xb3, 0x6, 0x5, 0x4, 0x3, 0x4, 0xb1, 0x7, 0x5, 0x3, 0x5, 0x3, 
  0xb1, 0x3, 0x1, 0x3, 0x5, 0x3, 0x5, 0x3, 0xb5, 0x3, 0xd, 0x3, 0x9b, 0x2, 0x18, 0x3, 0xc, 0x3, 0x9b, 0x4, 0x17, 0x3, 0xb, 0x4, 0x9b, 
  0x4, 0x17, 0x3, 0xa, 0x4, 0x9c, 0x5, 0x16, 0x3, 0x9, 0x4, 0x1e, 0x3, 0x7c, 0x5, 0x16, 0x3, 0x8, 0x4, 0x19, 0x9, 0x7b, 0x7, 0x15, 0x3, 
  0x7, 0x4, 0x1a, 0x9, 0x72, 0x3, 0x5, 0x4, 0x1, 0x3, 0x15, 0x3, 0x6, 0x4, 0x1a, 0x9, 0x73, 0x3, 0x6, 0x2, 0x3, 0x3, 0x14, 0x3, 0x6, 0xa, 
  0x18, 0x4, 0x74, 0x4, 0x6, 0x1, 0x3, 0x4, 0x13, 0x3, 0x5, 0xb, 0x18, 0x4, 0x74, 0x4, 0xb, 0x3, 0x13, 0x3, 0x5, 0xb, 0x17, 0x4, 0x74, 
  0x6, 0xa, 0x4, 0x3c, 0x4, 0x74, 0x6, 0xb, 0x3, 0x3b, 0x4, 0x74, 0x3, 0x2, 0x3, 0xa, 0x4, 0x39, 0x4, 0x76, 0x2, 0x2, 0x4, 0xa, 0x3, 0x39, 
  0x4, 0x76, 0x1, 0x4, 0x3, 0xb, 0x3, 0x37, 0x4, 0x7c, 0x4, 0xa, 0x2, 0x38, 0x4, 0x7d, 0x3, 0x43, 0x4, 0x7e, 0x4, 0x42, 0x3, 0x80, 0x4, 0x42, 
  0x2, 0x81, 0x3, 0xc5, 0x3, 0x3cd, 0x1, 0x1, 0x1, 0xc2, 0x8, 0xbf, 0xb, 0xbd, 0x3, 0x4, 0x6, 0xba, 0x4, 0x5, 0x6, 0xba, 0x2, 0x8, 0x4, 0x72, 
  0x3, 0x45, 0x3, 0x9, 0x3, 0x70, 0x7, 0x42, 0x3, 0xa, 0x2, 0x70, 0x8, 0x42, 0x4, 0x8, 0x2, 0x74, 0x4, 0x42, 0x6, 0x6, 0x3, 0x74, 0x4, 0x43, 
  0x6, 0x3, 0x3, 0x69, 0x3, 0xa, 0x3, 0x44, 0xb, 0x66, 0x7, 0x9, 0x3, 0x3b, 0x1, 0xa, 0x8, 0x68, 0x9, 0x5, 0x4, 0x3a, 0x4, 0xa, 0x1, 0x1, 0x1, 
  0x1, 0x1, 0x69, 0x11, 0x3b, 0x6, 0x77, 0x4, 0x1, 0xa, 0x3d, 0x6, 0x76, 0x4, 0x4, 0x6, 0x3e, 0x8, 0x75, 0x4, 0x47, 0x3, 0x1, 0x6, 0x73, 0x4, 
  0x47, 0x3, 0x3, 0x6, 0x72, 0x4, 0x46, 0x3, 0x4, 0x6, 0x72, 0x3, 0x47, 0x2, 0x6, 0x6, 0x70, 0x2, 0x52, 0x3, 0xc6, 0x2, 0xf8e, 0x9, 0x83, 0x3, 
  0x6, 0x2, 0x2f, 0xd, 0x80, 0x4, 0x6, 0x4, 0x2c, 0xf, 0x7e, 0x5, 0x6, 0x4, 0x2b, 0x4, 0x3, 0x3, 0x3, 0x3, 0x7d, 0x4, 0x9, 0x4, 0x2a, 0x3, 0x5, 
  0x3, 0x3, 0x3, 0x7c, 0x3, 0x5, 0x3, 0x3, 0x3, 0x2a, 0x3, 0x5, 0x3, 0x3, 0x3, 0x7c, 0x3, 0x5, 0x3, 0x3, 0x3, 0x2a, 0x3, 0x5, 0x3, 0x3, 0x3, 
  0x7c, 0x3, 0x5, 0x4, 0x2, 0x3, 0x2a, 0x4, 0x3, 0x4, 0x2, 0x4, 0x7c, 0x4, 0x3, 0xa, 0x2b, 0x9, 0x2, 0x4, 0x7e, 0x8, 0x1, 0x6, 0x2d, 0x8, 0x2, 
  0x4, 0x7f, 0x7, 0x2, 0x4, 0x2f, 0x5, 0x4, 0x2, 0x82, 0x5, 0xfe4, 0x5, 0xc2, 0x7, 0xc1, 0x8, 0xbf, 0x3, 0x3, 0x3, 0x71, 0x3, 0x46, 0x8, 0x4, 0x3, 
  0x6f, 0x5, 0x44, 0x8, 0x5, 0x3, 0x6f, 0x5, 0x44, 0x9, 0x4, 0x3, 0x6e, 0x7, 0x42, 0x4, 0x3, 0x5, 0x1, 0x4, 0x6a, 0x2, 0x2, 0x3, 0x1, 0x4, 0x41, 0x3, 
  0x5, 0x8, 0x6a, 0x8, 0x2, 0x3, 0x41, 0x4, 0x4, 0x8, 0x6a, 0x7, 0x3, 0x3, 0x42, 0x3, 0x3, 0x3, 0x1, 0x3, 0x6e, 0x6, 0x3, 0x3, 0x41, 0x9, 0x72, 0x8, 
  0x2, 0x2, 0x42, 0x8, 0x72, 0x3, 0x1, 0x9, 0x43, 0x5, 0x74, 0x2, 0x2, 0x8, 0xc2, 0x7, 0xc3, 0x5, 0xc5, 0x3, 0x874, 0x3, 0x87, 0x1, 0x3c, 0x7, 0x83, 
  0x3, 0x39, 0xa, 0x81, 0x4, 0x39, 0x4, 0x3, 0x3, 0x80, 0x4, 0x3a, 0x3, 0x5, 0x1, 0x80, 0x5, 0x3a, 0x3, 0x84, 0x5, 0x3c, 0x3, 0x7, 0x1, 0x7b, 0x4, 
  0x3e, 0x3, 0x6, 0x3, 0x78, 0x6, 0x3e, 0x4, 0x3, 0x6, 0x75, 0x7, 0x21, 0x5, 0x1a, 0xc, 0x73, 0x7, 0x22, 0x7, 0x1a, 0xb, 0x73, 0x4, 0x24, 0x9, 
  0x1a, 0x5, 0x2, 0x4, 0x71, 0x6, 0x22, 0x4, 0x3, 0x3, 0x22, 0x3, 0x73, 0x6, 0x20, 0x3, 0x5, 0x3, 0x1f, 0x5, 0x75, 0x6, 0x1e, 0x3, 0x5, 0x3, 0x1d, 
  0x6, 0x78, 0x5, 0x1d, 0x3, 0x5, 0x3, 0x1c, 0x5, 0x7b, 0x4, 0x1d, 0x4, 0x3, 0x4, 0x1c, 0x4, 0x7e, 0x1, 0x1f, 0xa, 0x1c, 0x2, 0xa0, 0xa, 0xc0, 0x4, 
  0x1, 0x3, 0xc5, 0x3, 0xbd, 0x3, 0x5, 0x3, 0xbd, 0x4, 0x3, 0x3, 0xbf, 0x9, 0xbf, 0x8, 0xc2, 0x4 
};
