// 포인터
// c언어의 가장 큰 특징이자 장점!!!, 특정 데이터가 저장된 메모리(RAM)의 주소를 저장하는 변수입니다!!
// 다른 곳의 주소 그 자체를 가리키기 떄문에 이를 응용하여 다양한 연산을 수행할 수 있습니다.
// 프로그램의 어떠한 위치에서 시행되더라도 특정한 주소를 그대로 이용하기 때문에 값이 즉시 변경된다는 특징을 가지고 있습니다.
// 다른 변수가 공간 그 자체에 접근해서 여러 가지 처리를 할 수 있어서 매우 유용함

// NULL POINTER? : 가리키는 곳이 없는 포인터
// & : 특정한 변수의 주소를 나타냄

// int x = 70;
// int *y = &x; : x의 주소를 나타내는 변수 y

// 두 개의 차이를 잘 이해해보자!
// y => 00AA00BB(메모리 주소 값)
// *y => 70

// x == *y : True
// &x == y : True

#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 변수
// 포인터를 이용하지 않고 값을 바꿀 경우, 함수 내에서만 처리가 되기 때문에 값이 제대로 바뀌지 않습니다.
// 대표적인 포인터를 이용한 함수 예제, 정말 많이 사용합니다.
// 포인터를 이용하면 프로그램 전역에서 변수가 가지는 값을 변경할 수 있습니다.
void swap(int *x, int *y) // int 형의 어떤 값을 갖는 포인터 x, y를 만든것입니다.
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf(" x = %d, y = %d\n", x, y);
    return 0;
}