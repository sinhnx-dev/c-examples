#include <stdio.h>
#include <string.h>

int main(int argCount, char **args)
{
    char hello[] = "hello";
    char clang[] = "C language";

    strncpy(hello, clang, strlen(hello));
    // strcpy(hello, clang);
    printf("hello = \"%s\"\n", hello);

    return 0;
}