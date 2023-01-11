/*
// 2. 실수
// 실수형 값 출력
#include <stdio.h>
void main() {
    float b = 1.2f;    // 여기서 경고(double형으로 해야 하는데 float형으로 했다.)가 나옴.
    double c = 1.3;   // 자료형의 크기(8byte) 때문이다.
    printf("b : %f\n", b);
    printf("c : %lf\n", c);
    // 소수 이하 자릿수 정리
    float bb = 1.25f;
    double cc = 1.36;
    printf("bb : %f\n", bb);
    printf("cc : %f\n", bb);
    printf("bb + cc = %0.2lf\n", bb + cc);

    float b1 = 1.256f;   // 반올림
    float b2 = 1.25f;
    double b3 = 1.254;
    double b4 = 1.236;
    printf("b1(%.2f) | b2(%.2f) | b3(%.2lf) | b4(%.2lf)\n", b1, b2, b3, b4);
}

#include <stdio.h>
void main() {
    // 3. 문자
    char ch1 = 'A', ch2 = 'a', ch3 = 65;  // 변수 자료형이 같으면 동시에 여러 변수 선언 가능
    // ch3의 경우 자료형(문자)과 값(정수)의 유형이 다름
    // 하지만 출력문에서 %c로 출력되므로 ASCII CODE를 통해 문자로 바뀜
    // 따라서 오류 X

    // int ch3 = 65;  이렇게 선언해도 오류 x
    printf("ch1(%c) | ch2(%c) | ch3(%c)\n", ch1, ch2, ch3);
}

#include <stdio.h>
void main() {
    // 4. 문자열
    // 문자열은 대입연산자(=)를 이용해서 값을 수정할 수가 없다.
    // 선언과 동시에 생성되는 데이터 저장소를 만들면서 값을 바로 입력해야 한다.
    char str1[10] = "samadal";    // 배열? 한 개의 변수에 여러 개의 값을 넣을 수가 있다.
    printf("str1    : %s\n", str1);
    printf("str1    : %c\n", str1[0]);  // 인덱싱(인덱스 번호는 0번부터 순차적으로 시작)
    printf("str1    : %c\n", str1[1]);
    printf("str1    : %c\n", str1[6]);
    printf("str1    : %c\n", str1[7]);
    printf("str1    : %c\n", str1[8]);

    char str2[6] = "clang";   // 문자열의 크기는 '배열값 + 1byte'이상만큼 잡아줘야 한다.
    printf("str2    : %s\n", str2); // 그렇지 않을 경우 쓰레기값이 출력
}

- 실습
- 각자의 나이와 키, 몸무게를 함께 출력하는 소스

#include <stdio.h>
void main() {
    int age = 22;
    float height = 166.5f;
    float weight = 75.5f;
    printf("나이(%d) | 키(%.1f) | 몸무게(%.1f)\n", age, height, weight);

    char ch;
    ch = 'D';                    // 초기에 선언한 값이 계속 유지되기를 원한다면
    printf("ch1 : %c\n", ch);    // 변수명은 절대 중복해서는 안된다.
    ch = 'G';
    printf("ch2 : %c\n", ch);

- 실습
- 각자의 키를 inch로 환산하여 출력하는 소스(1inch = 2.54cm)
#include <stdio.h>
void main() {
    float height = 166.5f;
    float height_inch = height / 2.54f;
    printf("환산 전: %.1fcm | 환산 후 : %.1finch\n", height, height_inch);
}


        - 실습(초기값에 따른 주의할 점)

#include <stdio.h>
        void main() {
        int n1 = 10, n2 = 20, res;    // 초기값이 지정되어 있지 않음
        res = n1 + n2;                // 연산된 값이 초기값으로 대입
        printf("n1(%d) | n2(%d) | res(%d)\n", n1, n2, res);

        int v1 = 10;
        double v2 = 20.0;
        printf("v1(%d) | v2(%.1lf)\n", v1, v2);
        // printf("v12(%d)\n", v1 + v2);  // 연산 시 타입이 다를 경우 크기가 큰
        // printf("v12(%.1lf)\n", v1 + v2);  // 자료형으로 출력이 됨.(비추)
    }

    - 실습
        : a는 20, b는 30일 때 변수 temp를 이용해서 두 변수의 값을 교환하는 소스

#include <stdio.h>
        void main() {
        int a = 20, b = 30, temp;
        printf("변경 전 : a는 %d, b는 %d\n", a, b);

        temp = a;
        a = b;
        b = temp;
        printf("변경 후 : a는 %d, b는 %d\n", a, b);
    }

    06. 연산자(매우 중요 - 특히 조건식에서 필수)
        - 1. 산술연산자
        : 종류
        = ; 우항의 값을 좌항에 대입
        == ; 좌항과 우항의 값이 같다.
        + ; 더하기
        - ; 빼기
        *; 곱하기
        / ; 몫
        %; 나머지


#include <stdio.h>
        void main() {
        // 1. 기본
        int n1 = 20, n2 = 3;
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
        printf("%d / %d = %d\n", n1, n2, n1 / n2);
        printf("%d %% %d = %d\n", n1, n2, n1 % n2);
        // 2. 출력문이 정수일 때는 항상 '정수', 실수일 때는 항상 '실수'로 출력한다.
        // 가급적 같은 타입의 연산자를 사용하는 것이 좋다.
        printf("20 + 3.0 = %.1lf\n", n1 + 3.0);
        printf("4.0 / 2.0 = %.1lf\n", 4.0 / 2.0);
        printf("2.0 / 4 = %.1lf\n", 2.0 / 4);
        printf("2 / 4 = %d\n", 2 / 4);  // 나눌 수 없을 때는 몫이 '0'인 값 출력
        // 3. 나머지 %의 주의사항
        printf("2 %% 4 = %d\n", 2 % 4); // 나눌 수 없을 때는 나머지가 나누어지는 숫자 그 자체
        printf("4 %% 2 = %d\n", 4 % 2); // 나누어 떨어지므로 나머지는 0
        // 4. %는 나머지를 구하는 연산자이므로 실수형은 사용 불가능(정수만 가능)
        // printf("4.6 % 2 = %.1lf\n", 4.6 % 2);
        }
- 실습
    : 두 값(8,2)을 이용해 '8은 나머지가 0이므로 짝수입니다.'를,
    : 두 값(9,2)을 이용해 '9는 나머지가 1이므로 홀수입니다.'를 출력하는 소스

#include <stdio.h>
void main() {
    int a = 8, b = 9, c = 2, div1, div2;
    div1 = a % c;
    div2 = b % c;
    printf("%d %% %d는 %d이므로 짝수입니다.\n",a,c,div1);
    printf("%d %% %d는 %d이므로 홀수입니다.\n",b,c,div2);
}

- 실습
    : 두 값(8,3)을 이용해 3의 배수이면 '3의 배수입니다.'를,
    : 3의 배수가 아니면 '3의 배수가 아닙니다.'를 출력하는 소스

#include <stdio.h>
void main() {
    int a = 8, b = 3, div1, div2;
    div1 = a % 3;
    div2 = b % 3;
    printf("%d를 3으로 나눈 나머지가 %d이므로 3의 배수가 아니다.\n", a, div1);
    printf("%d를 3으로 나눈 나머지가 %d이므로 3의 배수이다.\n", b, div2);
}

    - 2. 대입연산자(매우 자주 사용)  *****반드시 초기값이 있어야 한다.*****
        : 종류
            +=  ; 표현(a += b) -> a = a+b
            -=  ; 표현(a -= b) -> a = a-b
            *=  ; 표현(a *= b) -> a = a*b
            /=  ; 표현(a /= b) -> a = a/b
            %=  ; 표현(a %= b) -> a = a%b

#include <stdio.h>
void main() {
    int a =5, b = 3;
    printf("a1 : %d\n", a);    // 5
    a += b;                    // a = 5 + 3
    printf("a2 : %d\n", a);    // 8
    a += b;                    // a = 8 + 3
    printf("a3 : %d\n", a);    // 11
}

#include <stdio.h>
void main() {
    int a = 5, b = 5;
    printf("a += 1 = %d\n", a += 1);    // 6
    printf("a -= 1 = %d\n", a -= 1);    // 5
    printf("a *= b = %d\n", a *= b);    // 25
    printf("a /= b = %d\n", a /= b);    // 5
    printf("a %%= b = %d\n", a %= b);    // 0
}

#include <stdio.h>
void main() {
    int  a = 2, b = 4, c = 6, d = 8, e = 10;
    a += 3;   // 5
    b -= 2;   // 2
    c *= 3;   // 18
    d /= 2;   // 4
    e %= 3;   // 1
    printf("a(%d), b(%d), c(%d), ,d(%d), e(%d)\n", a, b, c, d, e);
}
*/
