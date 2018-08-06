#include <stdio.h>
#include <math.h>
/*
   to constrain the problem:
   1 + 2 + 997 = 1000
 */

unsigned int squares[997];

int main(int argc, char** argv)
{
    for(int a = 1; a < 999; a++)
    {
        for(int b = a; b < 999; b++)
        {
            int c = 1000 - (a+b);
            if (c > b)
            {
                if(pow(a, 2) + pow(b, 2) == pow(c, 2))
                {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
