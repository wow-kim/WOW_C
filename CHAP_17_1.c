// 동적 메모리를 이용해 2차원 배열을 다룹니다.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, x, y;
    int** pptr = (int **)malloc(sizeof(int*) * 8); 
    // int가 들어갈 수 있는 포인터 공간 X 8만큼 할당
    // 인트 8개의 공간의 배열 생성, 각 배열의 하나하나가 어떠한 배열을 가르키는 포인터 변수가 된 것입니다. 
    for(i = 0; i < 8; i++)
    {
        *(pptr + i) = (int *)malloc(sizeof(int)*6);
    }
    // 각 배열의 하나하나가 6개의 int형 공간을 차지하는 배열을 포인팅합니다.
    // 총 48개의 int형 2차원 배열 공간을 만들어준것입니다.
    // 6개의 공간에 들어갈 수 있는 배열을 8개만큼 할당해주었기 때문!

    for(y = 0; y < 8; y++) // 모든 배열 값 초기화
    {
        for(x = 0; x < 6; x++)
        {
            *(*(pptr + y) + x) = 6*y + x;  
        }
    } 

    for(y = 0; y < 8; y++) // 모든 배열의 배열이 갖는 값 print
    {
        for(x = 0; x < 6; x++)
        {
            printf("%3d", *(*(pptr + y) + x ));
        }
    }

    for(y = 0; y < 8; y++) // 모든 동적 배열 해제
    {
        free(*(pptr + y));
    }

    return 0;
}