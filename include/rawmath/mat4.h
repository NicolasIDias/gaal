#pragma once
#define MAT_IDX(row, col) ((col) * 4 + (row))
#include <rawmath/vec3.h>

typedef struct mat4
{

    float m[16];

} mat4_t;

mat4_t mat4_identity(mat4_t *dest);
void mat4_mul(const mat4_t *a, const mat4_t *b, mat4_t *dest);