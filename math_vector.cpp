#include <algorithm>

void interp_v2_v2v2(float r[2], const float v1[2], const float v2[2], const float fac) {
    const float inv_fac = 1.0f - fac;

    r[0] = inv_fac * v1[0] + fac * v2[0];
    r[1] = inv_fac * v1[1] + fac * v2[1];
};

void interp_v3_v3v3(float r[3], const float v1[3], const float v2[3], const float fac) {
  const float inv_fac = 1.0f - fac;

  r[0] = inv_fac * v1[0] + fac * v2[0];
  r[1] = inv_fac * v1[1] + fac * v2[1];
  r[2] = inv_fac * v1[2] + fac * v2[2];
};

void interp_v4_v4v4(float r[4], const float v1[4], const float v2[4], const float fac) {
  const float inv_fac = 1.0f - fac;

  r[0] = inv_fac * v1[0] + fac * v2[0];
  r[1] = inv_fac * v1[1] + fac * v2[1];
  r[2] = inv_fac * v1[2] + fac * v2[2];
  r[3] = inv_fac * v1[3] + fac * v2[3];
};

void interp_v2_v2v2v2(float r[2], const float v1[2], const float v2[2], const float v3[2], const float fac[3]) {
    r[0] = v1[0] * fac[0] + v2[0] * fac[1] + v3[0] * fac[2];
    r[1] = v1[1] * fac[0] + v2[1] * fac[1] + v3[1] * fac[2];
};