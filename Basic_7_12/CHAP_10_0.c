// 다차원 배열
// 배열이 배열의 원소로 들어가는 구조, 흔히 M X N 형태의 지도를 나타내고자 할 때 많이 사용됩니다.

// 구구단 이차원 배열을 출력하기
#include <stdio.h>

int main(void)
{
    int i, j;
    int gugudan[10][10];
    for(i = 1; i <= 9; i++) // 2중 for문과 이차원 배열은 아주 밀접한 관련이 있습니다.
    {
        printf("\n[ %ddan ]\n\n", i);
        for(j = 1; j <= 9; j++)
        {
            gugudan[i][j] = i*j;
            printf("%d X %d = %d\n", i, j , gugudan[i][j]);
        }
    }
    return 0;
}