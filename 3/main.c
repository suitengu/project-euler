#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime_factors(unsigned long long n) 
{
    unsigned long long d = 3;
    double max_factor = sqrt(n);
    while((n & 1) != 1) 
    {
        printf("2\n");
        n = n >> 1;
    }
    while (d < max_factor) 
    {
        if (n % d == 0) 
        {
            printf("%llu\n", d);
            n = n / d;
        }
        else 
        {
            d+=2;
        }
    }
    if(n != 1) 
    {
        printf("%llu\n", n);
    }
    return n;
}

int main(int argc, char** argv) 
{
    long long n = strtoll(argv[1], 0, 10);
    prime_factors(n);
}
