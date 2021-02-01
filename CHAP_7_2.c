#include <stdio.h>

// 1?›” 1?¼ë¶??„° ?˜„?¬ ?‚ ì§œê¹Œì§??˜ ?‚ ì§? ì°¨ì´ êµ¬í•˜ê¸?
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
    printf("1¿ù1ÀÏºÎÅÍÀÇ Â÷ÀÌ´Â? : %d", getDays(month, day));
    return 0;
}