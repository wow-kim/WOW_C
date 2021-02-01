// 구조체의 활용 -> 데이터의 모델링, 관리가 더 쉬움, DB 접근 등
// 프로그램이 커질수록 구조체의 활용은 불가피합니다!

// 사각형의 넓이와 둘레를 구하는 프로그램
#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point p1;
    struct point p2;
};

int main(void)
{
    struct rect r;
    int w, h, area, peri;

    printf("left up : ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("right down : ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = abs(r.p2.x - r.p1.x);
    h = abs(r.p2.y - r.p1.y);

    area = w*h;
    peri = 2*w + 2*h;

    printf("area : %d, peri : %d", area, peri);
    return 0;
}