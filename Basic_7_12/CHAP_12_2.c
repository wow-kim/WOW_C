#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputOne[5] = "";
    char inputTwo[5] = "";
    printf("comparison : %d\n", strcmp(inputOne, inputTwo)); 
    // strcmp
    // 사전적으로 문자열을 비교해 뭐가 더 앞에 오는 지 확인
    // 동일하면 0, 왼쪽이 앞에 있으면 -1, 오른쪽에 앞에 온다면 1을 반환
    return 0;   
}