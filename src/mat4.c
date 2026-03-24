#include <gaal/mat4.h>

mat4_t mat4_identity()
{
    mat4_t mat = {0};

    mat.m[MAT_IDX(0, 0)] = 1.0f;
    mat.m[MAT_IDX(1, 1)] = 1.0f;
    mat.m[MAT_IDX(2, 2)] = 1.0f;
    mat.m[MAT_IDX(3, 3)] = 1.0f;

    return mat;
}