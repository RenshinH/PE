#include <stdio.h>

int main()
{
    int i;
    int a = 0;
    int b = 1;
    int c = 0;

    for (; b < 4000000; a += b)
    {
        b = a+b;

        if (b % 2 == 0) c += b;
        else if (a % 2 == 0) c += a;

        printf ("c = %d\n", c);
    }
}
