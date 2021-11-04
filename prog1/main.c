#include <stdio.h>
#include <stdlib.h>

int ret()
{
    return 8;
}

int main()
{
    int x;
    x = ret();
    printf("x = %d", x);
    return 0;
}
