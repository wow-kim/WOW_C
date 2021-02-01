// 재귀 함수 이용
// 특정 문자열을 재귀함수로 반복 출력

#include <stdio.h>

void print(int count)
{
    if(count == 0)
    {
        return;
    }
    else
    {
        printf("print string.\n");
        print(count - 1); // 재귀가 발생하는 부분
    }
}

int main(void)
{
    int number;
    printf("how many? :");
    scanf("%d", &number);
    print(number);
    return 0;
}