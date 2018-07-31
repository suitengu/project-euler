#include "common/gcd.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Find the multiples of 3 and 5 below n (n = 1000)
 */

/**
 * Use the arithmetic series sum formula to calculate the sum in constant time
 */
int sum_series(int c, int n) 
{
    n = n / c;
    return c * n * (n + 1) / 2;
    
}

int main(int argc, char** argv) 
{
    int gcd_3_5 = gcd(3, 5);
    int sum_3 = sum_series(3, 999);
    int sum_5 = sum_series(5, 999);
    int sum_lcm = sum_series(3*5/gcd_3_5, 999);
    printf("%d\n", sum_3 + sum_5 - sum_lcm);
    return EXIT_SUCCESS;
}
