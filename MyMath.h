#ifndef MyMath_h
#define MyMath_h

#include <Arduino.h>

class MyMath {
public:
  // signed int
  class I16C {
  private:
    union {
      int16_t i;
      uint8_t c[2];
    };

  public:
    void clear() { i = 0; };
    void write(int16_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1) {
      c[0] = val0;
      c[1] = val1;
    };
    int16_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } i16c;

  class UI16C {
  private:
    union {
      uint16_t i;
      uint8_t c[2];
    };

  public:
    void clear() { i = 0; };
    void write(uint16_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1) {
      c[0] = val0;
      c[1] = val1;
    };
    uint16_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } ui16c;

  class I32C {
  private:
    union {
      int32_t i;
      uint8_t c[4];
    };

  public:
    void clear() { i = 0; };
    void write(int32_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1, uint8_t val2, uint8_t val3) {
      c[0] = val0;
      c[1] = val1;
      c[2] = val2;
      c[3] = val3;
    };
    int32_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } i32c;

  class UI32C {
  private:
    union {
      uint32_t i;
      uint8_t c[4];
    };

  public:
    void clear() { i = 0; };
    void write(uint32_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1, uint8_t val2, uint8_t val3) {
      c[0] = val0;
      c[1] = val1;
      c[2] = val2;
      c[3] = val3;
    };
    uint32_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } ui32c;

  class I64C {
  private:
    union {
      int64_t i;
      uint8_t c[8];
    };

  public:
    void clear() { i = 0; };
    void write(int64_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1, uint8_t val2, uint8_t val3,
               uint8_t val4, uint8_t val5, uint8_t val6, uint8_t val7) {
      c[0] = val0;
      c[1] = val1;
      c[2] = val2;
      c[3] = val3;
      c[4] = val4;
      c[5] = val5;
      c[6] = val6;
      c[7] = val7;
    };
    int64_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } i64c;

  class UI64C {
  private:
    union {
      uint64_t i;
      uint8_t c[8];
    };

  public:
    void clear() { i = 0; };
    void write(uint64_t val) { i = val; };
    void write(uint8_t val0, uint8_t val1, uint8_t val2, uint8_t val3,
               uint8_t val4, uint8_t val5, uint8_t val6, uint8_t val7) {
      c[0] = val0;
      c[1] = val1;
      c[2] = val2;
      c[3] = val3;
      c[4] = val4;
      c[5] = val5;
      c[6] = val6;
      c[7] = val7;
    };
    uint64_t read() { return i; };
    uint8_t read(uint8_t i) { return c[i]; };
  } ui64c;

  template <typename T1, typename T2, typename T3>
  T1 map(T2 x, T3 in_min, T3 in_max, T1 out_min, T1 out_max);
};

#endif
