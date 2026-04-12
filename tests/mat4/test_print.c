#include <rawmath/mat4.h>
#include <stdio.h>

int main(void)
{
    mat4_t m;
    mat4_identity(&m);
    mat4_print(&m);
    printf("print_test passed!\n");
    return 0;
}
