#include <rawmath/vec3.h>
#include <stdio.h>

int main(void)
{
    vec3_t v = vec3_create(1.1f, 2.2f, 3.3f);
    vec3_print(v, "vec3_print");
    printf("print_test passed!\n");
    return 0;
}
