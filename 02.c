/* #include <stdio.h>
int main() {
	printf("\n");
	return 0;
}

#include <stdio.h>
int main() {
	printf("Hello\nWorld!");
	printf("Hello\n");
	printf("World\n");
	return 0;
}

02. Escape code(�̽������� �ڵ�)
    - ����
	    : ���� �Ǵ� ���ڿ� ���� ����� �� Ư���� ����� �����ϱ� ���� ���ȴ�.
		: �ݵ�� ���ڿ� �ȿ����� �ԷµǾ�� �Ѵ�.
	- ����
	    : \n    ����(���� ���� ��.). Ŀ���� ���ο� �ٷ� �̵�.(����Ű�� ����, �ٹٲ�)
		: \t    ���� �̿��� ����. �⺻�� 8ĭ(8byte)
		: \b    Back Space. Ŀ���� ���� �ٿ��� �������� �� ĭ�� �̵�
		: \r    Ŀ���� �ش� ���� �� ó������ �̵��ϸ鼭 ���� ��ü(Replace)
		: \\ , \' , \"  ��ȣ ����

	- �ǽ�

#include <stdio.h>         // Header File ����
                           // ��� �ҽ� �ֻ�ܿ� �Է��ϴ� ������ ����.
                           // ������ ��� ����ڰ� ���� ���� ��� ����
int main() {
	printf("Escape\n�̽������� ���ڴ�\n");
	printf("���ڿ� �ȿ����� ��� �����ϴ�.\n");
	printf("\n");      // �� �� ����
	printf("123456781234567812345678\n");

	printf("��\tĿ���̵�\tend\n");
	printf("�������� �� ĭ �̵� 123\b4567\n");
	printf("abcde \r12\n ");

	printf("��ȣ(\\)����\n");
	printf("��ȣ(\')����\n");
	printf("��ȣ(\")����\n");
	return 0;
}

- �ǽ�

#include <stdio.h>
int main() {
	printf("\t\t\t### �ñ� \\ ��� ###\n");
	printf("=================================================================\n");
	printf("�Ϸ�ٹ��ð�    \t2022��ñ���    \t�հ�޿�\n");
	printf("=================================================================\n");
	printf("5\t\t\t9160\t\t\t45800\n");
	printf("-----------------------------------------------------------------\n");
	printf("�Ѵޱٹ�\t\t���հ�\n");
	printf("=================================================================\n");
	printf("20\t\t\t916,000\n");
}


03. ���� ������(�ſ� �߿�)
    - ����
	    : printf()�Լ� �ȿ��� ��� �����͸� �����ͼ� ����� ����
		  �ش� ��ġ�� ������ Ÿ�Կ� �´� ���������ڸ� ����ؾ� �Ѵ�.
	- ����
	    : printf("%���������ڹ���1,%���������ڹ���2,....", ��1,��2,.....);
		�տ� �ִ� ���ڿ� ���� �׻� ������ ��ġ�Ǿ�� �Ѵ�.
	- ����
	    : %d  : 10������(Decimal Point). (-2,-1,0,1,2)
		: %f  : �Ǽ�(Float) (-2.4, 1.4, 2.1)
		: %lf : �Ǽ�(Long Float). (-2.4, 3.1415, 3.0)
		: %c  : ����(Character, ���� 1byte). �ѱ��� ���� 2byte�̱� ������ %c ��� �Ұ�
		: %s  : ���ڿ�(String, ���� 2byte�̻�). �ѱ��� ���� 2byte�̱� ������ ��� ����
		: %o  : 8����(Octal). (0o654, 0o127)
		: %x  : 16����(Hexa Decimal). (0x40, 0x8ff)
		: 2���� ǥ���� ����.
		: %p  : ������ ����(16����)
		: %e  : ������ �ε� �Ҽ�
		: %G, %g : ��� ���ڵ� ǥ��(Global)
    
	- �ǽ�

#include <stdio.h>
void main() {
	// 1. ���� Ÿ���� ���� ������ : %d
	// "" �ȿ� �ִ� ������� ��� '���ڿ�'�� �νĵȴ�.
	// ���ڿ��� �νĵǴ� ������� ���� �״�� ��µȴ�.
	printf("10 + 20\n");    // ���� ������ ������ �ʴ´�.
	printf("10 + 20 = %d\n", 10 + 20);  // ����� ���� ���������ڿ� ���Եǰ� ���
	//printf("10 + %d = %d\n", 10 + 20);  // ���������ڰ� 2���� ���� 2������ �Ѵ�.
	printf("%d + %d = %d\n", 10, 20, 10 + 20);
	printf("���ڸ� ���ڷ� ������, ASCII �ڵ� ����? : %d\n", 'A');
	// ''�ȿ� �ִ� ������ '����'�� �ν��Ѵ�.
}

    // 2. �Ǽ� ���� ������ : %f, %lf
#include <stdio.h>
void main() {
	printf("�⺻�� : %f\n", 1.234);    // �Ǽ��� �⺻������ �Ҽ� ���� 6�ڸ����� ǥ��
	printf("long�� : %lf\n", 1.234);

	printf("�Ҽ� ���� 2��° �ڸ����� ǥ�� : %0.2lf, %0.2f\n", 1.2, 1.234);
	printf("�Ҽ� ���� 3��° �ڸ����� �ݿø� : %0.2lf, %0.2f\n", 1.234, 1.235);

	// printf("%lf\n", 2);    ���������ڴ� �Ǽ�, �ԷµǴ� ���� �����̹Ƿ� ���� �߻�
	// printf("%d\n", 3.1415);    ���������ڴ� ����, �ԷµǴ� ���� �Ǽ��̹Ƿ� ���� �߻�
}


    // 3. ���� Ÿ���� ���� ������ : %c
#include <stdio.h>
void main() {
	printf("���� : %c\n", 'a');
	printf("����(%c)�� ASCII Code������ 10������ ǥ�� : %d\n", 'a', 'a');

	char b = 'a';    // <���� Ÿ��> <������> = <��>
	// printf("����(��)�� �ݵ�� ���ڸ� ������ ��ȣ(','')�� �� �����ؾ� �Ѵ�. : %c", a);
	printf("����(��)�� �ݵ�� ���ڸ� ������ ��ȣ(','')�ȿ� �� �����ؾ� �Ѵ�. : %c\n", b);
	// ������ ġȯ�� ��쿡�� ������ ���� ������ �����Ƿ� �������� �����ص� �ȴ�.
}

    
    // 4. ���ڿ� Ÿ���� ���� ������ : %s
#include <stdio.h>
void main() {
	printf("���ڿ� : %s\n", "���ĺ� 2����, �ѱ�");
	//���ڿ��� �ݵ�� �ֵ���ǥ�� ��� �Ѵ�.
	printf("����(%c), ���ڿ�(%s, %s)\n", 'z', "ab", "�ѱ�");
}
	
	- �ǽ� : ������ ������ ���� ������� �հ�� ��� �� ������ ���ϴ� �ҽ�
		   : ���� ����(���� : 81 / ���� : 64 / ���� : 61)
		   : ���� �ο�(A : 100 - 90 / B : 89 - 80 / C : 79-70 / D : 69 - 60/ F : 59 - 0)

#include <stdio.h>
void main() {
	printf("%s ���� : %d\n", "����", 81);
	printf("%s ���� : %d\n", "����", 64);
	printf("%s ���� : %d\n", "����", 61);

	printf("�հ� ���� : %d\n", 81 + 64 + 61);
	//printf("��� ���� : %.1f\n", (81 + 64 + 61)/3);
	printf("��� ���� : %.1f\n", 68.67);
	printf("���� : %c\n", 'D');

	printf("����(%d)�� | ����(%d)�� | ����(%d)��\n", 81, 64, 61);
	printf("�հ�(%d) | ���(%.1f)�� | ����(%c)\n", 81 + 64 + 61, 68.67, 'D');
	// ������ �����ϴ� ��ҵ��� ���� �����̰�, ���� �� ������ �Ǿ����� �����Ƿ� ����
}
*/
#include <stdio.h>
void main() {
	int (num > 0) {
		if ()
	}
}