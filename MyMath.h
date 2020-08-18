#ifndef MyMath_h
#define MyMath_h

#include <Arduino.h>

class MyMath {
public:
  // signed int
  class I16C {
    union {
      int16_t i;
      uint8_t c[2];
    };

  public:
    int16_t encoad(uint8_t dataBuf[2]) {
      i = 0;
      memcpy(c, dataBuf, 2);
      return i;
    };
    void encoad(int16_t &targetBuf, uint8_t dataBuf[2]) {
      i = 0;
      memcpy(c, dataBuf, 2);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[2], int16_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 2);
    };
  } i16c;

  class UI16C {
    union {
      uint16_t i;
      uint8_t c[2];
    };

  public:
    uint16_t encoad(uint8_t dataBuf[2]) {
      i = 0;
      memcpy(c, dataBuf, 2);
      return i;
    };
    void encoad(uint16_t &targetBuf, uint8_t dataBuf[2]) {
      i = 0;
      memcpy(c, dataBuf, 2);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[2], uint16_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 2);
    };
  } ui16c;

  class I32C {
    union {
      int32_t i;
      uint8_t c[4];
    };

  public:
    int32_t encoad(uint8_t dataBuf[4]) {
      i = 0;
      memcpy(c, dataBuf, 4);
      return i;
    };
    void encoad(int32_t &targetBuf, uint8_t dataBuf[4]) {
      i = 0;
      memcpy(c, dataBuf, 4);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[4], int32_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 4);
    };
  } i32c;

  class UI32C {
    union {
      uint32_t i;
      uint8_t c[4];
    };

  public:
    uint32_t encoad(uint8_t dataBuf[4]) {
      i = 0;
      memcpy(c, dataBuf, 4);
      return i;
    };
    void encoad(uint32_t &targetBuf, uint8_t dataBuf[4]) {
      i = 0;
      memcpy(c, dataBuf, 4);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[4], uint32_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 4);
    };
  } ui32c;

  class I64C {
    union {
      int64_t i;
      uint8_t c[8];
    };

  public:
    int64_t encoad(uint8_t dataBuf[8]) {
      i = 0;
      memcpy(c, dataBuf, 8);
      return i;
    };
    void encoad(int64_t &targetBuf, uint8_t dataBuf[8]) {
      i = 0;
      memcpy(c, dataBuf, 8);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[8], int64_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 8);
    };
  } i64c;

  class UI64C {
    union {
      uint64_t i;
      uint8_t c[8];
    };

  public:
    uint64_t encoad(uint8_t dataBuf[8]) {
      i = 0;
      memcpy(c, dataBuf, 8);
      return i;
    };
    void encoad(uint64_t &targetBuf, uint8_t dataBuf[8]) {
      i = 0;
      memcpy(c, dataBuf, 8);
      targetBuf = i;
    };
    void decoad(uint8_t targetBuf[8], uint64_t dataBuf) {
      i = dataBuf;
      memcpy(targetBuf, c, 8);
    };
  } ui64c;

  template <typename T1, typename T2, typename T3>
  T1 map(T2 x, T3 in_min, T3 in_max, T1 out_min, T1 out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
  };
};

#endif
