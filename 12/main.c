#include <math.h>
#include <stdio.h>

// TODO: speed me up!
int main(int argc, char** argv)
{
    unsigned long long i = 1;
    unsigned long long index = 1;
    unsigned long long first_num = 0;
    int count = 0;
    while(first_num == 0)
    {
        count = 2;
        for(unsigned long long j = 2; j < sqrt(i); j++) 
        {
            if ((i % j) == 0) { count+=2; }
            if(count >= 500) 
            {
                printf("%llu\n", i);
                return 0;
            }
        }
        // since we went the onerous & bloody route of trial divisions,
        // let's limit checks to only triangular numbers
        index++;
        i+=index;
    }
}
