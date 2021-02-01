// 0이 아닌 모든 수는 참값 입니다.
// 모든 조건문, 반복문에서는 알아보기 쉽게 괄호를 꼭 써주자

//무한루프
int main(void)
{
    int a = 1;
    while(1) //or for(;;)
    {
        if(a == 1)
            break;
    }
    return 0;
}