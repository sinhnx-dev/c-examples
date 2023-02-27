#include <stdio.h>
#include <string.h>

void getString(char *str, int length);

int main(int countArgs, char **args)
{
    char str[51];
    printf("input a string: ");
    getString(str, 51);
    printf("string: \"%s\"\n", str);
    return 0;
}

void getString(char *str, int length)
{
    // clear keyboard buffer on UNIX
    fseek(stdin, 0, SEEK_END);
    // clear keyboard buffer on Windows
    fflush(stdin);
    // input string
    fgets(str, length, stdin);
    str[strlen(str) - 1] = '\0';
    // clear keyboard buffer on UNIX
    fseek(stdin, 0, SEEK_END);
    // clear keyboard buffer on Windows
    fflush(stdin);
}