#include <stdio.h>

// 1?�� 1?���??�� ?��?�� ?��짜까�??�� ?���? 차이 구하�?
int getDays(int month, int day)
{
    int i , sum = 0;
    for(i=1; i<month; i++)
    {
        if(i==2)
        {
            sum += 28;
        }
        else if(i % 2 == 0)
        {
            sum += 30;
        }
        else
        {
            sum += 31;
        }
    }
    return sum + day;
}

int main(void)
{
    int month, day;
    scanf("%d %d", &month, &day);
    printf("1��1�Ϻ����� ���̴�? : %d", getDays(month, day));
    return 0;
}