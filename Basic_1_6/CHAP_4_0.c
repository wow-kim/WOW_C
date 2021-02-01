// 연산자 (+피연산자)
// +, -, *, /(Division), %(Modular Division), ++(1을 더한다), !(not)

#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
    int input = 1000;
    int minute = input / SECOND_PER_MINUTE;
    int second = input / SECOND_PER_MINUTE;
    printf("%d, %d, %d\n", input, minute, second);

    int x = 0;
    x++; // 증감연산자
    printf("now x : %d", x);
    printf("now x : %d", x--); // 증감연산자, x를 출력하고 나서 x에 1을 빼줍니다.
    printf("now x : %d", --x); // x를 빼고나서 x를 출력해줍니다. 순서 중요

    int y = 100;
    y += 50; // x = x + 50 
    printf("y : %d", y)

    return 0;
}

