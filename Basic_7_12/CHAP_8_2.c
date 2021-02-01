// 재귀 함수로 조합(nCr) 구현하기

#include <stdio.h>

int nCr(int n, int r)
{
    if(r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return nCr(n-1, r-1) + nCr(n-1, r);
    }
}

int main(void)
{
    int n,r;
    scanf("%d %d", &n, &r);
    printf("Combination : %d", nCr(n, r));
    return 0;
}