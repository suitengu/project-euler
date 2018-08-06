#include <stdlib.h>
#include <stdio.h>

char digits[1001];

int main(int argc, char** argv)
{
    unsigned long long product = 1; 
    unsigned long long greatest_product = 0;
    int digits_to_clean = 0;
    int dirty = 0;
    FILE* fp = fopen("8/number.txt", "r");
    fread(digits, 1, 1000, fp);
    for(int i = 0; i < 13; i++) 
    {
        product *= digits[i] - '0';
    }
    for(int i = 0; i < 1000 - 13; i++) 
    {
        // pull in the new term
        if(digits[i+13] == '0') 
        {
            dirty = 1;
            digits_to_clean = 13;
        }
        else if (dirty == 1)
        {
            if(digits_to_clean == 0)
            {
                product = 1;
                for(int j = 1; j <= 13; j++)
                {
                    product *= (digits[i+j] - '0');
                }
                dirty = 0;
            }
            digits_to_clean--;
        }
        else
        {
            product *= digits[i+13] - '0';
            product /= digits[i] - '0';
        }
        // divide out the last term
        if(product > greatest_product)
        {
            greatest_product = product;
        }
    }
    printf("***%llu***\n", greatest_product);
}
