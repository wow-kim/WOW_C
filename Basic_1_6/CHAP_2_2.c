// Overflow : 한계를 넘어서 값이 초과되는 것

#include <stdio.h>
#include <limits.h> 
// INT_MAX를 사용하기 위한 라이브러리, 각각의 변수들, 자료형의 한계값, 범위들을 포함하고 있는 라이브러리

int main(void)
{
    int x = INT_MAX; // int형이 가질수 있는 최대값
    printf("int형의 최대값 x는 %d입니다.\n", x);
    printf("x+1은 %d입니다.\n", x+1); // x+1은 -2147483648입니다.가 출력됨, 오버플로우가 일어나 오히려 한바퀴를 건너 뛰어서 최소값으로 돌아가버림
    return 0;
}