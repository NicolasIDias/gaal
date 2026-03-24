#pragma once
#define MAT_IDX(row, col) ((col) * 4 + (row))
#include <gaal/vec3.h>

typedef struct mat4
{

    float m[16];

} mat4_t;

mat4_t mat4_identity();