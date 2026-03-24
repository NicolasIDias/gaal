#include <gaal/vec3.h>
#include <stdio.h>

vec3_t vec3_create(float x, float y, float z)
{
    vec3_t vec = {x, y, z};
    return vec;
}

vec3_t vec3_add(vec3_t a, vec3_t b)
{
    return vec3_create(a.x + b.x, a.y + b.y, a.z + b.z);
}
vec3_t vec3_sub(vec3_t a, vec3_t b)
{
    return vec3_create(a.x - b.x, a.y - b.y, a.z - b.z);
}

float vec3_dot_product(vec3_t *u, vec3_t *v)
{
    return (u->x * v->x) + (u->y * v->y) + (u->z * v->z);
}

void vec3_print(vec3_t *v, const char *txt)
{
    printf("%s: (%.2f, %.2f, %.2f)\n", txt, v->x, v->y, v->z);
}
