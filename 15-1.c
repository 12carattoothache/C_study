/*
09. 배열
9.2 1차원 배열
    - 실습
        : 문자열 배열

#include <stdio.h>
void main() {
    char str[] = "C_Lang_Array";
    printf("문자열 출력 : %s\n", str); 
    printf("주소값 출력 : %s\n", &str[0]);
    // 배열명은 항상 배열의 인덱스[0]번째를 가리키고 있는 주소값을 지정

    printf("NULL 문자 : %c | %d\n", str[12], str[12]);   // 없음, 0
    printf("NULL 문자 : %s | %d\n", str[12], str[12]);   // NULL, 0

    char nu = '\0';    // NULL
    char spb = ' ';    // 공백(Space)

    printf("%c | %c\n", nu, spb);     // 문자의 모양은 동일하게 출력되지만
    printf("%d | %d\n", nu, spb);     // 서로 다른 값(0,32)이 출력된다.(아스키코드)
                                      // 따라서 NULL과 Space는 다른 문자이다
    printf("%s\n", str);
    str[7] = 'a';
    printf("%s\n", str);
}    

#include <stdio.h>
void main() {
    char str[50] = "I need Programming";
    printf("문자열 : %s | 크기 : %zdB\n", str, sizeof(str));

    printf("문자(%c) | 숫자(%d) | NULL(%d)\n", str[17], str[17], str[18]);
    printf("%c | %d\n", str[40], str[40]);
    // 18부터 50까지는 모두 NULL이다.
    // NULL은 문자로서는 빈 공백, 숫자로서는 0이 출력된다.
}

- 실습
    : NULL을 뺀 문자열 길이(갯수) 확인 - strlen(문자열)

#include <stdio.h>
void main() {
    char str1[] = "Clang";
    printf("문자열 길이 : %d\n", strlen(str1));
    printf("문자열 크기 : %zd\n", sizeof(str1));  // NULL을 포함하여 6

    char str2[20] = "";
    printf("문자열 입력 : "); scanf_s("%s", str2, sizeof(str2));
    printf("문자열 출력 : %s\n", str2);
    printf("문자열 길이 : %d\n", strlen(str2));
}
09. 배열
9.3 다차원 배열
    - 개요
        : 1차원 배열
            int arr[3];    => 갯수 3개(1,2,3)를 가진 1차원
        : 2차원 배열
            int arr[3][2]  => 행(가로) 3개, 열(세로) 2개
            // 3행 2열
        : 3차원 배열
            int arr[3][3][3]

#include <stdio.h>
void main() {
    // 1. 2차원 배열 선언
    int arr[2][3];    // arr은 6개의 정수를 받아들이는 배열(변수)을 선언
                      // 2차원 배열도 항상 0번째 인덱스(0행 0열)부터 시작
                      // 각 인덱스별 출력 내용 확인을 위한 누적 변수
    int n = 0;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 2; j++) {
            arr[i][j] = ++n;
            printf("[%d]행 [%d]열 = %d번째로 데이터가 저장될 위치.\n", i, j,arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 2. 2차원 배열 초기화(값을 대입)
    int arr[2][3] = {0,1};
    for (int i = 0; i < 3, i++) { // 1, 2를 출력 후 남은 공간 1개는 0으로 채워짐.
        printf("%d\n", arr[i]);
    }
}

#include <stdio.h>
void main() {
    // 2. 2차원 배열 초기화(값을 대입)
    int arr[2][3] = { {3,7,1} , {4,9,2} }; // 크기 가 전부 채워진 경우(정상)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
         }
    }
}

#include <stdio.h>
void main() {
    // 2. 2차원 배열 초기화(값을 대입)
    int arr[2][3] = { {3,7,1} , {4,9, } }; // 초기값 일부 생략
    for (int i = 0; i < 2; i++) {          // 크기 중 비어 있는 공간을 0으로 채움
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 2. 2차원 배열 초기화(값을 대입)
    int arr[2][3] = { 1,2,3,4 };           // 행을 생략
    for (int i = 0; i < 2; i++) {         
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 3. 2차원 배열의 잘못된 표현
    // 3행 2열
    // int arr1[2][3] = { {1,2}, {3,4}, {5,6} }; 
    
    // 행(위치)은 생략해도 되지만 열(값)은 생략하면 오류 발생
    // int arr2[][] = { {1,2,3}, {4,5,6} };
    // int arr3[2][] = { {1,2,3}, {4,5,6} };

    int arr4[][3] = { 1,2,3,4,5,6,7 };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr4[i][j]);
        }
    }
}
*/
