// 학생 점수의 과목별 총합을 구해주는 프로그램입니다.
#include <stdio.h>

int main(void)
{
    int score[5][2]; //학생의 숫자, 수학점수&영어점수
    int total[2] = { 0, }; //1차원 배열을 할당할 때 모든 데이터에 0 값을 넣어주겠다는 의미입니다.
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d student : ", i + 1 );
        scanf("%d %d", &score[i][0], &score[i][1]);
    }
    
    for(i = 0; i < 5; i ++)
    {
        total[0] += score[i][0];
        total[1] += score[i][1];
    }

    printf("\n\n total math : %d\n", total[0]);
    printf("total english : %d\n", total[1]);
    return 0;
}
