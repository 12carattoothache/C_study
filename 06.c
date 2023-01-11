/*
07. 표준 입력 함수(매우 중요) - scanf()
    - 5. 실습

#include <stdio.h>
#define year 12
void main() {
    
    int sm;
    long long budget;
    printf("매달 저축 금액 : "); scanf_s("%d", &sm);
    budget = 30 * (sm * year);
    printf("30년 후의 재산 : %lld\n", budget);

    정수 2개를 입력받은 후 합을 구한다. 
    단, 두 수를 직접 합하지 말고 변수를 이용해사 합한다.
    
    int num1, num2;
    printf("num1 = "); scanf_s("%d", &num1);
    printf("num2 = "); scanf_s("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    
    int n1, n2, sum1, sum2 = 4;
    printf("정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);
    sum1 = n1;      // 초기값 지정(값을 누적시킬 때는 반드시 초기값 지정해야함)
    sum1 += n2;     // sum = sum(n1) + n2
    sum2 += sum1;
    printf("두 수의 합은 %d이다.\n", sum1);
    printf("sum2 = %d\n", sum2);
    
    char name1[30], name2[30];
    printf("이름 1 : "); gets_s(name1, sizeof(name1));
    printf("이름 2 : "); gets_s(name2, sizeof(name2));
    printf("이름1(%s) | 이름2(%s)\n", name1, name2);
}

- 정수 1개와 실수 1개를 입력받은 후 사칙연산으로 계산되는 소스

#include <stdio.h>
void main() {
    int a;
    double b;
    printf("정수, 실수 : "); scanf_s("%d%lf", &a, &b);
    printf("%d + %.2lf = %.1lf\n", a, b, a + b);
    printf("%d - %.2lf = %.1lf\n", a, b, a - b);
    printf("%d * %.2lf = %.1lf\n", a, b, a * b);
    printf("%d / %.2lf = %.1lf\n", a, b, a / b);
}
- 수강생이름, Clang, Linx, Windows, Network의 점수를 입력 받은 후 합계, 평균을 구하는 소스

#include <stdio.h>
void main() {
    char name[30];
    printf("이름을 입력하세요. : "); gets_s(name, sizeof(name));
    int a, b, c, d;
    printf("Clang의 점수 : "); scanf_s("%d", &a);
    printf("Linx의 점수 : "); scanf_s("%d", &b);
    printf("Windows의 점수 : "); scanf_s("%d", &c);
    printf("Network의 점수 : "); scanf_s("%d", &d);
    int sum = a + b + c + d;
    double avg = sum / 4;
    printf("%s의 합계 점수 : %d\n", name,sum);
    printf("%s의 평균 점수 : %.2lf\n", name,avg);    
}

08. 제어문(조건에 따라서 실행 순서를 결정) - if문
    - 1. 단순 if문(if문)
        : 개요           
            : 조건식을 판단해서 참이면 종속문장을, 거짓이면 '다음문장'을 실행
        
        : 문법
            if(조건식) {
                종속문장;
            }
            다음문장;    // 단순 if문(if 하나로만 구성된 제어문)의 경우 참과 거짓 구분없이 이 문장 실행

        : 실습

#include <stdio.h>
void main() {
    int n;
    printf("정수 입력 : "); scanf_s("%d", &n);
    if (n) {    // 입력받은 값이 있다면...  
        printf("%d는 0이 아닌 값이므로 조건식은 참\n", n); 
        printf("조건식이 참이므로 종속문장은 실행\n");
        printf("0을 입력하면 종속문장은 실행되지 않는다.\n");
        printf("참은 1이고, 거짓은 0으로 판단되기 때문이다.\n");  // Boolean(불대수)
    }
}

#include <stdio.h>
void main() {
    int n1, n2;
    printf("두 정수 입력 : "); scanf_s("%d%d", &n1, &n2);
    if (n1 > n2) {
        printf("%d는 %d보다 크다\n", n1, n2);
    }
    printf("%d는 %d보다 작다\n", n1, n2);    // 참이어도 실행된다.
}

#include <stdio.h>
void main() {
    int n1,n2;
    printf("정수 입력 : "); scanf_s("%d", &n1);
    n2 = n1 % 2;
    if (n2 == 0) {
        printf("입력된 값 %d는 짝수이다.\n", n1);
    }
    if (n2 != 0) {
        printf("입력된 값 %d는 홀수이다.\n", n1);
    }
}  

- 실습
    : 입력받은 정수의 크기를 판단하는 소스(비교 기준은 10으로 한다.)

#include <stdio.h>
void main() {
    int n1;
    printf("정수를 입력 : "); scanf_s("%d", &n1);
    if (n1 > 10) {
        printf("입력된 값 %d는 10보다 크다.\n", n1);
    }
    if (n1 < 10) {
        printf("입력된 값 %d는 10보다 작다.\n", n1);
    }
    if (n1 == 10) {    // '같다'는 '='이 아닌 '=='
        printf("입력된 값 %d는 10이다.\n", n1);
    }
}
*/