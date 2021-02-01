#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p;
    p = &i; // 포인터p가 가리키는 값이 i
    printf("i = %d\n", i);
    *p = 20; // 포인터 p가 가리키는 주소의 값을 20으로 바꿈(i -> 20)
    printf("i = %d\n", i);
    return 0;
}