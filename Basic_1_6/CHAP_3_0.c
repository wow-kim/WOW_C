// 자료형
// 그때 그때 달라질 수 있음
// char(문자), int(정수), flaot(실수, 4바이트), double(실수, 8바이트), void(자료형 자체가 없음)
// C언어에는 문자열을 저장하는 string이라는 자료형이 없음 -> char만을 연속적으로 이용해야함

#include <stdio.h>
#define MONTHS 12 // #define : 상수에 대한 정의

int main(void)
{   
    double monthSalary = 1000.5;
    printf("$ %.2f", monthSalary * MONTHS);
    return 0;
}