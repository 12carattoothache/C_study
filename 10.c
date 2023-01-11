/*
08. 제어문(조건에 따라서 실행 순서를 결정)
8.3 for문
    - 다중 for문
        : 문법
            for(초기식1; 조건식1; 증감식1) {
                반복할 명령문1;
                for(초기식2; 조건식2; 증감식2) {
                    반복할 명령문2;
                }
                반복하려는 문장;
            }

#include <stdio.h>
void main() {
    int i, j, count=1; // 0으로 지정하는 경우는 누적 연산자를 사용할 때. 
                       // 여기서 count는 누적 연산자를 사용하지 않으므로 1로 지정.
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            printf("i = %d | j = %d | count = %d\n", i, j, count);
            count++;
        }
    }
}

#include <stdio.h>
void main() {
    int i, j, count = 0; 
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            count++;
            // 초기값이 0인 경우는 이 구문을 만나면 하나가 증가된다.
            // 그런 후에 하단의 count로 출력하면 '1'이 나온다.
            printf("i = %d | j = %d | count = %d\n", i, j, count);
        }
    }
}

#include <stdio.h>
void main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
}
- 실습
    ; 남편과 아내의 나이는 1~100살까지이다.
    ; 남편과 아내의 나이의 합은 75살이고
    ; 남편과 아내의 나이의 곱은 1400살이다.
    ; 아내보다 남편의 나이가 더 많다고 할 때
    ; 남편과 아내의 나이는 각 몇 살인지 찾아내는 프로그램을 코딩하세요.
    ; 단, 남편과 아내의 나이는 10살을 넘지 않는다.

#include <stdio.h>
void main() {
    int x, y;
    for (x = 1; x <= 100; x++) {
        for (y = 1; y <= 100; y++) {
            if (x + y == 75) {
                if (x * y == 1400) {
                    if (x > y) {
                        printf("남편의 나이(%d) | 아내의 나이(%d)\n", x, y);
                    }
                }
            }
        }
    }
}

- 실습: 구구단

#include <stdio.h>
void main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
}
- 실습 : 첫 날에 1원을 예금하고 다음날부터 전날의 2배를 예금하는 방식으로
한 달(30일) 동안 저축한 금액은?
*/
#include <stdio.h>
void main() {
    int day = 1, won = 1, save = 1;  // x일차 카운트, 일일 저축액, 총저축액
    for (day; day <= 30; day++) {
        printf("%d일차 | 저축금액(%d) | 총 저축액(%d)\n", day, won, save);
        // 문구의 순서에 따라 출력에 상당한 영향
        won *= 2;
        save += won;
    }
    printf("\n%d원\n", save);
}

