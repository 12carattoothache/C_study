/*
08. 제어문(조건에 따라서 실행 순서를 결정) -if문
    - 3. 다중 if문
	    : if문 종합예제

-실습 : 69.5점을 정수 부분과 소수 부분으로 분리하는 소스

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


#include <stdio.h>
		void main() {
		int time, money = 3000;
		printf("말을 탄 시간(분) : "); scanf_s("%d", &time);
		if (time > 0) {
			if (0 < (time -= 30)) {   /// 여기서부터 time - 30이 time값으로 적용
				if (time % 10 == 0) {
					money = money + time / 10 * 500;
				}
				else {   //// time과 10이 정수형이므로 연산을 하면 정수(몫)만 출력
					money = money + time / 10 * 500 + 500;
				}
			}
			printf("%d원입니다.\n", money);
		}
		else {
			printf("말을 타지 않았으므로 돈을 내지 않습니다.\n");
		}
	}
	//// 즉, 30분까지는 기본금 3000원만 내고, 이를 초과하면 추가 이용시간 10분당 500원씩 추가하는 소스.
	//// ex) 41분은 4000원, 60분은 4500원


#include <stdio.h>
void main() {
	int num, money = 0;
	printf("주문할 도시락 갯수 : "); scanf_s("%d", &num);
	if (num > 10) {
		money += 25000 + (num - 10) * 2400;
	}
	else if (num > 0 && num <= 10) {
		money = num * 2500;
	}
	else {
		printf("도시락을 시키지 않았으므로 0원입니다.\n");
	}
	printf("%d원입니다.\n", money);
}
    //// 즉, 도시락 10개까지는 하나당 2500원, 이를 초과하면 하나당 2400원
08. 제어문(조건에 따라서 실행 순서를 결정) - if문
    - 3. 다중 if문
	   : if문 종합예제
	       - 디스켓 1통에 5000원한다. 
		   그런데 한통에 10통 이상을 사면 전체 금액의 10%를 할인하여 준다.
		   그리고 100통 이상을 사면 전체 금액의 12%를 할인하여 준다.
		   디스켓의 개수를 입력받고 가격을 출력하는 소스를 만들어라.

#include <stdio.h>
void main() {
	int num, money;  //// money가 누적되는 값이 아니므로 초기값 설정 필요 x
	printf("몇 통의 디스켓을 구매할거니? : "); scanf_s("%d", &num);
	if (num > 0) {
		if (num < 10) money = num * 5000;
		else if (num >= 10 && num < 100) money = (num * 5000) * 9 / 10;
		else money = (num * 5000) * 88 / 100;
	}
	printf("가격은 %d원입니다.\n", money);
} 
//// 같은 구조의 조건식 여러개가 병렬적으로 나오면 이렇게 {}를 생략하고 사용하기도 한다.
08. 제어문(조건에 따라서 실행 순서를 결정)
8.2 switch ~ case문
    - 개요 
	    : 입력값과 동일한 값을 가진 case의 구문 및 이후 명령을 실행
		: 즉, switch문 안에 있는 값과 정확하게 일치되는 case값을 찾아서 실행
		: 'break'문을 통해 해당 명령을 독립적으로 실행 
		: switch값에는 변수를 이용한 값을 입력해서 사용
	- 문법
	    switch(식) {
		    case 상수값1:
			    실행코드;
				break;

			case 상수값2:
			    실행코드;
				break;

			....
			default:        // 위에 일치하는 case가 없을 때 실행
			    실행코드;
				break;
		}

#include <stdio.h>
void main() {
	int num = 1;
	switch (num) {
	case 1:
		printf("출력1\n");
		break;
	case 2:
		printf("출력2\n");
		break;
	default:
		printf("출력3\n");
		break;	    
	}
}

#include <stdio.h>
void main() {
	int num; 
	printf("==================================================\n");
	printf("1. KG\n");
	printf("2. IT\n");
	printf("3. Bank\n");
	printf("4. Samadal\n");
	printf("==================================================\n");
	printf("값 입력 : "); scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("KG\n");
		break;
	case 2:
		printf("IT\n");
		break;
	case 3:
		printf("Bank\n");
		break;
	case 4:
		printf("Samadal\n");
		break;
	}
}
// 해당하는 값으로 바로 이동 - 메뉴에 관련된 것을 코딩할 때 좋음
*/
#include <stdio.h>
void func() {
	printf("함수 func()를 호출해서 반환\n");
	return;
}

void main() {
	func();
}