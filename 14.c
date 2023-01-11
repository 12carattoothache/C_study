/*
09. 배열
9.2 1차원 배열
    - 실습
        : 초기값 없이 배열 접근(선언 후 초기화(변수에 값을 대입하는 것))

#include <stdio.h>
void main() {
    int arr[5];    // 배열 크기(개수) 지정
    double darr[4];

    arr[0] = 1, arr[1] = 20, arr[2] = 300, arr[3] = 4000;
    darr[0] = 1.1, darr[1] = 1.14, darr[2] = 2.27;
    // 값을 별도로 초기화. 각 배열의 인덱스(arr[0])에 값을 대입

    printf("0번째 인덱스의 요소값 : %d | %.2lf\n", arr[0], darr[0]);
    printf("1번째 인덱스의 요소값 : %d | %g\n", arr[1], darr[1]);
    printf("2번째 인덱스의 요소값 : %d | %g\n", arr[2], darr[2]);
    printf("3번째 인덱스의 요소값 : %d\n", arr[3]);
    // g, G는 소수점 숫자 중 상수값만 표현할 때 효율적이다. (실수형에서 사용)
    // .2f, .2lf와 달리 자릿수 입력없이 표현이 가능하다.

    darr[3] = 4.15;
    printf("3번째 인덱스의 요소값 : %d | %g\n", arr[3], darr[3]);
    // 변수명은 항상 타입(double)이 있어야 하는데 이미 타입이 선언되어 있으므로 안 써도 된다.
    // 그러나 오버런 오류가 출력되는데, 이유는 상단의 'double darr[3];' 때문이다.
    // 상단에 3개의 값이 모두 대입되어 있기 때문에 더 이상 입력할 수가 없다.
    // 따라서 실수형 배열을 'double darr[4];'와 같이 수정해야 한다.

    arr[4] = 50000; // 마지막 인덱스에 여유가 있기 때문에 대입, 출력이 된다.
    printf("4번째 인덱스의 요소값 : %d\n", arr[4]);
}

#include <stdio.h>
void main() {
    int arr[3] = { 1,2 };
    double darr[2] = { 3.14 };

    printf("arr[0] : %d | arr[1] : %d\n", arr[0], arr[1]); // 1, 2
    printf("arr[1] : %d | arr[2] : %d\n", arr[1], arr[2]); // 2, 0(쓰레기값)
    printf("darr[0] : %lf | darr[1] : %lf\n", darr[0], darr[1]);  
    // 3.140000, 0.000000(쓰레기값)
    // 결과적으로 배열명을 초기화하면서 선언시 값을 생략하면
    // 다음과 같이 출력된다.
    // '0(정수)'으로 초기화 되고 '0.000000(실수)'로 초기화된다.
}
- 실습
    : 반복문을 이용한 순차적 배열(정수값을 1 ~ 10까지 10개의 배열로 저장한 후 출력)

#include <stdio.h>
void main() {
    int arr[10];  // '참조되지 않는 지역 변수입니다.'(사용 x)
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, i+1);
    }
}

- 실습
    : 반복문 정수 입력 및 배열 길이를 이용한 배열 선언

#include <stdio.h>
void main() {
    int arr[10], arrlen;    // arrlen은 배열의 길이를 확인하기 위한 변수
    printf("정수형 배열 크기 : %zd\n", sizeof(arr));  // 4byte * 10
    printf("정수형 변수 크기 : %zd\n", sizeof(arrlen));  //4byte

    arrlen = sizeof(arr) / sizeof(arr[9]);
    printf("정수형 배열 길이 : %d\n", arrlen);

    for (int i = 0; i < arrlen; i++) {
        printf("arr[%d]번째 입력 : ", i); scanf_s("%d", &arr[i]);
    }
    for (int j = 0; j < arrlen; j++) {
        printf("arr[%d]번째 출력 : %d\n", j, arr[j]);
    }
}

- 실습
    : 1부터 10까지의 값을 지정하고 그 중 짝수들의 합을 구하는 소스
 
#include <stdio.h>
void main() {
    int arr[10], arrlen, sum = 0;    // arrlen은 배열의 길이를 확인하기 위한 변수
    printf("정수형 배열 크기 : %zd\n", sizeof(arr));  // 4byte * 10
    printf("정수형 변수 크기 : %zd\n", sizeof(arrlen));  //4byte

    arrlen = sizeof(arr) / sizeof(arr[9]);
    printf("정수형 배열 길이 : %d\n", arrlen);

    for (int i = 0; i < arrlen; i++) {
        printf("arr[%d]번째 입력 : ", i); scanf_s("%d", &arr[i]);
    }
    for (int j = 0; j < arrlen; j++) {
        if (arr[j] % 2 == 0) {
            printf("%d\n",arr[j]);
            sum += arr[j];
        }
    }
    printf("1부터 10까지 합 : %d\n", sum);
}

09. 배열
9.2 1차원 배열
    - 실습
        : 길이가 5인 정수형 배열을 선언하고 총 5개의 정수를 입력받은 후 
        최대값과 최소값을 구하는 소스

#include <stdio.h>
void main() {
    int arr[5], max, min;

    for (int i = 0; i < 5; i++) {
        printf("정수값 arr[%d] : ", i); scanf_s("%d", &arr[i]);
    }
    max = min = arr[0];      // 최대값과 최소값을 판단하기 위한 기준값을 정의

    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("최대값(%d) | 최소값(%d)\n", max, min);
}

#include <stdio.h>
void main() {
    char str1[] = "C Language";   // 우항의 값이 들어올만큼 자동으로 크기 조절
    char str2[] = "Clang";

    printf("%s | %s\n", str1, str2);
    printf("배열의 str1의 크기 : %zdByte\n", sizeof(str1));    // 11Byte (문자10 + 1)
    printf("배열의 str2의 크기 : %zdByte\n", sizeof(str2));    // 6Byte  (문자5 + 1)

    for (int i = 0; i <= 5; i++) {
        printf("%c | %d\n", str2[i], str2[i]);  
        // 문자(문자열)은 맨 뒤에 '1Byte(NULL)'을 추가해주어야 한다.
        // 정수형은 문자의 아스키 코드 값이 출력된다.
    }
}
*/
#include <stdio.h>
void main() {
    char str[] = "C_Lang_Array";
    printf("문자열 출력 : %s\n", str);
    printf("주소값 출력 : %s\n", &s)
}
