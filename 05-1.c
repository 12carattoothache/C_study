/*
06. 연산자(매우 중요 - 특히 조건식에서 필수)
    - 3. 증강연산자(매우 많이 사용) - 제어문에서 필수
        : 종류
            ++num    ; 값을 1 증가 후 속한 문장의 나머지를 진행(선 증가 후 연산)
                     ; val = ++num; (num을 1 증가 후 val에 대입)
      ***   num++    ; 속한 문장을 먼저 진행한 후 값을 1 증가(선 연산 후 증가)
            --num    ; 값을 1 감소 후 속한 문자의 나머지를 진행(선 감소 후 연산)
            num--    ; 속한 문장을 먼저 진행한 후 값을 1 감소(선 연산 후 감소)
            : 실습

#include <stdio.h>
void main() {
    int num1 = 12, num2 = 12;

    printf("num1    : %d\n", num1);      // 12
    printf("num1++    : %d\n", num1++);  // 12
    printf("num1    : %d\n", num1);      // 13

    printf("num2    : %d\n", num2);      // 12
    printf("++num2   : %d\n", ++num2);   // 13
    printf("num2   : %d\n", num2);       // 13

    printf("num1    : %d\n", num1);      // 13
    printf("num1--    : %d\n", num1--);  // 13
    printf("num1    : %d\n", num1);      // 12

    printf("num2    : %d\n", num2);        // 13
    printf("--num2++    : %d\n", --num2);  // 12
    printf("num2    : %d\n", num2);        // 12
}

#include <stdio.h>
void main() {
    int num1 = 10;
    int num2 = (num1--) + 2;


    printf("num1    : %d\n", num1);    // 9
    printf("num2    : %d\n", num2);    // 12
}
    - 4. 관계연산자(많이 사용) - 제어문에서 필수
        : 종류
            A <     ; A보다 크다.    if(a < 10)
            A >     ; A보다 작다.
            A <=    ; A보다 크거나 같다.
            A >=    ; A보다 작거나 같다.
            A ==    ; A와 같다.
            A !=    ; A와 같지 않다.

#include <stdio.h>
void main() {
    printf("변수 %f와 %f의 크기 비교 : %d\n", 3.01, 3.0, 3.01 <= 3.0);  // 거짓
    printf("변수 %f와 %f의 크기 비교 : %d\n", 3.01, 3.0, 3.01 >= 3.0);  // 참
    printf("변수 %f와 %f의 크기 비교 : %d\n", 3.01, 3.0, 3.01 == 3.0);  // 거짓
    printf("변수 %f와 %f의 크기 비교 : %d\n", 3.01, 3.0, 3.01 != 3.0);  // 참
    // 부등식 전체가 %d에 들어간다. 이때 bool대수에 의해 식이 참이면 정수 1,
    // 거짓이면 정수 0을 출력한다.
}
06. 연산자(매우 중요 - 특히 조건식에서 필수)
    - 5. 논리연산자
        : 종류
            ||    A || B    A와 B 둘 중 하나라도 참이면 연산결과도 무조건 참(논리OR)
            &&    A && B    A와 B 둘 다 참일 때만 연산결과도 참을 반환(논리 AND)
            !     !A        A가 참이면 거짓을, 거짓이면 참을 반환(논리NOT)
        : 실습

#include <stdio.h>
void main() {
    int num1 = 10, num2 = 20, result1, result2, result3;
    result1 = (num1 == 10 && num2 == 12);
    result2 = (num1 < 10 || num2 > 12);
    result3 = (!num1);
    printf("result1 : %d\n", result1);  // 0
    printf("result2 : %d\n", result2);  // 1
    printf("result3 : %d\n", result3);  // 0
}
    - 6. 비트연산자
        : 종류
            |    비트 단위 논리합(OR). 한 개라도 같으면 참.
            &    비트 단위 논리곱(AND). 둘 다 참일 때만 참.
            ^    비트 단위 배타적 논리합(XOR). 같으면 거짓, 다르면 참.
            ~    비트 부정(NOT). 비트열 반전
            <<   비트 좌측 이동().
            >>   비트 우측 이동().

#include <stdio.h>
void main() {
    int num1 = 12, num2 = 7;

    int result1 = num1 | num2;    // 15
    printf("num1 | num2 : %d\n", result1);

    int result2 = num1 & num2;    // 4
    printf("num & num2 : %d\n", result2);

    int result3 = num1 ^ num2;    // 11
    printf(" num ^ num2 : %d\n", result3);
}
*/