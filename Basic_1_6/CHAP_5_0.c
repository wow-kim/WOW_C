#include <stdio.h>

int main(void)
{
    int score = 85;
    if (score >= 90)
    {
        printf("A");
    }
    else if(score >= 80)
    {
        printf("B");
    }
    else
    {
        printf("F");
    }
    return 0;
}