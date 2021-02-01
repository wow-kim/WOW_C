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

    printf("Enter a student number : ");
    scanf("%d", &s.number); //s라는 구조체 변수에 number라는 값을 입력받음
    printf("Enter a student name : "); 
    scanf("%s", s.name); // &을 해주지 않은 이유, 배열은 그 자체로 포인터의 의미를 가지고 있기 때문에 주소를 가리키는 &를 쓸 필요가 없음!
    printf("Enter a student grade : ");
    scanf("%lf", &s.grade); // %lf : double 자료형을 입력받을 때는 lf로, float 자료형은 그냥 f

    printf("num : %d\n", s.number);
    printf("name : %s\n", s.name);
    printf("grade : %.lf\n", s.grade);
    return 0;
}