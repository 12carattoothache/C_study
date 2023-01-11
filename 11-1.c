/*
08. 제어문(조건에 따라서 실행 순서를 결정)
8.3 for문
    - 다중 for문
        : 1부터 시작해서 홀수의 합을 구하면서 그 합이 10000을 넘지 않는 마지막 수는?

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
    for (i; sum < 10000; i++) {
        if (i % 2 != 0) {
            sum += i;
            printf("i(%d) | sum(%d)\n", i, sum);   
        }
    }
    i--;
    printf("%d\n", i);
    // 201부터 i에 해당하지 않는 것이므로 출력하면 200이 나옴.
    // 따라서 i에서 1을 감소시킨 후 출력
}
- 실습 : 쌀 100통이 저장되어 있는 창고에 쥐 2마리가 있다. 
       : 쥐 한 마리가 하루에 20g씩의 쌀을 먹고 10일마다 쥐의 수가 
       : 2배씩 증가한다. 몇 일 만에 창고의 쌀이 모두 쥐의 먹이가 될까?
       : 그리고 그 때의 쥐는 총 몇마리일까?(쌀 한 통은 1kg)

#include <stdio.h>
void main() {
    int rice = 100000, mouse = 2, day; // 100통 * 1000g
    for (day = 1; rice > 0; day++) {
        if (day % 10 == 0) {
            mouse *= 2;    // rice = rice - (mouse * 20)
         }
        rice -= mouse * 20;
        printf("%d일 %dg %d마리\n", day, rice, mouse);
    }
    day--;
    // for문의 실행이 종료된 후 (연산 후) day가 한 개 증가
    printf("%d일 %d마리\n", day, mouse);
}

#include <stdio.h>
#include <stdlib.h>    // 문자열 변환, 동적 메모리 관리 등을 하는 헤더 파일
                       // c 표준 유틸리티 함수들을 모아 놓은 파일
void main() {
    int money, i = 0;
    printf("요금을 투입 : "); scanf_s("%d", &money);
    system("cls");  // 
    for (;;) { // 소스를 반복하게 해주는 기능
        printf("1. 커피(200), 2. 코코아(250), 3. 반환, 4. 종료\n");
        printf("메뉴 선택 : "); scanf_s("%d", &i);
        if (i == 4) {
            exit(1); // 소스의 무한반복을 종료해주는 기능
        }
        else if ((i == 1 && money < 200) || (i == 2 && money < 250)) {
            printf("요금이 부족합니다.\n");
        }
        else if (i == 1) {
            printf("맛나게 드세요!\n");
            money -= 200;
        }
        else if (i == 2) {
            printf("맛나게 드세요!\n");
            money -= 250;
        }
        else if (i == 3) {
            printf("거스름돈 : %d원\n", money);
            money = 0; 
        }
        else {
            printf("잘못 입력했습니다.\n");
        }
    }
}
08. 제어문(조건에 따라서 실행 순서를 결정)
8.4 while문
    - 개요 
        : 제대로 구성이 안되면 '무한 반복'에 빠지기 쉽다
        : for문과 동일하게 반복된 작업을 하기위해 사용된다.
        : for문에서의 초기식, 조건식, 증감식 등의 구성이 필요하다.
        : 비교적 자유로운 형태의 조건식이 사용된다.
        : 다른 제어문(참, 거짓에 따른 분기)과 상관없이 무한 반복이 가능하다.
        : while문 안에 있는 조건식에 만족할 수 있도록 '증 또는 감'을 통해 진행한다.
    - 문법
        초기식;
        while(조건식) {
            명령문;
        } 

#include <stdio.h>
void main() {
    int i = 1;
    while (i <= 10) {
        printf("i = %d\n", i);  // 무한반복
        i++;   // 무한반복을 막음
    }
}

// 오름차순으로 1부터 10까지 출력
#include <stdio.h>
void main() {
    int i = 10;
    while (i >= 1) {
        printf("i = %d\n", i);  // 무한 반복
        i--;   // 무한 반복을 막음
    }
}
// 내림차순으로 10부터 1까지 출력


#include <stdio.h>
void main() {
    int i = 10;
    while (i) { // 무한반복 방지( i=0이 되면 i의 값이 없는 것이 되므로)
        printf("i = %d\n", i);  
        i--;  
    }
}

- 실습
    : 1 ~ 100까지의 합을 구하는 소스

#include <stdio.h>
void main() {
    int sum=0, i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("1부터 100까지의 합 : %d\n", sum);
}

#include <stdio.h>
void main() {
    int sum = 0, i = 1;
    while (i <= 100) {
        sum += i++; // 선연산 후증가이므로 i에 1부터 들어감
        printf("누적 합 : %d\n", sum);
    }
    printf("1부터 100까지의 합 : %d\n", sum);
}

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
samadal:;
    sum += i;
    i += 1;
    if (i <= 100) {
        goto samadal;  // 조건에 만족하면 samadal로 돌아감. 따라서 아래 출력문 실행 x
        printf("합 : %d\n", sum);
    }
}

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
samadal:;
    sum += i;
    i += 1;
    if (i <= 100) 
    goto samadal;  
    printf("합 : %d\n", sum);  
}
*/


