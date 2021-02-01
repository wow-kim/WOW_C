#include <stdio.h>
#include <math.h> // pow(), abs() 등

int main(void)
{
    int x = 50, y = 30;
    printf("x = y ? : %d\n", x == y);
    printf("input y to x -> %d\n", x = y); // 1. 30(y) 이라는 값이 x에 들어가고 2. x가 출력됨

    printf("TRUE? %d\n", (x > y) && (y < 40)); // AND
    printf("TRUE? %d\n", (x > y) || (y == 30)); // OR

    // 조건연산자
    int absoluteX = (x > 0) ? x: -x; // (x>0) == TRUE라면 x를, 아니라면 -x를 출력
    int max = (x > y) ? x: y;
    int min = (x < y) ? x: y;
    printf("%d, %d, %d\n", absoluteX, max, min);

    // 거듭제곱 연산 : pow()
    double z = pow(2.0, 20.0);
    printf("%.0f\n", z);

    return 0;


}