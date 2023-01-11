/*
10. 함수
10.1 개요
    - 특정한 기능을 수행하는 하나의 독립된 형태를 지닌다.
    - 함수를 만들어 놓으면 필요할 때 불러서 사용이 가능하다.
    - 주로 동일한 내용이 소스 안에서 계속 사용되면 소스 길이가 길어지고 비효율적임.
    - 함수는 이와 같은 경우를 대비할 수 있다.
    - 사용자가 직접 정의 또는 미리 정의된 함수를 호출해 사용한다.
    - (매우 중요) 함수 정의는 반드시 'main()함수' 이전에 선언이 되어야 한다.

10.2 사용법
    - step 1. 함수 정의
        <반환자료형> 함수명(자료형1 매개변수1, 자료형2 매개변수2,.....)
            기능;
            기능;
            ....
            [return] 변환자료형과 동일한 기능에서 나온 결과값을 호출한 곳으로 되돌린다.
            만약, 변환자료형이 void일 경우에는 return을 생략해도 된다.
    - step 2.  함수 호출   
        void main() {
            함수명();
        }
        
#include <stdio.h>
int kg() {
    int a = 1;
    printf("첫 번째(%d) 함수 선언\n", a);
    return a;
}

double it() {
    double a = 1.1;
    printf("두 번째(%g) 함수 선언\n", a);
    return a;
}

char bank() {
    char a = 'a';
    printf("세 번째(%c) 함수 선언\n", a);
    return a;
}

void eroom() {    // 함수 정의 자료형 생략시 기본값으로 'int형'이 적용된다.
                  // 반환을 하지 않을 경우에는 반드시 'void'를 사용한다.
    printf("마지막 함수 선언\n");
    return;    // 반환할 값을 주지 않겠다.
}

void main() {
    kg();
    it();
    bank();
    eroom();
}
10.3 실습
    - 함수를 생성하는 방법(함수 위치)

#include <stdio.h>
void func();

void main() {
    func();
}

void func() {
    printf("samadal\n");
}
// main함수를 선언하려는 함수보다 위에다가 두려면
// 선언함수의 함수명만 맨 위에 두면 된다.

// 1-
#include <stdio.h>

void haha() {
    printf("Samadal\n");
}

void nemo() {
    int x;
    for (x = 1; x <= 3; x++) {
        printf("NEMO\n");
    }
}

void main() {
    haha();
    nemo();
}


// 2-
#include <stdio.h>
void haha();
void nemo();

void main() {
    haha();
    nemo();
}

void haha() {
    printf("Samadal\n");
}

void nemo() {
    int x;
    for (x = 1; x <= 3; x++) {
        printf("NEMO\n");
    }
}

#include <stdio.h>

void ss() {
    printf("Samadal\n");
}
void sh() {
    printf("Madal\n");
}
void main() {
    int a;
    printf("출력할 문자열은? : "); scanf_s("%d", &a);
    if (a == 1) {
        ss();
    }
    else if (a == 2) {
        sh();
    }
}
- 실습
    : 매개변수를 받아오는 함수

#include <stdio.h>
void func(int x) {
    return x;
}

void main() {
    func(4);
}

#include <stdio.h>
void plus(int x, int y) {
    printf("%d + %d = %d\n", x, y, x + y);
}

void minus(int x, int y) {
    printf("%d - %d = %d\n", x, y, x - y);
}

void mul(int x, int y) {
    printf("%d * %d = %d\n", x, y, x * y);
}

void div(int x, int y) {
    printf("%d / %d = %d\n", x, y, x / y);
}

void main() {
    int a = 10, b = 5;
    plus(a, b);
    minus(a, b);
    mul(a, b);
    div(a, b);
}
*/
#include <stdio.h>
int func() {
    return 3;
}

void main() {
    int a;
    a = func();
    printf("func함수의 실행결과는 %d입니다.\n", a);
}