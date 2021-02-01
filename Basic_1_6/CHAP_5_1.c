#include <stdio.h>
#define N 10

int main(void)
{
    int i = 1, sum = 0;
    while(i <= 1000)
    {
        sum = sum + i;
        i++;
    }
    printf("sum = %d\n", sum);

    int a, b;
    for (a = 0; a < N; a++)
    {   
        for (b = N - a - 1; b > 0; b--)
        {
            printf("  ");
        }
        for (b = 0; b < a; b++)
        {
            printf("* ");
        }
        for (b = 0; b < a-1; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}