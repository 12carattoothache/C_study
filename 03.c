/*
03. 서식 지정자(매우 중요)
    - 진법

#include <stdio.h>
void main() {
    // 10진수로 변환하는 코드
    printf("10진수 : %d\n", 100);   // 10진수
    printf("10진수 : %d\n", 0144);  // 8진수(0o144와 같이 쓰면 오류)
    printf("10진수 : %d\n", 0x64);  // 16진수

    // 8진수로 변환하는 코드
    printf("8진수 : %o\n", 100);   // 10진수
    printf("8진수 : %o\n", 0144);  // 8진수(0o144와 같이 쓰면 오류)
    printf("8진수 : %o\n", 0x64);  // 16진수

    // 16진수로 변환하는 코드
    printf("16진수 : %x\n", 100);   // 10진수
    printf("16진수 : %x\n", 0144);  // 8진수(0o144와 같이 쓰면 오류)
    printf("16진수 : %x\n", 0x64);  // 16진수
}
    - main()함수 유형
        : int main()
            : main()함수가 종료될 때 정수형 값을 리턴한다.
            : 코딩
                #include <stdio.h>
                int main() {
                    연산식1;
                    연산식2;
                    ....
                    연산식n;
                    return 연산결과;
                }
        : void main()
            ; main()함수가 종료될 때 아무런 값도 반환하지 않는다.
            ; 'void'는 '값이 없다'라는 뜻이다.
            ; void main(), main(), void main(void), main(void)
            : 코딩
                #include <stdio.h>
                int main() {
                    연산식1;
                    연산식2;
                    ....
                    연산식n;
                }

    - 정렬
        : 오른쪽 정렬(+, 생략가능), 왼쪽 정렬(-)
        : 예
            %-6s    : 6자리를 고정 길이로 확보한 후 왼쪽 정렬
            %5s     : 5자리를 고정 길이로 확보한 후 오른쪽 정렬

#include <stdio.h>
void main() {
    // 문자열 정렬
    printf("%%s : %s, %s\n", "AAA", "BBB");  //%%는 %문자열을 출력하기 위해 사용
    printf("123456789012345678901234567890\n");
    printf("%%-3s   : |%-3s|%-3s|\n", "AAA", "BBB");
    printf("%%3s    : |%3s|%3s|\n", "AAA", "BBB");
    printf("%%-4s   : |%-4s|%-4s|\n", "AAA", "BBB");
    printf("%%4s    : |%4s|%4s|\n", "AAA", "BBB");
    printf("%%-5s   : |%-5s|%-5s|\n", "AAA", "BBB");
    printf("%%5s   :  |%5s|%5s|\n", "AAA", "BBB");
}
04. 상수
    - 개요
        : 메모리의 일정 공간에 저장된 변경이 불가능한 데이터
        : 일반적으로 일반 변수 선언과 동일하게 사용이 된다.
    - 종류
        : 수치 상수
            ; 고정 소수점 정수 : 정수형 상수, 소수점을 포함하지 않는 상수
            ; 부동 소수점 상수 : 실수형 상수, 소수점을 포함하는 상수
        : 문자 상수
            ; 문자 상수 - 문자 형태로 사용, ASCII 코드로 표현이 가능
            ; 문자열 상수 - 문자열 형태로 사용.
                          - 문장의 끝을 나타내는 NULL문자(\0)가 포함

#include <stdio.h>
void main() {
    printf("정수형 상수 : %d\n", 10);
    printf("정수형 상수 : %f\n", 1.2);
    printf("정수형 상수 : %c\n", 's');
    printf("정수형 상수 : %s\n", "samadal");
    printf("ASCII 문자 : %c\n", 65);
    printf("ASCII 문자 : %d\n", 'A');
}

05. 변수(매우 중요)
    - 개요
        : 메모리의 일정 공간에 저장되고 변경이 가능하다.
        : '변수를 생성한다...'라는 말은 메모리의 일정공간을 확보한다는 말이다.
    - 변수의 선언(문법)
        : 형태
            <자료형> <변수명> = [초기]값('자료형'과 동일한 값이 와야 한다.)
               int       a    = 5
        : 설명
            5라는 값을 정수형 변수인 a에 대입해라.
    - 자료형의 종류
        ; 1byte = 영문자 또는 숫자 한 개 = 8bit
        : 정수 데이터
            int (4byte)    - 기본형
            long int (4byte)
            unsigned int (4byte)
        : 실수 데이터
            float (4byte)
            double (8byte)   - 기본형
        : 문자 데이터
            char (1byte)    - 기본형
            unsigned char (1byte)
    - 변수명 작성 규칙
        : 영문, 숫자, 특수기호(_)만 사용 가능 : samadal, sam1, _m, mad_al
        : 변수명의 시작명은 영문자와 '_'만 가능: sam, _sam, 1sam(x)
        : 대소문자를 구분 : Sam, sAm, SAM, sam은 모두 다른 변수
        : C언어에서 사용하는 예약어는 변수로 사용 불가 : void, int, printf, main...
        : 변수명은 절대 공백을 넣으면 안 된다.
        : 변수명을 선언시 메모리에 할당, 즉 존재하는 동안은 재선언이 불가능하다.
        : 중복 불가

#include <stdio.h>
void main() {
    // 변수 선언 예
    int a;    // 변수를 선언할 때는 반드시 자료형을 써줘야 한다.
    char a1 = 'a';    // 변수 선언과 함께 값을 넣을 수도 있다.
    float a_1 = 1.3;
    double _a1 = 1.4;
    char a;    // a가 이미 메모리에 int로 선언이 되어 있기 때문에 안된다.(중복 불가)
}
    // 1. 정수
#include <stdio.h>
void main() {
    int a;    // 초기값 없는 변수 선언
              // 이렇게 변수 선언과 함께 메모리에 정수형(4byte)으로 할당된다.
    a = 10;   // 변수 생성 후 처음으로 값을 대입(변수 초기화)
    printf("작업 전 : %d\n", a);
    a += 20;  // a = a+20 라는 뜻이다.
    printf("작업 후 : %d\n", a);

    int b = 20; // 변수 선언과 함께 초기값 지정
    printf("b1 : %d\n", b);
    // int b = 30 ; // 앞에서 이미 변수가 선언이 되어 있으므로 중복 선언 불가
    // printf("b2 : %d\n", b);

    int A = -2;
    printf("A1 : %d\n", A);
    A = a;   // 재선언이 아니라 변수의 값을 바꾼 것이므로 오류 x, 위의 a=30을 받아옴.
    printf("A2 : %d\n", A);

    int c = 8;
    c = 2;  // 재선언이 아니라 변수의 값을 바꾼 것이므로 오류 x
    printf("%d", c);
}
*/
