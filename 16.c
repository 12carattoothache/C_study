/*
10. 함수
10.4 함수 표현 종류
    - 전달 인수(O), 반환값(O)  - int Add(int n1, int n2)
    - 전달 인수(O), 반환값(X)  - void Show_Add_res(n1)
    - 전달 인수(X), 반환값(O)  - int Read_Num()
    - 전달 인수(X), 반환값(X)  - void Void_use(void)

#include  <stdio.h>
int Add(int n1, int n2);
void Show_Add_res(n1);
int Read_Num();
void Void_use(void);

void main() {
    int n1, n2, res;
    Void_use(); 
    n1 = Read_Num();
    n2 = Read_Num();
    res = Add(n1, n2);
    printf("결과1 : %d\n", res);
    Show_Add_res(n1);
    printf("결과2 : %d\n", n1);
}

void Void_use(void) {
    printf("Void_use()함수는 호출만 되고 인수 및 반환은 안 된다.\n");
}

int Add(int n1, int n2) {     // 가장 일반적인 함수 선언
    return n1 + n2;
}

int Read_Num() {
    int n;
    printf("값 입력 : "); scanf_s("%d", &n);
    return n;
}

void Show_Add_res(int n1) {
    int hap = 0, num = 1;   // 이 세 줄은 모두 주석처리해도 전혀 문제가 없다.
    hap = n1 + num;         // 왜? 처리한 후의 결과값을 반환하는 문구가 없다.
    printf("None\n");
}
10. 함수
10.5 함수의 작동
    - 함수는 현재 수행중인 프로그램과는 별도의 위치에 있는 명령어들의 집합이다.
    - 함수를 호출하며 함수 코드가 있는 부분으로 이동하여 프로그램이 실행된다.
    - 따라서 함수가 종료되면 원위치로 복귀하여야 하며 이런 복귀 주소들은 전부 메모리에 보관된다.
    - 함수의 동작을 위한 정보가 보관되는 장소를 'System Stack'이라고 한다.
    - 시스템 스텍에는 함수의 동작을 위해 필요한 모든 정보가 보관된다.


#include <stdio.h>
void func();
void func2();

void main() {
    printf("1. main 함수의 시작\n");
    func();
    printf("6. main 함수의 끝\n");
}

void func() {
    printf("2. func 함수의 시작\n");
    func2();
    printf("5. func 함수의 끝\n");
}
void func2() {
    printf("3. func2 함수의 시작\n");
    printf("4. func2 함수의 끝\n");
}
10.6 매개변수에 따른 함수 호출의 유형
    - Call by Value
        : 매개변수로 값만 전달받는 방식을 말한다.
        : 호출된 함수(swap())에서 원 함수(main())의 변수 값을 변경할 수가 없다.
        : 값을 전달하는 형태의 함수 호출
        : int a = 4;
    - Call by Reference(Call by Pointer)
        : 매개변수에 변수의 별명을 만든 후 값을 받아오는 방식을 말한다.
        : 호출된 함수에서 원 함수의 변수 값을 별명을 통해서 변경할 수 있다.
        : 주소값을 전달하는 형태의 함수 호출
        : int *ptr = &a

#include <stdio.h>
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("swap 함수 실행 x(%d) | y(%d)\n", x, y);
}
void main() {
    int a = 10, b = 20;
    printf("함수 호출 전 a(%d) | b(%d)\n", a, b);
    swap(a, b); // call by value : 원함수의 변수값 a,b 자체는 변경 x
    printf("함수 호출 후 a(%d) | b(%d)\n", a, b);
}

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("swap 함수 실행 x(%d) | y(%d)\n", *x, *y);
}
void main() {
    int a = 10, b = 20;
    printf("함수 호출 전 a(%d) | b(%d)\n", a, b);
    swap(&a, &b); // call by value : 원함수의 변수값 a,b 자체는 변경 x
    printf("함수 호출 후 a(%d) | b(%d)\n", a, b);
}

10.7 함수의 재귀호출(Recursive Call)
    - 개요
        : 함수가 실행 도중 직접 또는 간접적으로 자기 자신을 다시 호출하는 것을 말한다.
        : 재귀호출 된 함수는 별도로 활성화 레코드가 만들어지는 새로운 함수'가 된다.
    - 재귀 함수 호출 유형
        : 직접 재귀 함수 호출(자기 자신을 직접 호출하는 함수)
        : 간접 재귀 함수 호출(자신을 호출한 함수로 호출하는 함수)

#include <stdio.h>
void func() {
    printf("사마달\n");    // 재귀호출은 무한대로 반복시켜서는 의미가 없다.
    func();       // 따라서 재귀호출 함수를 만들 경우에는 반드시 탈출구를 만들어야 한다.
}
void main() {
    printf("재귀함수 호출\n");
    func();
}

#include <stdio.h>
void func(int a) {
}

#include <stdio.h>
void main() {
    static int a = 0;
    if (a >= 2) return;
    else a += 1;
    printf("%d : 출력\n", a);
    main();
}
11. 포인터
11.1 개요
    - 메모리에 있는 data의 주소를 말한다.
    - 즉, 포인터는 "메모리에 있는 data의 위치"를 표현한 수치이다.
    - 메모리의 주소는 16진수 8자리로 구성되어 있고 이 주소를 포인터라고 한다.
11.2 포인터 변수
    - 포인터 값(주소 값)을 보관하기 위해 만든 변수를 말한다.
    - 포인터 변수는 어떠한 "data가 있는 곳의 주소값을 보관"한다.
    - "포인터 변수가 data를 가리키고 있다."고 한다.
    - 특징
        : 변수를 생성할 때는 포인터 변수 앞에 '*'기호를 붙이면 포인터 변수가 생성.
        : 포인터 변수는 반드시 주소값만을 보관할 수 있다.
        : 포인터 변수의 크기는 자료형과 상관없이 "4byte"이다.
*/
#include <stdio.h>
void main() {
    int a = 10; // 변수 선언
    int* pa;    // 포인터 변수 선언
    pa = &a;    // 포인터 변수에 a의 값을 대입(방법 1)
    *pa = 10;   // 포인터 변수에 a의 값을 대입(방법 2)
    printf("a의 값 = %d\n", a); 
    printf("a의 주소값 = %p\n", &a);

    // 변수 앞에 '&'를 붙이면 변수의 주소값(00000082670FF884)이 나온다.
    // 여기서 주소값 '00000082670FF884'은 64bit로 디버깅되어있기 때문인데
    // 32bit(x86)으로 디버깅하면 '16진수 8자리'로 출력이 가능하다.

    printf("%d\n", *pa);
    printf("%d\n", a);    // 윗줄과 아랫줄의 출력값은 10으로 동일
    printf("%p\n", *pa);  // 포현법이 잘못되어 쓰레기값 출력
    printf("%p\n", &a);   // 값이 유효한 주소값 출력
}