/*
- 실습
	: q, w, e문자를 입력했을 때 임의의 내용이 출력되도록 코딩한다.

#include <stdio.h>
	void main() {
	char k;
	printf("문자를 입력 : "); scanf_s("%c", &k, 1); //// k = getchar();
	switch (k) {
	case 'q': printf("q를 출력했습니다.\n"); break;
	case 'w': printf("w를 출력했습니다.\n"); break;
	case 'e': printf("e를 출력했습니다.\n"); break;
	default: printf("다른 글자를 출력했습니다.\n");
	}
}

- 실습
	: 두 수를 입력받은 후 계산하는 소스(단, 기호를 입력받은 후 진행)

#include <stdio.h>
	void main() {
	int num1, num2;
	char sym;
	printf("정수 2개를 입력 : "); scanf_s("%d%d", &num1, &num2);
	printf("기호를 입력 : "); scanf_s("%c", &sym, 1);

	switch (sym) {
	case '+': printf("%d %c %d = %d", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d", num1, sym, num2, num1 / num2); break;
	default: printf("사칙연산의 기호를 다시 입력하세요.\n");
	}
}
//// 소스코드 자체에는 문제가 없음, but sym의 값을 입력할 수 x

#include <stdio.h>
int main() {
	int num1, num2;
	char sym;
	printf("문자 1개를 입력 : "); scanf_s("%c", &sym, 1);
	// switch문을 사용할 때 변수가 여러 개면 switch에 직접 들어가는 변수를 입력받아야 한다.
	printf("정수 2개를 입력: "); scanf_s("%d%d", &num1, &num2);
	switch (sym) {
	case '+': printf("%d %c %d = %d\n", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d\n", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d\n", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d\n", num1, sym, num2, num1 / num2); break;
	default: printf("사칙연산의 기호를 다시 입력하세요.\n");
	}
	return 0;
}

#include <stdio.h>
void main() {
	int num1, num2;
	char sym;
	printf("기호를 입력 : "); scanf_s("%c", &sym, 1);
	printf("문자 2개를 입력 : "); scanf_s("%d%d", &num1, &num2);

	switch (sym) {
	case '+': printf("%d %c %d = %d\n", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d\n", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d\n", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d\n", num1, sym, num2, num1 / num2); break;
	default: printf("사칙연산의 기호를 다시 입력하세요.\n");
	}
}
// void함수를 사용해도 똑같이 가능하다.

08. 제어문
8.2 switch ~ case문
   - 실습(전역변수와 지역변수)

#include <stdio.h>
void main() {
	int n, num;   // 전역 변수
	printf("값을 입력 : "); scanf_s("%d", &num);
	switch (num) {
	case 1 :
		// int n;      // 지역변수 
		// 오루는 아니지만 변수 선언은 switch 밖에서(제어문 밖) 선언한다.
		printf("정수를 입력 : "); scanf_s("%d", &n);
		if (n) {
			printf("%d는 0이 아닌 참이므로 조건식은 참이다.\n", n);
	}
		break;
	case 2 :
		printf("IT\n");
		break;
	default :
		printf("BANK\n");
		break;
	}
}

- 실습 : 입력값은 타입에 따라 결정해야 한다.
#include <stdio.h>
void main() {
	int sub;  // 입력값이 숫자인 경우 
	printf("1_Clang | 2_Python : "); scanf_s("%d", &sub);
	switch (sub) {
	case 1:
		printf("C Language\n"); break;
	case 2:
		printf("Python\n"); break;
	default:
		printf("다시 선택하세요\n"); break;
	}
}

#include <stdio.h>
void main() {
	char sub;  // 입력값이 문자인 경우 
	printf("Clang | Python : "); scanf_s("%c", &sub,1);
	switch (sub) {
	case 'C':
	case 'c':
		printf("C Language\n"); break;
	case 'P':
	case 'p':
		printf("Python\n"); break;
	default:
		printf("다시 선택하세요\n"); break;
	}
}


#include <stdio.h>
void main() {
	int sub;  // 입력값이 문자인 경우 
	printf("정수를 입력 : "); scanf_s("%d", &sub);
	switch (sub % 2) { // 변수의 값은 수식이 와도 된다.
	case 0: printf("짝수이다!\n"); break
	case 1:
		printf("홀수이다!\n"); break;
	default:
		printf("아무것도 아니다....\n"); break;
	}
}
*/