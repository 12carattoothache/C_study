/*
* - �ǽ� : ������ ���� ���ǿ� �´� ����� ���� �ҽ�
    : 0 < �޾Ƶ��� �� <= 10    '0���� ũ�� 10���� �۰ų� ����'��,
	: 0 > �޾Ƶ��� ��          '0���� ũ��'��
	: 0 < �޾Ƶ��� ��          '0���� �۴�'�� ���

#include <stdio.h>
void main() {
	int num;
	printf("�� �Է� : "); scanf_s("%d", &num);
    if (num > 0 && num <= 10) {
		printf("0���� ũ�� 10���� �۰ų� ����.\n");
	}
	if (num > 0) {
		printf("0���� ũ��.\n");
	}
	else if (num < 0) {
		printf("0���� �۴�.\n");
	}
	else {
		printf("0���� ũ���� ������ �ʴ�.\n");
	}
}

- �ǽ� : ������ ���� ���ǿ� �´� ����� ���� �ҽ�
	: 0 < �޾Ƶ��� �� <= 10    '0���� ũ�� 10���� �۰ų� ����'��,
	: 10 > �޾Ƶ��� ��         '10���� ũ��'��
	: 0 =< �޾Ƶ��� ��         '0���� �۰ų� ����'�� ���

#include <stdio.h>
void main() {
	int num;
	printf("�� �Է� : "); scanf_s("%d", &num);
	if (num > 10) {
		printf("10���� ũ��.\n");
	}
	else if (num <= 0) {
		printf("0���� �۰ų� ����.\n");
	}
	else {
		printf("0���� ũ�� 10���� �۰ų� ����\n");
	}
} 

    - if�� ���տ��� 
	    ; �޾Ƶ��� ���� 3�� ������� 5�� ��������� �����ϴ� �ҽ�
		; ����� ������ ����.
		    - 3�� 5�� ������̸�     '?�� 3�� 5�� ������̴�.'��
			- 3�� ����̸�           '?�� 3�� ����̴�.'��
			- 5�� ����̸�           '?�� 5�� ����̴�.'��
			- 3�� 5�� ����� �ƴϸ�  '?�� 3�� 5�� ����� �ƴϴ�.'�� ���

#include <stdio.h>
void main() {  
	// ���� if�� ��� 
	int num; 
	printf("���� �Է��ϼ��� : "); scanf_s("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("%d�� 3�� 5�� ������̴�.\n", num);
	}
	else if (num % 3 == 0 && num % 5 != 0) {
		printf("%d�� 3�� ����̴�.\n", num);
	}
	else if (num % 3 != 0 && num % 5 == 0) {
		printf("%d�� 5�� ����̴�.\n", num);
	}
	else {
		printf("%d�� 3�� 5�� ����� �ƴϴ�.\n", num);
	}
} 

#include <stdio.h>
void main() {
	// if�� ���(if~else)
	int num;
	printf("���� �Է��ϼ��� : "); scanf_s("%d", &num);

	if (num % 3 == 0) {
		printf("%d�� 3�� ����̴�.\n", num);
		if (num % 5 == 0) {
			printf("%d�� 3�� 5�� ������̴�.\n",num);
		}
		else {
			printf("%d�� 3�� ������� 5�� ����� �ƴϴ�.\n", num);
		}
	}
	else {
		printf("%d�� 3�� ����� �ƴϴ�.\n", num);
		if (num % 5 != 0) {
			printf("%d�� 3�� ����� �ƴϰ� 5�� ����� �ƴϴ�.\n",num);
		}
		else {
			printf("%d�� 3�� ����� �ƴ����� 5�� ����̴�.\n", num);
		}
	}

}

#include <stdio.h>
void main() {
	// ��ø if�� ���
	int num;
	printf("������ �Է� : "); scanf_s("%d", &num);
	if (num % 3 != 0 && num % 5 != 0) {
		printf("%d�� 3�� ����� �ƴϰ� 5�� ����� �ƴϴ�.\n",num);
	}
	else {
		if (num % 3 == 0) {
			if (num % 5 == 0) {
				printf("%d�� 3�� 5�� ������̴�.\n", num);
			}
			else {
				printf("%d�� 3�� ����̴�.\n",num);
			}
		}
		else {
			printf("%d�� 5�� ����̴�.\n", num);}
	}
}
    if�� ���տ���
	    - 3�� ������ ���� �޾Ƶ��� �� ��հ��� ���ϰ� ������ ���� ������ �ο�
		- ���� �ο� ���
		    ; 70�� �̻��� '�հ��Դϴ�.'��
			; 60~69�� ���̸� '�̴��Դϴ�. �й��ϼ���.'��
			; 60�� �̸��� '���հ��Դϴ�. ������ϼ���.'�� ���

#include <stdio.h>
void main() {
	int v1, v2, v3;
	printf("���� 3���� �Է� : "); scanf_s("%d%d%d", &v1, &v2, &v3);
	double avg = (v1 + v2 + v3) / 3;
	printf("��հ� = %.1lf\n", avg);
	if (0.00 <= avg && avg <= 100.00) {
		if (avg >= 70) {
			printf("�հ��Դϴ�.\n");
		}
		else if (60 <= avg) {
			printf("�̴��Դϴ�. �й��ϼ���.\n");
		}
		else {
			printf("���հ��Դϴ�. ������ϼ���.\n");
		}
	}
	else {
		printf("���� �߸��Ǿ����ϴ�.\n");
	}
} 
    - �ǽ� : 69.5���� ���� �κа� �Ҽ� �κ����� �и��ϴ� �ҽ�

#include <stdio.h>
void main() {
	float a = 69.5;
	int b = 69;
	float c = a - b;
	printf("%d\n%.1f\n", b, c);

#include <stdio.h>
void main() {
	double a = 69.5;
	int b = (int)a;   // cast������ ���� �Ҽ��� ������ ������ ��ȯ
	double c = 69.5 - b;
	printf("%d\n%.1lf\n", b, c);
}
*/

