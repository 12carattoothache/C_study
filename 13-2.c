/*
-time(NULL)
    : 개요
    ; 1970년 1월 1일 0시 0분 0초부터 현재까지 흐른 초 수를 반환한다.
    ; 이 함수는 'time.h'에 내장된 함수
    ; 시간을 난수 형태로 표현 : strand(time(NULL))
    
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    void main() {
    int num;
    srand(time(NULL));
    while (1) {
        printf("%lld\n", time(NULL));
        //num = rand();
        //num = rand() % 10;    // 0 ~ 9까지의 임의의 값이 무작위로 출력
        num = rand() % 10 + 1;  // 1 ~ 10까지의 임의의 값이 무작위로 출력
        printf("난수 : %d\n", num);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    int a;
    int chance = 10;
    int res = (rand() % 100 + 1); //1 ~ 100까지 랜덤한 숫자
    printf("RES : %d\n", res);
    while (1) {
        printf("숫자를 입력 : "); scanf_s("%d", &a);
        if (1 <= a && a <= 100) {
            if (chance == 0) {
                printf("기회가 끝났습니다.\n");
                break;
            }
            else if (a == res) {
                printf("정답 : %d\n", a);   
            }
            else if (a > res) {
                printf("입력한 값보다 높습니다.\n");
            }
            else if (a < res) {
                printf("입력한 값보다 낮습니다.\n");
            }
            chance--;
            printf("기회는 총 %d번 남았습니다.\n", chance);
            printf("\n");
        }
        else if (a == 0) {
            printf("프로그램을 종료합니다.\n");
            break;  // 프로그램 종료
        }
        else {
            printf("잘못 입력했습니다.\n");
            printf("기회는 그대로 총 %d번 남았습니다.\n", chance);
            printf("\n");
        }
    }
}

09. 배열
9.1 개요
- 배열은 동일한 자료형의 데이터를 연속적으로 저장할 수 있는 기억 공간을 말한다.
- 다수의 데이터를 저장하고 사용해야 할 경우에 유용하다.
- 데이터는 쉼표(,)로 구분합니다.  ex) {사과, 귤, 배}
- 선언 부분의 배열 크기와 데이터 개수가 같아야 한다.
- 배열의 크기나 데이터는 생략 할 수 있지만 두 개를 한 번에 생략할 수는 없다.
- 배열에 저장된 데이터는 번호가 정해져 있는 방에 각각 들어가게 된다. (방 번호는 0번부터 시작)
- 배열에 저장된 데이터를 불러오기 위해서는 데이터가 저장된 방 번호를 불러오면 된다.

9.2 1차원 배열
    - 문법
        <자료형> <배열명>[길이] = {배열값};  // 배열명 선언
        int arr[3]= {1,2,3};
    - 실습
*/
#include <stdio.h>
void main() {
    int arr1[3];               // 정수형 길이 3개 선언
    int arr2[3] = { 1,2,3 };   // 정수형 값 3개 초기화
    int arr3[3] = { 10 };      // 선언한 갯수보다 값의 개수가 적으면 오류 x
    //int arr4[2] = { 1,2,3 }; // 선언한 갯수보다 값의 개수가 많으면 오류
    int arr5[] = { 1,2,3,4 };  // 초기화 갯수를 생략할 경우 좌항의 값이 채워짐

    char str1[10] = { "Clang" };
    char str2[] = "Clang";
}