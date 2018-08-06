#include <stdio.h>
#include <stdlib.h>

char grid[400];
char grid_string[1200];

unsigned long long greatest_product = 0;

int main(int argc, char** argv)
{
    FILE* fp = fopen("11/grid.txt", "r");
    fread(grid_string, sizeof(char), 1200, fp);
    printf("%s", grid_string);
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++) 
        {
            char grid_num = ((grid_string[(i*20+j)*3] - '0') * 10) + grid_string[(i*20+j)*3+1] - '0';
            grid[i*20+j] = grid_num;
            printf("%2d ", grid_num);
        }
        printf("\n");
    }
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            unsigned long long row_product, col_product, diag1_product,
                          diag2_product;
            // row
            if(i < 17)
            {
                row_product = grid[i*20+j] * grid[(i+1)*20+j] * 
                    grid[(i+2)*20+j] * grid[(i+3)*20+j];
            }
            // column
            if(j < 17)
            {
                col_product = grid[i*20+j+1] * grid[i*20+j+1] * 
                    grid[i*20+j+2] * grid[i*20+j+3];
            }
            // 
            if(i < 17 && j < 17) 
            {
                diag1_product = grid[i*20+j] * grid[(i+1)*20+j+1] * 
                    grid[(i+2)*20+j+2] * grid[(i+3)*20+j+3];
            }
            if(i < 17 && j < 17) 
            {
                diag2_product = grid[(i+3)*20+j] * grid[(i+2)*20+j+1] * 
                    grid[(i+1)*20+j+2] * grid[i*20+j+3];
            }
            if(row_product > greatest_product)
            {
                greatest_product = row_product;
            }
            if(col_product > greatest_product)
            {
                greatest_product = col_product;
            }
            if(diag1_product > greatest_product)
            {
                greatest_product = diag1_product;
            }
            if(diag2_product > greatest_product)
            {
                greatest_product = diag2_product;
            }
        }
    }
    printf("%llu\n", greatest_product);
    return EXIT_SUCCESS;
}
