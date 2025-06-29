#include <algorithm>

void interp_v2_v2v2(float r[2], const float v1[2], const float v2[2], float fac) {
    const float inv_fac = 1.0f - fac;

    r[0] = inv_fac * v1[0] + fac * v2[0];
    r[1] = inv_fac * v1[1] + fac * v2[1];
};