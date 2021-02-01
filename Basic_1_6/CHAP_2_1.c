#include <stdio.h>

int main(void)
{
    int x = 50;
    float y = 123456789.123456789; // flaot형은 4바이트만 자리를 차지하기 때문에 4바이트에 해당하는 범위까지 밖에 출력하지 못함. 123456792.00
    double z = 123456789.123456789; // double형은 8바이트의 자리를 차지함, 좀 더 많이 출력 가능 
    printf("x = %d\n", x);
    printf("y = %.2f\n", y); 
    printf("z = %.2f\n", z);
    return 0;
}