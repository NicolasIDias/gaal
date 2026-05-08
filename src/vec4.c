#include <math.h>
#include <rawmath/common.h>
#include <rawmath/vec4.h>
#include <stdio.h>

vec4_t vec4_create(float x, float y, float z, float w)
{
    vec4_t vec = {x, y, z, w};
    return vec;
}

vec4_t vec4_add(vec4_t a, vec4_t b)
{
    return vec4_create(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

vec4_t vec4_sub(vec4_t a, vec4_t b)
{
    return vec4_create(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

vec4_t vec4_mul(const vec4_t a, const vec4_t b)
{
    return vec4_create(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

float vec4_dot_product(const vec4_t u, const vec4_t v)
{
    return (u.x * v.x) + (u.y * v.y) + (u.z * v.z) + (u.w * v.w);
}

void vec4_scale(float scalar, vec4_t *v)
{
    v->x *= scalar;
    v->y *= scalar;
    v->z *= scalar;
    v->w *= scalar;
}

int vec4_equals(vec4_t a, vec4_t b)
{
    return ((fabsf(a.x - b.x) < VEC4_EPSILON) &&
    (fabsf(a.y - b.y) < VEC4_EPSILON) &&
    (fabsf(a.z - b.z) < VEC4_EPSILON) &&
    (fabsf(a.w - b.w) < VEC4_EPSILON))
    ? 1
    : 0;
}

void vec4_negate(vec4_t *v)
{
    v->x *= -1;
    v->y *= -1;
    v->z *= -1;
    v->w *= -1;
}

void vec4_reflect(vec4_t *r, const vec4_t a, const vec4_t b)
{
    vec4_t normal = b;
    vec4_normalize(&normal);
    float p = 2.f * vec4_dot_product(a, normal);
    r->x = a.x - p * normal.x;
    r->y = a.y - p * normal.y;
    r->z = a.z - p * normal.z;
    r->w = a.w - p * normal.w;
}

float vec4_magnitude(const vec4_t v)
{
    float p1 = v.x * v.x;
    float p2 = v.y * v.y;
    float p3 = v.z * v.z;
    float p4 = v.w * v.w;

    return sqrtf(p1 + p2 + p3 + p4);
}

float vec4_magnitude_sq(vec4_t v)
{
    return (v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w);
}

vec4_t vec4_lerp(vec4_t a, vec4_t b, float t)
{
    return vec4_create(a.x + (b.x - a.x) * t,
                       a.y + (b.y - a.y) * t,
                       a.z + (b.z - a.z) * t,
                       a.w + (b.w - a.w) * t);
}

void vec4_normalize(vec4_t *v)
{
    float magnitude = vec4_magnitude(*v);
    if (magnitude > VEC4_EPSILON)
    {
        float inv_magnitude = 1.0f / magnitude;
        v->x *= inv_magnitude;
        v->y *= inv_magnitude;
        v->z *= inv_magnitude;
        v->w *= inv_magnitude;
    }
}

float vec4_clamp(float val, float min, float max)
{
    if (val < min)
    {
        val = min;
    }
    else if (val > max)
    {
        val = max;
    }
    return val;
}

void vec4_print(vec4_t v, const char *txt)
{
    printf("%s: (%.2f, %.2f, %.2f, %.2f)\n", txt, (double)v.x, (double)v.y, (double)v.z, (double)v.w);
}
