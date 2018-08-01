#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/**
 * just key them by index, we could use a hashmap and have only prime factors,
 * but this is easy and works just swell for n = 20, ignoring the foreboding
 * titles involving primes soon to come...
 */
int factors[20];
int factor_frequency[20];

void prime_factors(unsigned long long n) 
{
    int d = 3;
    double max_factor = sqrt(n);
    int count = 0;
    int prime;
    while((n & 1) != 1) 
    {
        n = n >> 1;
        count++;
    }
    if (count > factor_frequency[1]) 
    {
        factor_frequency[1] = count;
    }
    count = 0;
    prime = 1;
    while (d <= max_factor + 1) 
    {
        if ((n % d) == 0) 
        {
            prime = 0;
            n = n / d;
            count++;
        }
        else 
        {
            if(count > factor_frequency[d-1])
            {
                factor_frequency[d-1] = count;
            }
            count = 0;
            d+=2;
        }
    }
    if(prime == 1)
    {
        if(1 > factor_frequency[n-1]) 
        {
            factor_frequency[n-1] = 1;

        }
    }
}


long long lcm(int* nums, int nums_length) 
{
    long long product = 1;
    for(int i = 0; i < nums_length; i++)
    {
        prime_factors(nums[i]);
    }
    for(int i = 0; i < nums_length; i++) 
    {
        if(factor_frequency[i] > 0)
        {
            product *= pow(factors[i], factor_frequency[i]);
        }
    }
    return product;
}

int main(int argc, char** argv)
{
    for(int i = 1; i <= 20; i++) 
    {
        factors[i-1] = i;
        factor_frequency[i-1] = 0;
    }
    printf("%llu\n", lcm(factors, 20));
}
