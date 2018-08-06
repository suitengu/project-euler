#include <math.h>
#include <stdio.h>

#define MAX_SIZE 1000001
int prime_numbers[MAX_SIZE];
int primes_found = 2;

void check_prime(int n)
{
    double max_factor = sqrt(n);
    int d;
    for(int i = 2; i < primes_found && prime_numbers[i] <= max_factor + 1; i++)
    {
        d = prime_numbers[i];
        if ((n % d) == 0) 
        {
            return;
        }
    }
    prime_numbers[primes_found] = n;
    primes_found++;
}

void gen_primes(int n) 
{
    prime_numbers[0] = 2;
    prime_numbers[1] = 3;
    for(int i = 5; primes_found < n; i+=6)
    {
        // i
        check_prime(i);
        // i + 2
        check_prime(i+2);
        // this is unrolled to skip multiples of 3
    }
    return;
}

int main(int argc, char** argv)
{
    gen_primes(1000001);
    printf("***%d***\n", prime_numbers[1000000]);
}
