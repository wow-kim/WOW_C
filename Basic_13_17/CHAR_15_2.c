#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char fname[256];
    char buffer[256];
    char word[256];
    int line = 0;

    printf("File Name :");
    scanf("%s", fname);

    printf("Word :");
    scanf("%s", word);

    if((fp = fopen(fname, "r")) == NULL) //표준적인 c언어 코드 작성 
    {
        fprintf(stderr, "Can't Open file %s", fname); // file 관련한 에러를 띄워줍니다.(stderr)
        return 0;
    }

    while(fgets(buffer, 256, fp)) //256의 길이만큼 파일에서 읽어서 buffer에 담습니다.
    {
        line++;
        if(strstr(buffer, word)) // 탐색할 단어 word가 buffer에 담겨 있다면
        {
            printf("Line %d : word %s found\n", line, word);
        }
    }
    
    fclose(fp);
    return 0;

}