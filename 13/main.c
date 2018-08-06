#include <stdio.h>

char sum[55];

// TODO: am I missing some fancy number theory stuff here? I just add them all,
// digit-by-digit, with carry, what a pain...

int main(int argc, char** argv)
{
    FILE* fp = fopen("13/numbers.txt", "r");
    char buffer[53];
    int i = 0;
    int j = 0;
    for(i = 0; i < 55; i++)
    {
        sum[i] = 0;
    }
    while(fgets(buffer, 52, fp) != NULL)
    {
        // add the digits
        for(j = 0; j < 54; j++)
        {
            int temp = 0;
            temp = sum[j];
            if(j < 50) 
            {
                printf("%d", buffer[49-j] - '0');
                temp += (buffer[49-j] - '0');
            }
            if(temp >= 10) 
            {
                sum[j+1] += 1;
                sum[j]= temp - 10;
            }
            else {
                sum[j] = temp;
            }
        }
        printf("\n");
        i++;
    }
    for(int i = 51; i >= 0; i--)
    {
        if(sum[i] > 10)
        {
            printf("ERROR!");
        }
        printf("%d", sum[i]);
    }
    printf("\n");
    return 0;
}
