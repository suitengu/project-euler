#include <stdio.h>
#include <math.h>

int count_digits(int n, int base) 
{
    int digits = 0;
    while(n > 0) 
    {
        n /= base;
        digits++;
    }
    return digits;
}


int is_palindrome(int n)
{
    int digits = count_digits(n, 10);
    int i = 0;
    while(i < digits / 2 + 1)
    {
        int d = pow(10, digits-i-1) + pow(10, i);
        if(digits % 2 != 0 )
        {
            if (digits-i-1 == i) {
                d -= pow(10, i);
            }
        }
        if ((n % d) == 0)
        {
            return 1;
        }
        n = n % d;
        i++;
    }
    return 0;
}

int main(int argc, char** argv) 
{
    printf("%d\n", count_digits(9999, 10));
    int max_palindrome = 0;
    for(int i = 990; i >= 110; i-= 11) 
    {
        for(int j = i; j >= 100; j--)
        {
            if(is_palindrome(i * j))
            {
                if ((i * j) > max_palindrome)
                {
                    printf("%d\n", i * j);
                    max_palindrome = i * j;
                }
            }
        }
    }

}
