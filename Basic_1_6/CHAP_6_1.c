// 기본 입출력 : 사용자와 컴퓨터와의 상호작용, Input, Output

#include <stdio.h>

int main(void)
{
    char o;
    int x,y;
    while(1) // 무한루프
    {
        printf("Please enter a formula.");
        scanf("%d %c %d", &x, &o, &y);
        if (o == '+')
        {
            printf("%d %c %d = %d\n", x, o, y, x+y);
        }
        else if (o == '-')
        {
            printf("%d %c %d = %d\n", x, o, y, x-y);
        }
        else if (o == '*')
        {
            printf("%d %c %d = %d\n", x, o, y, x*y);
        }
        else if (o == '/')
        {
            printf("%d %c %d = %d\n", x, o, y, x/y);
        }
        else if (o == '%')
        {
            printf("%d %c %d = %d\n", x, o, y, x%y);
        }
        else
        {
            printf("wrong input\n");
        }
        getchar(); //buffer를 처리해줄 필요, 단 한개의 문자를 입력 받겠다. 줄바꿈(Enter)를 효율적으로 처리
        printf("Quit? (y/n)\n");
        scanf("%c", &o);
        if (o == 'n' || o == 'N')
        {
            continue;
        }
        else if (o == 'y' || o == 'Y')
        {
            break;
        }
        else
        {
            printf("wrong input\n");
        }
    }
    return 0;
}