/*
* - 실습 : 다음과 같은 조건에 맞는 출력을 위한 소스
    : 0 < 받아들인 수 <= 10    '0보다 크고 10보다 작거나 같다'를,
	: 0 > 받아들인 수          '0보다 크다'를
	: 0 < 받아들인 수          '0보다 작다'를 출력

#include <stdio.h>
void main() {
	int num;
	printf("값 입력 : "); scanf_s("%d", &num);
    if (num > 0 && num <= 10) {
		printf("0보다 크고 10보다 작거나 같다.\n");
	}
	if (num > 0) {
		printf("0보다 크다.\n");
	}
	else if (num < 0) {
		printf("0보다 작다.\n");
	}
	else {
		printf("0보다 크지도 작지도 않다.\n");
	}
}

- 실습 : 다음과 같은 조건에 맞는 출력을 위한 소스
	: 0 < 받아들인 수 <= 10    '0보다 크고 10보다 작거나 같다'를,
	: 10 > 받아들인 수         '10보다 크다'를
	: 0 =< 받아들인 수         '0보다 작거나 같다'를 출력

#include <stdio.h>
void main() {
	int num;
	printf("값 입력 : "); scanf_s("%d", &num);
	if (num > 10) {
		printf("10보다 크다.\n");
	}
	else if (num <= 0) {
		printf("0보다 작거나 같다.\n");
	}
	else {
		printf("0보다 크고 10보다 작거나 같다\n");
	}
} 

    - if문 종합예제 
	    ; 받아들인 수가 3의 배수인지 5의 배수인지를 구분하는 소스
		; 출력은 다음과 같다.
		    - 3과 5의 공배수이면     '?는 3과 5의 공배수이다.'를
			- 3의 배수이면           '?는 3의 배수이다.'를
			- 5의 배수이면           '?는 5의 배수이다.'를
			- 3과 5의 배수가 아니면  '?는 3과 5의 배수가 아니다.'를 출력

#include <stdio.h>
void main() {  
	// 다중 if문 사용 
	int num; 
	printf("수를 입력하세요 : "); scanf_s("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("%d는 3과 5의 공배수이다.\n", num);
	}
	else if (num % 3 == 0 && num % 5 != 0) {
		printf("%d는 3의 배수이다.\n", num);
	}
	else if (num % 3 != 0 && num % 5 == 0) {
		printf("%d는 5의 배수이다.\n", num);
	}
	else {
		printf("%d는 3과 5의 배수가 아니다.\n", num);
	}
} 

#include <stdio.h>
void main() {
	// if문 사용(if~else)
	int num;
	printf("수를 입력하세요 : "); scanf_s("%d", &num);

	if (num % 3 == 0) {
		printf("%d는 3의 배수이다.\n", num);
		if (num % 5 == 0) {
			printf("%d는 3과 5의 공배수이다.\n",num);
		}
		else {
			printf("%d는 3의 배수지만 5의 배수는 아니다.\n", num);
		}
	}
	else {
		printf("%d는 3의 배수가 아니다.\n", num);
		if (num % 5 != 0) {
			printf("%d는 3의 배수도 아니고 5의 배수도 아니다.\n",num);
		}
		else {
			printf("%d는 3의 배수가 아니지만 5의 배수이다.\n", num);
		}
	}

}

#include <stdio.h>
void main() {
	// 중첩 if문 사용
	int num;
	printf("정수를 입력 : "); scanf_s("%d", &num);
	if (num % 3 != 0 && num % 5 != 0) {
		printf("%d는 3의 배수도 아니고 5의 배수도 아니다.\n",num);
	}
	else {
		if (num % 3 == 0) {
			if (num % 5 == 0) {
				printf("%d는 3과 5의 공배수이다.\n", num);
			}
			else {
				printf("%d는 3의 배수이다.\n",num);
			}
		}
		else {
			printf("%d는 5의 배수이다.\n", num);}
	}
}
    if문 종합예제
	    - 3개 과목의 값을 받아들인 후 평균값을 구하고 다음과 같은 배점을 부여
		- 배점 부여 방식
		    ; 70점 이상은 '합격입니다.'를
			; 60~69점 사이면 '미달입니다. 분발하세요.'를
			; 60점 미만은 '불합격입니다. 재수강하세요.'를 출력

#include <stdio.h>
void main() {
	int v1, v2, v3;
	printf("정수 3개를 입력 : "); scanf_s("%d%d%d", &v1, &v2, &v3);
	double avg = (v1 + v2 + v3) / 3;
	printf("평균값 = %.1lf\n", avg);
	if (0.00 <= avg && avg <= 100.00) {
		if (avg >= 70) {
			printf("합격입니다.\n");
		}
		else if (60 <= avg) {
			printf("미달입니다. 분발하세요.\n");
		}
		else {
			printf("불합격입니다. 재수강하세요.\n");
		}
	}
	else {
		printf("값이 잘못되었습니다.\n");
	}
} 
    - 실습 : 69.5점을 정수 부분과 소수 부분으로 분리하는 소스

#include <stdio.h>
void main() {
	float a = 69.5;
	int b = 69;
	float c = a - b;
	printf("%d\n%.1f\n", b, c);

#include <stdio.h>
void main() {
	double a = 69.5;
	int b = (int)a;   // cast연산을 통해 소수를 강제로 정수로 변환
	double c = 69.5 - b;
	printf("%d\n%.1lf\n", b, c);
}
*/

