#include <stdio.h>
#include <gaal/vec3.h>

int main() {
    vec3_t u = vec3_create(2.0f, 0.0f, 1.0f);
    vec3_t v = vec3_create(1.0f, 2.0f, -1.0f);

    vec3_print(&u, "Vetor u");
    vec3_print(&v, "Vetor v");
    printf("\n");

    float dot = vec3_dot_product(&u, &v);
    printf("Produto Escalar (u . v): %.2f\n", dot);

    return 0;
}