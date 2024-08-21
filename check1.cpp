#include <stdio.h>
int main()
{
    char *str="WORLD";
    while(*++str)
    {
        printf("%c",*str);
    }
    return 0;
}

