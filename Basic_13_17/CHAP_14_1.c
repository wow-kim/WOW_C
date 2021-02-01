// 구조체의 비교
#include <stdio.h>

struct point{
    int x;
    int y;
};

void comparePoint (struct point p1, struct point p2){ // 더 체계적인 구조
    if((p1.x == p2.x) && (p1.y == p2.y))
    {
        printf("p1 == p2");
    }
}

int main(void)
{
    struct point p1;
    struct point p2;

    p1.x = 30;
    p1.y = 10;

    p2.x = 30;
    p2.y = 10;

    // if(p1 == p2) 구조체의 직접적인 비교는 불가함
    // {
    //     printf("p1 == p2") 
    // }

    comparePoint(p1, p2);

    return 0;
}

