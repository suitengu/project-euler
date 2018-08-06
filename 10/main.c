#include <stdio.h>

#define LIMIT 2000000
char primes[LIMIT];

int main(int argc, char** argv)
{
    unsigned long long sum = 0;
    primes[0] = 0;
    primes[1] = 0;
    for(unsigned long long i = 2; i < LIMIT; i++)
    {
        primes[i] = 1;
    }
    for(unsigned long long i = 2; i < LIMIT; i++) 
    {
        if (primes[i] == 1)
        {
            sum += i;
            for(unsigned long long j = i; (i * j) < LIMIT; j++)
            {
                primes[i*j] = 0;
            }
        }
    }
    printf("%llu\n", sum);
}
