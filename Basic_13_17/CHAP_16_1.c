#include <stdio.h>
#include <stdlib.h>

// 동적 메모리로 알파벳 출력하기
// 동적 메모리를 이용한 배열 관리

int main(void)
{
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100 * sizeof(char)); // char 100개가 들어갈 수 있는(문자열을 위한) 메모리를 할당, 배열과 거의 동일합니다.
    // pc에는 100개의 메모리를 할당한 첫번째 char 주소 값이 들어가있습니다. -> *pc = pc[0]

    if(pc == NULL)
    {
        printf("Fail to Allocation\n");
        exit(1);
    }
    // pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입합니다. !!
    for(i = 0; i < 26; i++)
    {
        *(pc + i) = 'a' + i;
    // *(pc + i) = pc[i]
    }
    *(pc + i) = 0; // 'z' 바로 다음에 해당하는 문자에는 아스키 코드 0 에 해당하는 문자 NULL을 넣어줍니다.
    // 문자열을 읽어나가다가 NULL을 만나면 문자열의 종료를 의미합니다!!!!
    // 완벽한 하나의 문자열을 만들게 된것입니다!
    
    printf("%s\n", pc); // %s로 해주면 NULL값을 만날때까지 배열 pc의 앞에서부터 읽어나갑니다.
    free(pc); // 메모리 할당 해제

    return 0;
}