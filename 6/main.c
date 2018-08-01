#include <stdio.h>
#include <math.h>

unsigned long long sum_series(unsigned long long n)
{
    return n * (n + 1) / 2;
}

unsigned long long sum_squares_series(unsigned long long n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main(int argc, char** argv)
{
    unsigned long long sum_of_squares = sum_squares_series(100);
    unsigned long long square_of_sums = pow(sum_series(100), 2);
    printf("%llu \t %llu\n", sum_of_squares, square_of_sums);
    printf("%llu\n",  square_of_sums - sum_of_squares);
}
