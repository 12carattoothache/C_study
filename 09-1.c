/*
08. 제어문
8.2 switch ~ case문
    - 실습
        : 다음의 조건으로 학점을 출력하는 소스
            A학점(100~90)
            B학점(89~80)
            C학점(79~70)
            D학점(69~60)
            F학점(59~0)

#include <stdio.h>
void main() {
    int jumsu;
    printf("점수를 입력해라 : "); scanf_s("%d", &jumsu);
    if (0 <= jumsu && jumsu <= 100) {
        switch (jumsu / 10) {
        case 10:
        case 9: printf("A학점(%d)\n", jumsu); break;
        case 8: printf("B학점(%d)\n", jumsu); break;
        case 7: printf("C학점(%d)\n", jumsu); break;
        case 6: printf("D학점(%d)\n", jumsu); break;
        default: printf("F학점(%d)\n", jumsu); break;
        // case는 if처럼 범위를 받지못하고 수(문자) 하나만을 받을 수 있다.
        }
    }
    else {
        printf("점수가 잘못 입력되었습니다\n");
    }
}

cf) 코딩에서 많이 사용되는 기호들 용어
& - Ampersand
@ - At
* - Asterisk
_ - Underscore
- - Hyphen
^ - Circumflex, Caret
` - Grave
~ - Tiddle
! - Exclamation Point
    
    - 실습
        : 3의 배수를 판별할 수 있는 소스

#include <stdio.h>
void main() {
    int n,ref;
    printf("정수를 입력 : "); scanf_s("%d", &n);
    ref = n % 3;
    
    switch (ref) {
    case 0: printf("%d는 3의 배수이다.\n", n); break;
    default: printf("%d는 3의 배수가 ^아니다.^\n", n); break;
    }

}

8.3 for문
    - 개요
        : 지정된 조건이 만족되는 동안 어떤 처리를 지정한 횟수만큼 반복해서 실행
        : 같은 코드 또는 유사한 코드를 여러번 실행시키고자 할 때 사용
    
    - 문법
       for (초기식; 조건식; 증감식) {
           반복할 명령문;
       }
       다음 문장;

    - 단일 for문

#include <stdio.h>
void main() {
    // for문 안에 초기값이 주어진 경우 
    for (int i = 0; i<2; i++) { // i++는 선할당 후증가
        // 초기값은 한 번 읽고 더 이상 안 읽는다.
        printf("i1 = %d\n", i); // 조건식이 거짓일때까지 계속 반복
    }
    // printf("i2 = %d\n", i);    // 오류
                                  // 변수 i가 for문 안에만 선언(지역변수)되어 있기 때문.
}


#include <stdio.h>
void main() {
    // for문 밖에 초기값이 주어진 경우(가장 기본적인 방법)
    int i;
    for (i = 0; i < 2; i++) { // 조건식은 어디까지나 for문안에서만 적용. 
        printf("i1 = %d\n", i); 
    }
    printf("\ni2 = %d\n", i); // 따라서 for문 밖의 i2는 2라는 값을 받는다.
}

#include <stdio.h>
void main() {
    // 위의 예시를 if문으로 바꾸기.
    int i = 0;
    if (i < 2) { //for문의 조건문을 if의 조건에 넣기
        printf("i1 = %d\n", i++); //for문의 증감식을 넣기
        printf("i1 = %d\n", i++);
        printf("i2 = %d\n", i++);
    }
    else {
        printf("실행 종료");
    }
}

- 실습: 1 - 다음과 같이 출력하려면?
    1. Hello
    2. Hello
    3. Hello
    4. Hello

     : 2 - 다음과 같이 출력하려면?
         A, B, C, D ..., X, Y, Z

     : 3 - 다음과 같이 출력하려면?
         3+6+9=18

// 1 -
#include <stdio.h>
void main() {
    int i = 1;
    for (i; i < 5; i++) printf("%d. Hello\n", i);
}

// 2 -
#include <stdio.h>
void main() {
    char ch = 'A';
    int i = 0;
    for (i; i < 26; i++) {
        printf("%c, ", ch + i);
    }
    printf("\b\n"); //마지막 쉼표가 지워져야하는데 시스템 자체의 오류.
}
// ASCII CODE를 통한 연산(숫자를 통해 문자 표현)

// 3 -

#include <stdio.h>
void main() {
    int i, sum = 0; // sum의 초기값 반드시 설정
    for (i = 1; i < 11; i++) {
        if (i % 3 == 0) {
            printf("%d+", i);
            sum += i;
        }
    }
    printf("\b=%d\n", sum);
}
*/



