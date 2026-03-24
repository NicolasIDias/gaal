#pragma once

typedef struct vec3
{
    float x;
    float y;
    float z;
} vec3_t;

vec3_t vec3_create(float x, float y, float z);
vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
void vec3_print(vec3_t *v, const char *txt);
float vec3_dot_product(vec3_t *u, vec3_t *v);
vec3_t vec3_cross_product(vec3_t *a, vec3_t *b);
