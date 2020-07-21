#include <stdio.h>

int main()
{
    int val = 0;
    int i;

    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            val += i;
            printf("3 = %d\n", i);
        }

        else if (i % 5 == 0)
        {
            val += i;
            printf("5 = %d\n", i);
        }

        else{}

    }

    printf ("value from 1 to 1000 is: %d", val);
}
