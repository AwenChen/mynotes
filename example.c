#include <stdio.h>

#define MY_PRINT_C99(...)           printf(__VA_ARGS__)
#define MY_PRINT_GCC_EXT(args...)   printf(args)

#define VAR_TO_STRING(x)            #x
#define VAR_JOINT(x, y)             x##y

int main()
{
    int xy = 100;
    MY_PRINT_C99("my print in C99\n");
    MY_PRINT_GCC_EXT("my print in gcc extension\n");
    MY_PRINT_C99("%d\n", VAR_JOINT(x, y));
    MY_PRINT_GCC_EXT("%s\n", VAR_TO_STRING(helloworld));
    return 0;
}