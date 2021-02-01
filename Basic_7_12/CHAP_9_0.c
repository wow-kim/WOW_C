// 배열 : 데이터가 많을 때?
// 현실에서의 프로그램은 아주 많은 양의 데이터가 사용되는 것이 일반적
// 배열은 한없이 아주 많을수도 있고 그 데이터 개수가 변경될 수 있는 데이터들의 집합을 지정해줄 수 있음

// 다섯개의 정수 중 최소값과 최대값의 위치를 출력하는 프로그램
#include <stdio.h>
#include <limits.h>
#define NUMBER 5 // 일반적으로 배열의 크기를 지정해줄 때 이런식으로 많이 사용함

int main(void)
{
    int i, max, min, index;
    int array[NUMBER];
    max = 0; // max 초기화
    index = 0;
    // 배열을 만들어 주는 방법, 
    // array이라는 이름의 크기가 5인 배열을 선언 : array[0]부터 array[4]까지 데이터가 들어감.
    // 파이썬이랑 비슷하네
    
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i])
        {
            max = array[i];
            index = i;
        }
    }
    printf("max : %d, index : %d\n", min, index+1);
    min = INT_MAX; //가장 큰 수를 지정
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%d", &array[i]);
        if(min < array[i])
        {
            min = array[i];
            index = i;
        }
    }
    printf("min : %d, index : %d", max, index+1);
    return 0;
}