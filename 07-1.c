/*
08. 제어문(조건에 따라서 실행 순서를 결정) - if문
    - 1. 단순 if문(if ~ else문)
	    : 개요
		    ; 조건식을 판단해서 참이면 if의 '종속문장'을 실행하고 거짓이면 else의 '종속문장'을 실행
	    : 문법
		    ; if(조건식) {
			    종속문장;
			}
			else {
			    종속문장;
		: 실습
		    ; 정수 1개를 입력받은 후 조건식이 참인지 거짓인지 판단하는 소스 

#include <stdio.h>
void main() {
	int n1;
	printf("정수 1개 입력 : "); scanf_s("%d", &n1);
	if (n1) {
		printf("n1의 값이 존재하므로 조건식은 참.\n");
		}
	else {
		printf("n1의 값이 0이므로 조건식은 거짓.\n");
	}
}
 
- 실습:
    ; 정수 1개를 입력받은 후 조건식이 크기를 판단하는 소스

#include <stdio.h>
void main() {
	int n1, n2, max, min;
	printf("정수 2개 입력 : "); scanf_s("%d%d", &n1, &n2);
	if (n1 > n2) {
		max = n1, min = n2;
		printf("%d가 %d보다 크다.\n", max, min);
	}
	if (n1 < n2) {
		max = n2, min = n1;
		printf("%d가 %d보다 크다.\n", max, min);
	}
}

- 실습:
    ; 정수 1개를 입력받은 후 짝수, 홀수를 판단하는 소스
#include <stdio.h>
void main() {
	int n1;
	printf("정수 1개 입력 : "), scanf_s("%d", &n1);
	if (n1 % 2 == 0) {
		printf("%d는 짝수이다.\n", n1);
	}
	else {
		printf("%d는 홀수이다.\n", n1);
	}
}

- 실습 : 숫자 하나를 받아들인 후 다음의 조건으로 출력하는 소스(0~10 사이의 숫자)
           ; 조건
		       - 5보다 크면 '크다'를
			   - 5보다 작으면 '작다'를
			   - 그렇지 않으면 '크지도 작지도 않다'를 출력

#include <stdio.h>
void main() {
	int num; 
	printf("숫자를 입력하세요 : "); scanf_s("%d", &num);

	if (num > 5) {
		printf("크다\n");
	}
	if (num < 5) {
		printf("작다\n");
	}
	if (num <= 5 && num >= 5) {
		printf("크지도 작지도 않다\n");
	}
}
    - 2. 중첩 if문
	    : 개요
		    ; if문 안에 if문을 사용한 것을 말한다.
			; 첫 번째 조건식을 만족했을 때 해당 조건식의 결과를 세분화할 때 사용
        : 문법
            if(조건식1) { 
			    종속문장; (조건식1이 참이면 실행)
			        if (조건식2) {
					    종속문장; (조건식1,2가 모두 참이면 실행)
					}
					else {
					    종속문장; (조건식1만 참이면 실행)
					}
			}
			else {
			    종속문장; (조건식1이 거짓이면 실행)
				....
			}


- 실습
    ; 주어진 값이 양수와 음수일 경우 각각 분기를 하고,
	; 그 안에서 짝수, 홀수를 구분



#include <stdio.h>
void main() {
	int value;
	printf("숫자를 입력하세요 : "); scanf_s("%d", &value);
	if (value > 0) {
		printf("plus | ");
		if (value % 2 == 0) {
			printf("짝수\n");    // 중첩
		}
		else {
			printf("홀수\n");
		}
	}
	if (value < 0) {
		printf("minus | ");
		if (value % 2 == 0) {
			printf("짝수\n");    // 중첩
		}
		else {
			printf("홀수\n");
		}
	}
	if (value == 0) {
		printf("zero | 짝수\n");
	}
}

    - 3. 다중 if문
	    : 문법
		    if(조건식1) {
			    조건식1이 참이면 실행;
			}
			else if(조건식2) {
			    조건식1이 거짓이고 조건식2가 참이면 실행;
			}
			else {
			    위의 어떤 조건식도 참이 아니면 실행;
			}

#include <stdio.h>
void main() {
	int num;
	printf("숫자를 입력하세요 : "); scanf_s("%d", &num);

	if (num > 5) {
		printf("크다\n");
	}
	else if (num < 5) {
		printf("작다\n");
	}
	else {
		printf("크지도 작지도 않다\n");
	}
}

#include <stdio.h>
void main() {
	int num = 15;
	if (num > 10) {
		printf("10보다 큰 수\n");
	}
	else if (num > 20) {
		printf("20보다 큰 수\n");
	}
	else if (num > 30) {
		printf("30보다 큰 수\n");
	}
	else {
		printf("...\n");
	}
}
*/
#include <stdio.h>
void main() {
	// 2차원 배열 선언
	int arr[2][3];    // arr은 6개의 정수를 받아들이는 배열(변수)을 선언
					  // 2차원 배열도 항상 0번째 인덱스(0행 0열)부터 시작
					  // 각 인덱스별 출력 내용 확인을 위한 누적 변수
	int n = 0;
	for (int i = 0; i <= 1; i++) { // 2행(0,1)
		for (int j = 0; j <= 2; j++); { // 3열(0,1,2)
			arr[i][j] = ++n;
			printf("[%d]행 [%d]열 = %d\n", i, j, arr[i][j]);
		}
	}
}
