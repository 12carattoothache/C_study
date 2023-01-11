/*
실습 : 1 ~ 100까지의 수 중에서 3과 5의 공배수의 개수를 구하는 소스
#include <stdio.h>
void main() {
    int i = 1, count = 0;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            count++;
            printf("i(%d) = %d\n", count, i);
        }
        i++; // i가 1부터 계속 증가하게 해줘야한다.
    }
    printf("3과 5의 공배수의 개수 : %d\n", count);
}

- 실습 : 1 ~1000까지의 합을 구하는데 3의 배수는 제외하고
3과 5의 공배수는 포함하는 합과 이의 개수를 구하는 소 스


#include <stdio.h>
void main() {
    int i = 1, count = 0, count1 = 0, count2 = 0, sum = 0, sum1 = 0, sum2 = 0;
    while (i <= 1000) {
        sum += i;
        count++;
        if (i % 3 == 0 && i % 5 != 0) {
            count1++;
            printf("i(%d) = %d\n", count1, i);
            sum1 += i;
        }
        i++;
    }
    sum2 = sum - sum1;
    count2 = count - count1;
    printf("합 : %d | 개수 : %d\n", sum2, count2);
}

#include <stdio.h>
void main() {
    int i = 1, count = 0, count1 = 0, count2 = 0, sum = 0, sum1 = 0, sum2 = 0;
    for (i; i <= 1000; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                count1++;
                sum1 += i;    // 3과 5의 공배수의 합
                printf("3과 5의 공배수의 합 : %d | 개수 : %d\n", sum1, count1);
            }
            count2++;
            sum2 += i; // 3의 배수의 합
            printf("3의 배수의 합 : %d | 개수 : %d\n", sum2, count2);
        }
        count++;
        sum += i;
    }
    printf("조건에 맞는 합 : %d | 개수 : %d\n", (sum - sum2 + sum1), (count - count2 + count1));
}

- 실습
    : 1000원을 전부 사용하기까지 걸리는 날짜를 찾는 소스
    : 단.첫 날에는 100원을 사용하고 다음날부터는 전날의 2배씩 사용한다.
    
#include <stdio.h>
    void main() {
    int money = 1000, cost = 100, day = 0;    // 가진 돈, 쓰는 금액, 날짜
    while (money >= 0) {
        money -= cost;
        day++;
        printf("%d일 후 사용 금액 : %d원 | 남은 금액 : %d원\n", day, cost, money);
        cost *= 2;
    }
    printf("걸리는 날짜 : %d일\n", day);
}

8.5 do ~ while문
    - 개요
        : while문과 사용법이 동일하다.
        : 차이점은 조건식을 비교하기 전에 먼저 do문항 뒤에 있는 명령을 실행하고
          조건을 판단한다.
        : while문항의 조건과 관계없이 do 문항에 있는 명령문은 한 번만 실행된다.
    - 문법
        초기식
        do {
            명령문;
        }
        while(조건식); 

- 실습

#include <stdio.h>
void main() {
    int x;
    for (x = 1; x <= 10; x++) {
        printf("%d\n", x);
    }
}

#include <stdio.h>
void main() {
    int x=1 ;
    while (x <= 10) {
        printf("%d\n", x++);   // 선연산 후증가 원리 이용
    }
}
*/
#include <stdio.h>
void main() {
    int x = 1;
    do {
        printf("%d\n", x++);
    } while (x <= 10);
}