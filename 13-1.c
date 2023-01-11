/*
08. 제어문(조건에 따라서 실행 순서를 결정)
8.6 분기문
    - 개요
        : 제어권을 강제로 변경할 수 있는 제어문을 말한다.
        : break, continue, goto, return
    - break

- 실습

#include <stdio.h>
void main() {
    while (1) {  // 무한 반복
        int gugu;
        printf("원하는 단 입력(1 ~ 9) : "); scanf_s("%d", &gugu);
        if (gugu <= 0 || gugu > 9) {
            printf("구구단 프로그램 종료\n");
            break; // 무한 반복 종료
        }
        else if (1 <= gugu && gugu <= 9) {
            printf("===%d단===\n", gugu);
            for (int n = 1; n <= 9; n++) {
                printf("%d * %d = %d\n", gugu, n, gugu * n);
            }
        }
    }
}

    - continue
        : 개요
            ; 반복문이 실행해야 할 명령 중 아직 실행하지 않은 명령을 무시하고
            ; 바로 다음 단계인 조건식 또는 증감식으로 이동하게 해 주는 제어문

- 실습
    : 1부터 10까지 숫자 중에서 짝수만 출력하는 소스

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 10; a++) {
        if (a % 2 == 0) {
            continue;  // 아래의 실행문을 무시함.
            // printf("a = %d\n", a);
        }
        printf("a = %d\n", a); // 홀수만 출력이 됨.
    }
}

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 10; a++) {
        if (a % 2 != 0) {
            printf("a = %d\n", a); // 홀수만 출력
            continue;  // 아래부터 if문이 끝날 때까지 무시
        }      
            printf("a = %d\n", a); // 짝수도 출력
    }
}
// 1부터 10까지 모두 출력하는 소스

: 실습 
    - 1부터 30까지의 숫자 중 2의 배수, 3의 배수, 5의 배수가 아닌것만 출력

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 30; a++) {
        if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0) {
            continue;
        }
        printf("a = %d\n", a);
    }
}

#include <stdio.h>
void main() {
    int a = 0;
    while (++a < 31) {
        if (a % 2 != 0 || a % 3 != 0 || a % 5 != 0) {
            continue;
            printf("a = %d\n", a);
        }
        printf("a = %d\n", a); // 2와 3과 5의 공배수를 출력
    }
}

    - goto
        : 개요
            ; 반복문과 동일한 기능을 한다
            ; 프로그램 내의 지정한 곳으로 제어권을 강제로 이동시키는 제어문
            ; 프로그램 소스가 길어지면 복잡해지기 때문에 많이 사용하지는 않는다.
        : 문법
            명칭1:
                명령문1:
                if (조건)
                    goto명칭1;
                명령문2:

#include <stdio.h>
void main() {
    int a = 1;
xx:
    printf("a = %d\n", a++);
    if (a <= 3) {
        goto xx;
    }
}

    - return
        : 개요 
            ; 함수 내에서 사용하면 해당 문장이 실행된 함수가 강제로 종료된다.
            ; main()함수 내에서 return문을 실행하면 프로그램이 종료된다.
            ; 되돌림값이 있을 때만 사용한다.

08. 제어문(조건에 따라서 실행 순서를 결정)
8.7 c언어의 랜덤 함수 적용
    - rand()
        : 개요
            ; 난수를 출력하는 최선의 방법을 제공한다.
            ; 임의의 값을 계산해서 무작위로 출력한다.
            ; 이 함수는 'stdlib'에 내장된 함수이기 때문에 선언을 해줘야 한다.
        : 실습
            ; 

#include <stdio.h>
#include <stdlib.h>
void main() {
    printf("랜덤값 : %d\n", rand());
    int num;
    for (int n = 1; n <= 5; n++) {
        num = rand();
        printf("랜덤값 : %d | %d\n", n, rand());
    }
    srand(20);
    for (int i = 1; i <= 5; i++) {  
        // srand(초기 정수값 1개): rand()함수의 초기값을 변경
        printf("랜덤값 : %d\n", rand());
    }
}
*/

