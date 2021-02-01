#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = "I Love You";
    char result[5] = "Love";
    strcpy(result, input); // 내부적으로 포인터를 다루는 함수, 글자가 차지하는 메모리가 더 작더라도 copy해 올 수 있습니다.
    printf("copy : %s\n", result);
    return 0;
}