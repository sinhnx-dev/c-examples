#include <stdio.h>

int main(int countArgs, char **args)
{
    int i = 7;
    int *p;

    // assign pointer p to i variable
    p = &i;

    printf("i = %d, &i= %X, p = %X\n", i, &i, p);
    printf("i = %d, *p = %d\n", i, *p);

    *p = 9;
    printf("i = %d, *p = %d\n", i, *p);

    return 0;
}