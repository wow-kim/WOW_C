#include <stdio.h>

int main(void)
{
    char x = 'A'; // 캐릭터형은 내부적으로 숫자로 구성됨, 여기서 홀따옴표
    char y = 65; // "A"의 아스키 코드는 65
    printf("%c\n", x); // 여기선 쌍따옴표를 사용해아함
    printf("%c", y);
    
    int z = 100;
    printf("%o\n", z); // 8진수로 출력
    printf("%x\n", z); // 16진수로 출력

    return 0;
}