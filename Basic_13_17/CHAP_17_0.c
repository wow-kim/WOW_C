// 동적 메모리의 활용

// 동적 메모리를 이용해 구조체를 다루어봅니다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int number;
    char title[100];
};

void showBook(struct Book *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("num %d : %s\n", (p + i)->number, (p + i)->title);
    }
}

int main(void)
{
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));
    if(p == NULL);
    {
        printf("Fail to Allocate\n");
        exit(1);
    }

    // 구조체 포인터는 화살표 -> 를 사용해 접근할 수 있습니다.
    p->number = 1;
    strcpy(p->title, "C Programming");

    (p + 1)->number = 2;
    strcpy((p + 1)->title, "Data Structure");

    showBook(p, 2);
    free(p);
    return 0;
}