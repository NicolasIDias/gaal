#include <rawmath/vec2.h>
#include <stdio.h>

int main(void)
{
    vec2_t v = vec2_create(1.1f, 2.2f);
    vec2_print(v, "vec2_print");
    printf("print_test passed!\n");
    return 0;
}
