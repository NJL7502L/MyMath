#include <MyMath.h>

template <typename T1, typename T2, typename T3>
T1 MyMath::map(T2 x, T3 in_min, T3 in_max, T1 out_min, T1 out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
