/*
11. 포인터
11.3 실습
    : 변수의 주소값을 구하는 방법
    : 포인터 변수의 사용 방법
    : 역참조를 이용한 변수값의 변경
    : 포인터 변수는 오직 같은 자료형을 가지는 변수의 주소값만을 저장할 수 있다.

    : 중첩 포인터 변수
        : 포인터 변수도 변수이므로 메모리에 생성되고 주소값이 존재한다.
        : 이런 포인터 변수의 주소값을 저장하는 포인터를 말한다.
        : 중첩 포인터도 포인터이므로 특성은 일반 포인터와 동일하다.

#include <stdio.h>
void main() {
    int a = 10;  
    printf("a의 값 = %d\n", a);
    printf("a의 주소값 = %p\n", &a);   
    // a의 값이 들어오는 위치(&a)의 주소번지는?
}

#include <stdio.h>
void main() {
    int a = 10;
    int* ip;    // 포인터 변수(ip)를 생성할 때는 변수명 앞에 '*'를 붙인다.
                // 임의의 값이 있는 위치의 주소번지를 위해 포인터 변수 ip를 선언
    ip = &a;    // 주소번지가 가리키고 있는 위치의 값(&a)을 대입해라.
    printf("a의 값 = %d\n", a);
    printf("a의 주소번지 = %p\n", &a);    // 변수의 주소값은 변수명에 '&'를 붙인다.
    // 포인터 변수는 주소, 위치의 값을 가진다.
    printf("ip의 값 = %p\n", ip);    // %p는 16진수의 자료형
}


#include <stdio.h>
void main() {
    char a = 'A';
    int b = 10;
    double c = 3.14;
    char* cp = &a;
    int* ip = &b;
    double* dp = &c;
    printf("cp = %p\n", cp);
    printf("cp+1 = %p\n", cp + 1);
    printf("cp+2 = %p\n", cp + 2);
    printf("\n");
    printf("ip = %p\n", ip);
    printf("ip+1 = %p\n", ip + 1);
    printf("ip+2 = %p\n", ip + 2);
}


void main() {
    double a = 3.141592;
    double* dp = &a;
    double** dp2 = &dp;

    printf("a = %lf\n", a);
    printf("&a = %p\n", &a);
    printf("\n");
    printf("dp = %p\n", dp);
    printf("&dp = %p\n", &dp);
    printf("*dp = %lf\n", *dp);
    printf("\n");
    printf("dp2 = %p\n", dp2);
    printf("*dp2 = %p\n", &dp2);
    printf("*dp2 = %p\n", *dp2);
    printf("**dp2 = %lf\n", **dp2);
}

11.4 배열과 포인터
    : 개요
        : 배열은 메모리에 연달아 여러 개의 변수를 만들 수 있게 한다.
        : 사용자가 배열을 만들면 컴파일러는 메모링 배열 전체 크기에 해당하는
         메모리를 할당하고 할당 받은 메모리의 시작 주소값을 배열의 이름으로 저장.
         따라서 배열의 이름은 포인터이며 상수가 된다.
        : 배열의 이름을 역참조하면 배열 안에 있는 첫 번째 원소의 값이 출력된다.
        : 배열의 이름은 '배열에 있는 첫 번째 원소의 주소값'을 가지고 있는 포인터 상수
        : 1차원 배열에서 첫 번째 원소가 [0]번 원소이기 때문에
          배열의 이름은 첫 번째 원소에 대한 포인터 상수가 된다.
    : [] 연산자
        : 배열안에 있는 원소를 호출하기 위해서 사용한다.
        : 이 연산자는 '포인터[정수]' 형태로 사용이 되고 컴파일 시에는
          '*(포인터 + 정수)'로 변경되어 실행된다.
        : arr[3]을 컴파일 시 '*(arr+3)'으로 변경되어 실행된다.
        : arr[2][3]은 컴파일 시 '*(arr[2]+3)'로 변경되고 다시 
          *(*(arr+2)+3)'으로 변경되어 실행된다.

#include <stdio.h>
void main() {
    int arr[3] = { 1,2,3 }; // 배열의 이름이 가지는 의미(3가지 모두 같은 내용 출력)
    printf("arr = %p\n", *(arr+0));
    printf("'arr = %p\n", &arr); // 변수 arr의 data(&arr)의 주소값(주소번지값)을 출력
    printf("&arr[0] = %p\n", &arr[0]);
}
*/
#include <stdio.h>
void main() {
    int arr[5];
    int* ptr = &arr;
    for (int i = 0; i < 5; i++) {
        printf("정수값 5개 입력 : "); scanf_s("%d", &arr[i]);
        printf("배열주소(%p) | 입력값(%d) | 인덱스(%d)\n", &arr[i], *(ptr + i), ptr[i]);
        // 입력값이 없는 상태이므로 문법상의 오류는 없지만 쓰레기값이 출력된다.
        // 상단의 scanf_s를 활성화하면 입력값이 각 배열의 원소에 대입이 되고
        // 정상적으로 출력된다.
    }
}
