#include <stdio.h>

// 특정 단에 대한 구구단 출력하는 프로그램
int main(void)
{
    int x, i;
    printf("Enter int : ");
    scanf("%d", &x);
    for (i = 1; i <= 9; i++)
    {
        printf("%d X %d = %d\n", x, i, x*i);
    }
    return 0;
}