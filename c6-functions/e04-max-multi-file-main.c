#include <stdio.h>
#include <stdio.h>
#include "e05-max-multi-file.c"

int main()
{

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;

   /* calling a function to get max value */
   ret = max(a, b);

   printf("Max value is : %d\n", ret);

   return 0;
}