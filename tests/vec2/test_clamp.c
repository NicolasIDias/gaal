#include <rawmath/vec2.h>
#include <rawmath/common.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

int main(void)
{
    float min = 0.0f;
    float max = 10.0f;

    assert(fabsf(vec2_clamp_float(-5.0f, min, max) - 0.0f) < VEC2_EPSILON);
    assert(fabsf(vec2_clamp_float(12.0f, min, max) - 10.0f) < VEC2_EPSILON);
    assert(fabsf(vec2_clamp_float(5.0f, min, max) - 5.0f) < VEC2_EPSILON);

    printf("clamp_test passed!\n");
    return 0;
}
