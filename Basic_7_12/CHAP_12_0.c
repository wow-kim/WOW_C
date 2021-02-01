// 문자열
// 문자열은 C언어에서 다양한 문자 표현을 나타내기 위해 사용합니다.
// 내부적으로 문자열은 char 자료 타입의 배열로 이루어져 있으며 이것은 포인터와 동일한 구조를 가집니다.
// char array[10];
// 영어 : 문자 1개에 1바이트(10글자가 올라갈 수 있습니다.), 한국어 : 2바이트(array[10]에 5글자만 들어갈 수 있습니다.)

// c 언어에서는 char는 ''로, string은 ""로 표현됩니다!

// 하나의 문자열 안의 글자수 세기
#include <stdio.h>

int main(void)
{
    char input[1001];
    gets(input); // input이라는 char 배열안에 사용자가 입력하는 문자열이 엔터를 칠때까지 들어감
    int count = 0;
    while(input[count] != '\0') // 배열 안의 남은 공간에는 모두 NULL값(\0)이 들어가게 됩니다.
    {
        count++;
    }
    printf("length : %d\n", count);
    printf("string : %s", input); // %s : string(문자열)
    return 0;
}