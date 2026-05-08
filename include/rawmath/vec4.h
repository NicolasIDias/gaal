#pragma once

typedef struct VEC4
{
    float x;
    float y;
    float z;
    float w;
} vec4_t;

vec4_t vec4_create(float x, float y, float z, float w);
vec4_t vec4_add(vec4_t a, vec4_t b);
vec4_t vec4_sub(vec4_t a, vec4_t b);
vec4_t vec4_mul(const vec4_t a, const vec4_t b);
float vec4_dot_product(const vec4_t u, const vec4_t v);
float vec4_magnitude(const vec4_t v);
float vec4_magnitude_sq(vec4_t v);
int vec4_equals(vec4_t a, vec4_t b);
void vec4_print(vec4_t v, const char *txt);
void vec4_scale(float scalar, vec4_t *v);
void vec4_negate(vec4_t *v);
void vec4_reflect(vec4_t *r, const vec4_t a, const vec4_t b);
void vec4_normalize(vec4_t *v);
vec4_t vec4_lerp(vec4_t a, vec4_t b, float t);
float vec4_clamp(float val, float min, float max);
