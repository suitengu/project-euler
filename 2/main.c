#include <stdio.h>

unsigned int even_fib(unsigned int limit) 
{
    printf("************************\n");
    printf("num\tsum\n");
    unsigned int a = 0;
    unsigned int b = 2;
    unsigned int temp;
    unsigned int sum = a;
    while (b < limit)
    {
        sum += b;
        printf("%d\t%d\n", b, sum);
        temp = a;
        a = b;
        b = 4*b + temp;
    }
    printf("************************\n");
    return sum;
}

int main(int argc, char** argv)
{
    printf("%d\n", even_fib(4000000));
}
