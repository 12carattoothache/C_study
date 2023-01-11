/*
- 7. 자료형 변환 및 Cast 연산자
    : 개요
    ; 변수 또는 상수에 대하여 명시한 자료형으로 '강제 변환'
    - 강제로 형 변환을 했다고 해서 모든 소스에 영향을 주는 것은 아님.
    - 즉, 일시적 변환일 뿐.
    ; 연산식에서의 자료형 변환
    - 서로 다른 자료형 데이터의 연산이 진행되는 경우
    - 저장 공간의 크기가 큰 데이터의 자료형으로 일괄적 변환
    ; 대입식에서의 자료형 변환
    - 대입연산자 우측의 데이터 자료형이 좌측의 데이터 자료형으로 변환
    : 실습

#include <stdio.h>
    void main() {
    printf("5/2 : %d\n", 5 / 2);                     // 정수|정수
    printf("5/2 : %d\n", (float)5 / (float)2);       // 실수|실수
    printf("5/2 : %lf\n", (float)5 / (float)2);      // 실수|실수

    printf("5/2.0 : %lf\n", 5 / 2.0);                // 정수|실수
    printf("5/2.0 : %lf\n", (float)5 / (int)2.0);    // 실수|정수
    printf("5.0/2 : %d\n", (int)5.0 / (int)2);       // 정수|정수
}

#include <stdio.h>
void main() {
    int n1 = 5, n2 = 2;
    double n3;
    printf("결과 1 : %d\n", n1 / n2);

    n3 = (double)n2;
    // (double)n2 = n3;    // Cast연산자는 등호 왼쪽에는 사용 불가
    printf("결과 2 : %.2lf\n", n3);
}

- 8. 크기를 구하는 sizeof()연산자 - 포인터할 때 많이 사용
    : 실습

#include <stdio.h>
void main() {
    int a = 10;
    short int s = 10;
    char c = 'a';
    char cc[10] = "samadal";   // 크기는 10byte라는 의미.
    int su1 = 123;
    float su2 = 12.345;
    long float su3 = 12.345;
    printf("정수의 크기 : %zdbyte\n", sizeof(a));   //sizeof를 받을 때에는 %d 대신 %zd를 사용.
    printf("정수의 크기 : %zdbyte\n", sizeof(s));
    printf("정수의 크기 : %zdbyte\n", sizeof(int));
    printf("문자의 크기 : %zdbyte\n", sizeof(c));
    printf("문자의 크기 : %zdbyte\n", sizeof(char));
    printf("문자열의 크기 : %zdbyte\n", sizeof(cc));
    printf("실수의 크기 : %zdbyte\n", sizeof(float));
    printf("실수의 크기 : %zdbyte\n", sizeof(double));
    printf("수식의 크기 : %zdbyte\n", sizeof(su1 + su2));   // 4byte + 4byte != 8byte
    printf("수식의 크기 : %zdbyte\n", sizeof(su1 + su3));   // 서로 다른 자료형의 연산: 크기가 큰 변수를 따름
}
07. 표준 입력 함수(매우 중요) - scanf()
    - 1. 개요
        : 콘솔창(실행창)에 '입력한 값'을 실제 메모리(변수)에 저장할 때 사용
        : 변수를 자료형과 함께 선언하게 되면 그 자료형에 맞는 크기의 메모리 할당
        : 관련한 헤더 파일은 'stdio.h'이다.
    - 2. scanf()와 scnaf_s()
        : 오류(scanf)
        'scanf': This function or variable may be unsafe. Consider using scanf_s instead.
        To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
        : 해결(scanf_s)
            scanf()함수는 'Overflow(오버플로우)'에 매우 취약하고 안전하지 않다.
            (VC++2010 이후부터 입력함수가 여러 메모리 접근 보안 문제 때문에 발생)
    - 3. 문법
        : int scanf(const char *format [, argument,]....)

    - 4. 사용형식
        : 정수를 입력 받는 경우
            int data1;
            scanf("%d", &data1);    // 포인터는 위치를, &는 위치의 값을 출력
        : 실수를 입력 받는 경우
            float data2;
            double data3;
            scanf("%f", &data2);
            scanf("lf", &data3);
        : 문자를 입력 받는 경우
            char data4;
            scanf("%c", &data4);
        : 문자열을 입력 받는 경우
            char data5[10];    // 문자열은 배열(하나의 변수에 여러개의 값을 저장)로 표현
            scanf("%s", &data5);

- 실습

#include <stdio.h>
void main() {

    int d;      // 정수를 입력받은 경우
    printf("정수 입력 : ");
    scanf_s("%d", &d);
    printf("입력한 정수는 %d이다.\n", d);

    float f1;
    double f2;
    printf("실수형 숫자 2개 입력 : ");   // \n을 사용하지말자.
    scanf_s("%f%lf", &f1, &f2);    // \n을 사용하지말자.
    printf("입력한 실수 2개는 %.2f와 %.2lf이다.\n", f1, f2);

    char ch;
    printf("문자 입력 : "); scanf_s("%c", &ch, 1);   // 1byte.
    printf("입력한 문자는 %c이다\n", ch);
    // 경고
    // 'scanf_s': 서식 문자열에 대한 인수가 충분하게 전달되지 않았습니다.
    // message: 자리 표시자 및 해당 매개 변수에는 variadic 인수가 2개 필요하지만 1개가 제공되었습니다.
    // message: 누락된 variadic 인수 2이(가) 서식 문자열 '%c'에 필요합니다.
    // message: 이 인수는 버퍼 크기로 사용됩니다.
    // 설명
    // 문자를 입력할 때는 문자를 저장할 버퍼(Buffer)의 크기(byte)를 입력해야 한다.

    // 문자열을 입력받은 경우
    - 오류 1
    char str1[10];
    printf("문자열 입력 : "); scanf("%s", str1);
    printf("입력한 문자열은 %s이다.\n", str1);

    - 오류 2
    char str2[10];
    printf("문자열 입력 : ");
    while (getchar() != "\n");
    scanf("%s", str2);
    printf("입력한 문자열은 %s이다.\n", str2);

    - 정상 출력 1
    char str3[50];
    printf("문자열 입력 : ");
    gets_s(str3, sizeof(str3));    // gets_s(입력위치, 입력 허용 크기);
                                   // 실제 처리하는 문장수는 "허용크기-1"
    printf("입력한 문자열은 %s이다.\n", str3);

    - 정상 출력 2
    char str1[10];
    printf("문자열 입력 : "); scanf_s("%s", &str1, 10);
    printf("입력한 문자열은 %s이다.\n", str1);
}
*/