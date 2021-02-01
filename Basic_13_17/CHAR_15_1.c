// 텍스트 파일 읽기

#include <stdio.h>

int main(void)
{
    FILE *fp = NULL; //FILE 객체
    int c;

    fp = fopen("input.txt", "r"); // input 파일이 존재해야 가능함

    if(fp == NULL)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Success\n");
    }

    while((c = fgetc(fp)) != EOF) // fgetc 파일에서 char 하나를 읽습니다. , EOF = End Of FIle, file이 끝날때까지 while문 반복
    {
        putchar(c);
    }

    fclose(fp);
    return 0;
}