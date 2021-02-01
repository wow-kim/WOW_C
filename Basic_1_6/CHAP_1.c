#include <stdio.h> 
// <stdio.h>같은 라이브러리를 추가하는 부분
// Standard Input/Output library (표준입출력 라이브러리) -> ex) printf

// 반환형 : int, main 함수를 실행하고 종료할때 int를 반환할 것
// void : 매개변수, 특정 함수를 실행할 때 그 함수가 실행할 어떠한 값들을 받아오는것
// main 함수는 거의 int main(void) -> return 0 으로 하자는 약속이 존재함
// main : 무조건 제일 먼저 코드가 실행되는 함수

int main(void) 
{
    printf("Hellp World!!");
    return 0; 
    // 하나의 함수가 종료될때 반환값을 지정,
    // 우리가 만든 main 함수는 반환형이 int이기 때문에 0 으로 지정
    // 0이라는 값을 반환하며 프로그램을 종료하게됨
}

// 컴파일러
// 고급언어로 쓰인 프로그램을 컴퓨터에서 실행될 수 있는 형태의 목적 프로그램으로 바꾸어 주는 번역 프로그램
