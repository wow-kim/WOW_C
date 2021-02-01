// 5개의 정수 중에서 짝수 최대값과 홀수 최대값을 구하는 프로그램
#include <stdio.h>
#define NUMBER 5

int main(void)
{
    int array[NUMBER];
    int i, oddMax, evenMax;
    oddMax = 0;
    evenMax = 0;
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0)
        {
            if(evenMax < array[i])
            {
                evenMax = array[i];
            }
        }
        else
        {
            if(oddMax < array[i])
            {
                oddMax = array[i];
            }
        }
    }
    printf("%d %d", oddMax, evenMax);
    return 0;
}