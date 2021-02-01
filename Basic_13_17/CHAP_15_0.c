// 파일 입출력
// 데이터를 저장하거나 불러오거나 할 수 있습니다.
// 프로그램 전반에 사용되는 다양한 데이터를 처리하고 저장하여 보관할 수 있다는 점에서 유용합니다.
// create, open, read, rename, delete, close, wirte 등등

#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("output.txt", "w"); // w -> 쓰기 모드(write), r -> 읽기 모드(read)
    if(fp == NULL)
    {
        printf("Fail to open file\n");
    }
    else
    {
        printf("Succeed\n");
    }
    fputc('H', fp); // 파일에 한글자 한글자씩 출력하는 방법
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    fclose(fp);
    return 0;
}