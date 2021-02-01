// 다양한 자료구조나 프로젝트를 진행하면서 사용되는 방법 중 하나
// 구조체의 배열
// 실제로 다양한 데이터를 구조체의 배열로 관리하는 경우가 일반적입니다.
// 이러한 코드 구현 방법은 아주 널리 사용됩니다!

#include <stdio.h>
#define SIZE 5

struct student{
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student list[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number :");
        scanf("%d", &list[i].number);
        printf("Enter name :");
        scanf("%s", &list[i].name);
        printf("Enter grade :");
        scanf("%lf", &list[i].grade);
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("num : %d, name : %s, grade : %lf\n", list[i].number, list[i].name, list[i].grade);
    }

    return 0;
}