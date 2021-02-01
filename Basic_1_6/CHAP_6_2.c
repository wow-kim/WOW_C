# include <stdio.h>

// 정해진 개수의 정수를 더하는 프로그램
int main(void)
{
    int number, x, i, sum = 0;
    printf("Please enter number of integer\n");
    scanf("%d", &number);
    for (i = 0; i < number; i++)
    {
        printf("Please enter value of integer\n");
        scanf("%d", &x);
        sum += x;
    }
    printf("sum = %d", sum);
    return 0;
}