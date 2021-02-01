#include <stdio.h>
#include <stdlib.h>

// 동적 메모리로 정수 5개를 처리하기
int main(void)
{
    int *pi, i;
    pi = (int *)malloc(5 * sizeof(int));
    if(pi == NULL)
    {
        printf("fail to allocte");
        exit(1);
    }
    pi[0] = 100;
    pi[1] = 200;
    pi[2] = 300;
    pi[3] = 400;
    pi[4] = 500;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(pi +i));
    }
    free(pi);
    return 0;
}
