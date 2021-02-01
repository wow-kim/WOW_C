// 동적 메모리(Dynamic Memory Allocation)
// 동적 메모리 할당이란 프로그램이 실행 도중에 동적으로 메모리를 할당 받는 것을 말합니다.
// 프로그램에서는 필요한 만큼 메모리를 시스템으로부터 할당을 받아서 사용하고, 사용이 끝나면 시스템에 메모리를 반납합니다.
// 필요한 만큼만 할당을 받고 또 필요한 때에 사용하고 반납해 메모리를 효율적으로 사용할 수 있습니다.
// 동적 메모리는 malloc() 계열의 라이브러리 함수를 사용하여 할당 받아 사용할 수 있습니다.

// 마치 수납 공간에서 물건을 꺼내는 것과 비슷합니다.
// 물건이 사용이 끝나면 다시 수납 공간에 물건을 놓아야 합니다.
// 만약에 물건을 제대로 반납하지 않으면 다른 사람이 해당 물건을 사용할 수 없기 때문입니다.
// 동적 메모리의 사용이 끝나면 반드시 해당 메모리 영역을 명시적으로 반납을 해주어야 합니다.

#include <stdio.h>
#include <stdlib.h> // 동적 메모리를 사용하기 위해 필수적!

int main(void)
{
    int *pi; // 흔히 이런식으로 포인터 변수를 만들어줍니다(Pointer Integer)
    pi = (int *)malloc(sizeof(int)); 
    //malloc : 메모리를 할당하여라, sizeof(int) : (int형의 크키만큼), (int는 4바이트를 차지하기 때문에 4를 넣어도 노상관)
    // (int *) : 메모리를 할당한 다음 그 부분의 주소를 가리키도록 합니다. pi가 해당 위치를 기억하도록 합니다.
    // (int *) : 형변화, int형으로 자료형을 바꿔줍니다. 
    // 아주 널리 쓰이는 형식입니다. 기억하세요!!

    if (pi == NULL) // 동적 메모리 할당에 실패했다면
    {
        printf("Fail to allocation");
        exit(1); // 실행하고 있는 프로그램을 종료
    }

    *pi = 100;
    printf("%d\n", *pi);
    // 동적 메모리를 사용한 이후에는 무조건 해당 메모리를 반환합니다.
    free(pi); // pi 포인터 변수가 가리키고 있는 메모리 주소에 메모리 할당을 해제해준다는 의미입니다.

    return 0;
}

// malloc 함수
//  - 동적으로 메모리를 할당하는 함수 (힙 영역에 메모리를 할당)

// #include <stdlib.h>
// void* malloc(size_t size)	// malloc 함수의 원형

// 함수 호출시 할당하고자 하는 메모리의 크기를 바이트 단위로 전달하면 그 크기만큼 메모리를 할당하게 된다.
// 그리고 할당한 메모리의 주소(첫 번째 바이트의 주소)를 리턴한다.
// 메모리 할당에 실패하면 NULL이 리턴된다.

// 리턴형이 void*(void 포인터) ??

// malloc은 단순히 메모리만 할당하는 함수이기 때문에 개발자가 어떠한 데이터 형을 저장하는지 예측할 수 없다.
// 예를들어 4바이트를 할당하였을 경우 int형 데이터를 저장하기 위해서 사용하는지, float형 데이터를 사용하는지 예측할 수 없기 때문에 void포인터를 반환하여 개발자가 알맞은 용도로 변환하여 사용할 수 있도록 만든것이다.

// 예를들어 int형 데이터를 저장하기 위해서는 리턴되는 void*을 int*로 변환해야 한다.
// int *i = (int*) malloc (sizeof(int));