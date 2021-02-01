// 모든 언어의 근간이 되는 C
// C 언어에서 사용자 정의 함수, 배열, 문자열 및 포인터를 잘 구현할 수 있느냐가 고급 개발자의 기준
// 포인터는 C언어의 특징이나 기본적인 자료 형태
// 특정한 데이터가 저장되어 있는 메모리의 주소 그 자체를 저장하는 변수로서 반드시 알아야합니다
// 메모리 주소에 직접 접근할 수 있다는 점에서 C언어가 강력한 언어이며 운영체제및 다양한 언어들의 기본이 됩니다.

// 사용자 정의함수
// 정해진 특정한 기능을 수행하는 모듈을 의미
// 함수를 적절히 활용하여 하나의 문제를 잘게 분해 할 수 있고 각각의 모듈로써 쉽게 수정되고 보완될 수 있다는 장점이 있습니다.
// 예를 들어, 이진 탐색 트리는 삽입, 삭제, 순회 등 다양한 함수의 집합으로 구성됩니다.

#include <stdio.h>

// 시간 더하기 프로그램

// 전역 변수, 프로그램 어디서든 접근 가능한 변수

int hour;
int minute;
int minuteAdd;

void Counter() // 1. 반환형 : void(반환을 하지 않음), 2. 이름 : Counter, 3. () 괄호 안에는 매개 변수
{
    minute += minuteAdd;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
    // 전역 변수를 사용하기 때문에 반활할 필요 없음(void)
}

int main(void)
{
    printf("hour :");
    scanf("%d", &hour);
    printf("minute :");
    scanf("%d", &minute);
    printf("minuteAdd :");
    scanf("%d", &minuteAdd);
    Counter();
    printf("It is %d : %d\n", hour, minute);
    return 0;
}