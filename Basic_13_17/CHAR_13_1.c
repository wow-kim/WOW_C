// 구조체(Struct)
// 객체 지향 프로그래밍에서의 클래스(Class)와 흡사한 개념
// 여러 개의 자료형을 묶어서 새로운 자료형을 만들 수 있는 방법
// 여러 개의 데이터를 하나로 묶어서 사용할 수 있도록 하기 위해 만들어진 문법
// 배열이 여러 개의 같은 자료형을 하나로 묶는 것이었다면
// 구조체는 서로 다른 자료형을 묶어서 한꺼번에 다루는 것입니다!!
// 설계의 측면에서 의미가 있습니다.

// 학생 정보 구조체, 하드 코딩
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // standard library

struct student{
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s; //s라는 이름의 student 구조체
    s.number = 20150001;
    strcpy(s.name, "Jim"); // 안정적인 문자열 삽입
    s.grade = 4.5;
    printf("num : %d\n", s.number);
    printf("name : %s\n", s.name);
    printf("grade : %.lf\n", s.grade);
    return 0;
}