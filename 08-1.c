/*
08. ���(���ǿ� ���� ���� ������ ����) -if��
    - 3. ���� if��
	    : if�� ���տ���

-�ǽ� : 69.5���� ���� �κа� �Ҽ� �κ����� �и��ϴ� �ҽ�

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


#include <stdio.h>
		void main() {
		int time, money = 3000;
		printf("���� ź �ð�(��) : "); scanf_s("%d", &time);
		if (time > 0) {
			if (0 < (time -= 30)) {   /// ���⼭���� time - 30�� time������ ����
				if (time % 10 == 0) {
					money = money + time / 10 * 500;
				}
				else {   //// time�� 10�� �������̹Ƿ� ������ �ϸ� ����(��)�� ���
					money = money + time / 10 * 500 + 500;
				}
			}
			printf("%d���Դϴ�.\n", money);
		}
		else {
			printf("���� Ÿ�� �ʾ����Ƿ� ���� ���� �ʽ��ϴ�.\n");
		}
	}
	//// ��, 30�б����� �⺻�� 3000���� ����, �̸� �ʰ��ϸ� �߰� �̿�ð� 10�д� 500���� �߰��ϴ� �ҽ�.
	//// ex) 41���� 4000��, 60���� 4500��


#include <stdio.h>
void main() {
	int num, money = 0;
	printf("�ֹ��� ���ö� ���� : "); scanf_s("%d", &num);
	if (num > 10) {
		money += 25000 + (num - 10) * 2400;
	}
	else if (num > 0 && num <= 10) {
		money = num * 2500;
	}
	else {
		printf("���ö��� ��Ű�� �ʾ����Ƿ� 0���Դϴ�.\n");
	}
	printf("%d���Դϴ�.\n", money);
}
    //// ��, ���ö� 10�������� �ϳ��� 2500��, �̸� �ʰ��ϸ� �ϳ��� 2400��
08. ���(���ǿ� ���� ���� ������ ����) - if��
    - 3. ���� if��
	   : if�� ���տ���
	       - ���� 1�뿡 5000���Ѵ�. 
		   �׷��� ���뿡 10�� �̻��� ��� ��ü �ݾ��� 10%�� �����Ͽ� �ش�.
		   �׸��� 100�� �̻��� ��� ��ü �ݾ��� 12%�� �����Ͽ� �ش�.
		   ������ ������ �Է¹ް� ������ ����ϴ� �ҽ��� ������.

#include <stdio.h>
void main() {
	int num, money;  //// money�� �����Ǵ� ���� �ƴϹǷ� �ʱⰪ ���� �ʿ� x
	printf("�� ���� ������ �����ҰŴ�? : "); scanf_s("%d", &num);
	if (num > 0) {
		if (num < 10) money = num * 5000;
		else if (num >= 10 && num < 100) money = (num * 5000) * 9 / 10;
		else money = (num * 5000) * 88 / 100;
	}
	printf("������ %d���Դϴ�.\n", money);
} 
//// ���� ������ ���ǽ� �������� ���������� ������ �̷��� {}�� �����ϰ� ����ϱ⵵ �Ѵ�.
08. ���(���ǿ� ���� ���� ������ ����)
8.2 switch ~ case��
    - ���� 
	    : �Է°��� ������ ���� ���� case�� ���� �� ���� ����� ����
		: ��, switch�� �ȿ� �ִ� ���� ��Ȯ�ϰ� ��ġ�Ǵ� case���� ã�Ƽ� ����
		: 'break'���� ���� �ش� ����� ���������� ���� 
		: switch������ ������ �̿��� ���� �Է��ؼ� ���
	- ����
	    switch(��) {
		    case �����1:
			    �����ڵ�;
				break;

			case �����2:
			    �����ڵ�;
				break;

			....
			default:        // ���� ��ġ�ϴ� case�� ���� �� ����
			    �����ڵ�;
				break;
		}

#include <stdio.h>
void main() {
	int num = 1;
	switch (num) {
	case 1:
		printf("���1\n");
		break;
	case 2:
		printf("���2\n");
		break;
	default:
		printf("���3\n");
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
	printf("�� �Է� : "); scanf_s("%d", &num);

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
// �ش��ϴ� ������ �ٷ� �̵� - �޴��� ���õ� ���� �ڵ��� �� ����
*/
#include <stdio.h>
void func() {
	printf("�Լ� func()�� ȣ���ؼ� ��ȯ\n");
	return;
}

void main() {
	func();
}