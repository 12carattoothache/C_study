/*
- �ǽ�
	: q, w, e���ڸ� �Է����� �� ������ ������ ��µǵ��� �ڵ��Ѵ�.

#include <stdio.h>
	void main() {
	char k;
	printf("���ڸ� �Է� : "); scanf_s("%c", &k, 1); //// k = getchar();
	switch (k) {
	case 'q': printf("q�� ����߽��ϴ�.\n"); break;
	case 'w': printf("w�� ����߽��ϴ�.\n"); break;
	case 'e': printf("e�� ����߽��ϴ�.\n"); break;
	default: printf("�ٸ� ���ڸ� ����߽��ϴ�.\n");
	}
}

- �ǽ�
	: �� ���� �Է¹��� �� ����ϴ� �ҽ�(��, ��ȣ�� �Է¹��� �� ����)

#include <stdio.h>
	void main() {
	int num1, num2;
	char sym;
	printf("���� 2���� �Է� : "); scanf_s("%d%d", &num1, &num2);
	printf("��ȣ�� �Է� : "); scanf_s("%c", &sym, 1);

	switch (sym) {
	case '+': printf("%d %c %d = %d", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d", num1, sym, num2, num1 / num2); break;
	default: printf("��Ģ������ ��ȣ�� �ٽ� �Է��ϼ���.\n");
	}
}
//// �ҽ��ڵ� ��ü���� ������ ����, but sym�� ���� �Է��� �� x

#include <stdio.h>
int main() {
	int num1, num2;
	char sym;
	printf("���� 1���� �Է� : "); scanf_s("%c", &sym, 1);
	// switch���� ����� �� ������ ���� ���� switch�� ���� ���� ������ �Է¹޾ƾ� �Ѵ�.
	printf("���� 2���� �Է�: "); scanf_s("%d%d", &num1, &num2);
	switch (sym) {
	case '+': printf("%d %c %d = %d\n", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d\n", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d\n", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d\n", num1, sym, num2, num1 / num2); break;
	default: printf("��Ģ������ ��ȣ�� �ٽ� �Է��ϼ���.\n");
	}
	return 0;
}

#include <stdio.h>
void main() {
	int num1, num2;
	char sym;
	printf("��ȣ�� �Է� : "); scanf_s("%c", &sym, 1);
	printf("���� 2���� �Է� : "); scanf_s("%d%d", &num1, &num2);

	switch (sym) {
	case '+': printf("%d %c %d = %d\n", num1, sym, num2, num1 + num2); break;
	case '-': printf("%d %c %d = %d\n", num1, sym, num2, num1 - num2); break;
	case '*': printf("%d %c %d = %d\n", num1, sym, num2, num1 * num2); break;
	case '/': printf("%d %c %d = %d\n", num1, sym, num2, num1 / num2); break;
	default: printf("��Ģ������ ��ȣ�� �ٽ� �Է��ϼ���.\n");
	}
}
// void�Լ��� ����ص� �Ȱ��� �����ϴ�.

08. ���
8.2 switch ~ case��
   - �ǽ�(���������� ��������)

#include <stdio.h>
void main() {
	int n, num;   // ���� ����
	printf("���� �Է� : "); scanf_s("%d", &num);
	switch (num) {
	case 1 :
		// int n;      // �������� 
		// ����� �ƴ����� ���� ������ switch �ۿ���(��� ��) �����Ѵ�.
		printf("������ �Է� : "); scanf_s("%d", &n);
		if (n) {
			printf("%d�� 0�� �ƴ� ���̹Ƿ� ���ǽ��� ���̴�.\n", n);
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

- �ǽ� : �Է°��� Ÿ�Կ� ���� �����ؾ� �Ѵ�.
#include <stdio.h>
void main() {
	int sub;  // �Է°��� ������ ��� 
	printf("1_Clang | 2_Python : "); scanf_s("%d", &sub);
	switch (sub) {
	case 1:
		printf("C Language\n"); break;
	case 2:
		printf("Python\n"); break;
	default:
		printf("�ٽ� �����ϼ���\n"); break;
	}
}

#include <stdio.h>
void main() {
	char sub;  // �Է°��� ������ ��� 
	printf("Clang | Python : "); scanf_s("%c", &sub,1);
	switch (sub) {
	case 'C':
	case 'c':
		printf("C Language\n"); break;
	case 'P':
	case 'p':
		printf("Python\n"); break;
	default:
		printf("�ٽ� �����ϼ���\n"); break;
	}
}


#include <stdio.h>
void main() {
	int sub;  // �Է°��� ������ ��� 
	printf("������ �Է� : "); scanf_s("%d", &sub);
	switch (sub % 2) { // ������ ���� ������ �͵� �ȴ�.
	case 0: printf("¦���̴�!\n"); break
	case 1:
		printf("Ȧ���̴�!\n"); break;
	default:
		printf("�ƹ��͵� �ƴϴ�....\n"); break;
	}
}
*/