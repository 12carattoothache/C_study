/*
8.3 for문
- 단일 for문
    : 초기식과 조건식, 증감식 생략에 따른 반복문

#include <stdio.h>
    void main() {
    // 초기식을 생략한 경우
    int a = 1;
    for (; a <= 3; a++) { // a가 이미 for문 밖에서 선언되어 있으므로 생략 가능
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // 조건을 생략한 경우
    int a = 1;
    for (a = 1; ; a++) { // 조건식이 생략되면 모두 참이기 때문에 무한 반복
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // 증감식을 생략한 경우
    int a = 1;
    for (a = 1; a <= 3;) { // 증감식이 생략되면 변수의 변화가 없으므로 무한 반복 
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // 초기식과 증감식이 생략된 경우
    int a = 1;
    for (; a <= 3; ;) { // 출력 시 증감식이 적용되기 때문에 정상 출력
        printf("a=%d\n", a++);
    }
}

#include <stdio.h>
void main() {
    char a, b;
    for (a = 'A', b = 'Z'; a <= 'Z'; a++, b--) {
        printf("%c%c", a, b);
    }
    printf("\n");
}
// 초기식, 증감식을 두 개 사용한 경우

실습 - 1부터 10까지 모든 정수들의 합을 구하는 소스
- 위의 예제에서 짝수들의 값과 합을 출력 / 홀수들의 값과 합을 출력

#include <stdio.h>
void main() {
    int i, sum = 0; // sum은 반드시 초기화
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("1부터 10까지의 합계 : %d\n", sum);
}

#include <stdio.h>
void main() {
    int i, sum1 = 0, sum2 = 0; // sum은 반드시 초기화
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum1 += i;
            printf("짝수 : %d\n", i);
        }
        if (i % 2 != 0) {
            sum2 += i;
            printf("홀수 : %d\n", i);
        }
    }
    printf("짝수들의 합계 : %d\n", sum1);
    printf("홀수들의 합계 : %d\n", sum2);
}

#include <stdio.h>
void main() {
    int i1, i2, sum1 = 0, sum2 = 0; // sum은 반드시 초기화
    for (i1 = 1; i1 <= 10; i1 += 2) {
        sum1 += i1;
    }
    for (i2 = 2; i2 <= 10; i2 += 2) {
        sum2 += i2;
    }
    printf("홀수들의 합계 : %d\n", sum1);
    printf("짝수들의 합계 : %d\n", sum2);
}

#include <stdio.h>
void main() {
    int a1,a2, b, sum1 = 0, sum2 = 0; 
    printf("값을 입력하세요 : "); scanf_s("%d", &b);
    for (a1=1; a1 <= b; a1 += 2) {
        sum1 += a1;
        printf("홀수 : %d\n", a1);
    }
    for (a2 = 2; a2 <= b; a2 += 2) {
        sum2 += a2;
        printf("짝수 : %d\n", a2);
    }
printf("1부터 %d까지의 홀수의 합 : %d\n", b, sum1);
printf("2부터 %d까지의 짝수의 합 : %d\n", b, sum2);
}

실습 - 1부터 100 사이의 숫자 중 7의 배수의 개수와 합을 구하는 소스

#include <stdio.h>
void main() {
    printf("a(n)은 7의 배수인 수열의 n번째 항 | s(n)은 a(n)의 n항까지의 총합.\n");
    int i, count=0, sum=0;
    for (i = 7; i <= 100; i += 7) {
        count += 1;
        sum += i;
        printf("a(%d) = %d\n", count, i);
    }
    printf("수열의 항의 개수 n : %d\n", count);
    printf("s(%d) : %d\n", count,sum);
}

실습 - 학생 10명의 점수(0~100)를 입력 받고 입력받은 점수의 평균, 
최고점수, 최저점수를 구하는 소스
*/
#include <stdio.h>
void main() {
    int c, v, max = 0, min = 100;  // c : 카운트(인원수), v : 받을 점수, max/min : 최대값/최소값
    double sum = 0; // sum : 평균을 구하기 위한 합계(평균을 소수점 아래 자릿수까지 표현하기 위해 실수형 표현)
    for (c = 1; c <= 10; c++) {
        printf("%d번 학생의 점수 : ", c); scanf_s("%d", &v);
        sum += v;
        if (max < v) {  // 먼저 값 한 개를 받아들임. 그 후의 숫자들을 한 번씩 비교하여 max 도출
            max = v;
        }
        if (min > v) {  // 먼저 값 한 개를 받아들임. 그 후의 숫자들을 한 번씩 비교하여 min 도출
            max = v;
            min = v;
        }
    }
    printf("합계 : %.0lf | 평균 : %.1lf\n", sum, sum / 10);
    printf("최고점수 : %d | 최저점수 : %d\n", max, min);
}