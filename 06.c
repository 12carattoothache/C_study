/*
07. ǥ�� �Է� �Լ�(�ſ� �߿�) - scanf()
    - 5. �ǽ�

#include <stdio.h>
#define year 12
void main() {
    
    int sm;
    long long budget;
    printf("�Ŵ� ���� �ݾ� : "); scanf_s("%d", &sm);
    budget = 30 * (sm * year);
    printf("30�� ���� ��� : %lld\n", budget);

    ���� 2���� �Է¹��� �� ���� ���Ѵ�. 
    ��, �� ���� ���� ������ ���� ������ �̿��ػ� ���Ѵ�.
    
    int num1, num2;
    printf("num1 = "); scanf_s("%d", &num1);
    printf("num2 = "); scanf_s("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    
    int n1, n2, sum1, sum2 = 4;
    printf("���� 2�� �Է� : "); scanf_s("%d%d", &n1, &n2);
    sum1 = n1;      // �ʱⰪ ����(���� ������ų ���� �ݵ�� �ʱⰪ �����ؾ���)
    sum1 += n2;     // sum = sum(n1) + n2
    sum2 += sum1;
    printf("�� ���� ���� %d�̴�.\n", sum1);
    printf("sum2 = %d\n", sum2);
    
    char name1[30], name2[30];
    printf("�̸� 1 : "); gets_s(name1, sizeof(name1));
    printf("�̸� 2 : "); gets_s(name2, sizeof(name2));
    printf("�̸�1(%s) | �̸�2(%s)\n", name1, name2);
}

- ���� 1���� �Ǽ� 1���� �Է¹��� �� ��Ģ�������� ���Ǵ� �ҽ�

#include <stdio.h>
void main() {
    int a;
    double b;
    printf("����, �Ǽ� : "); scanf_s("%d%lf", &a, &b);
    printf("%d + %.2lf = %.1lf\n", a, b, a + b);
    printf("%d - %.2lf = %.1lf\n", a, b, a - b);
    printf("%d * %.2lf = %.1lf\n", a, b, a * b);
    printf("%d / %.2lf = %.1lf\n", a, b, a / b);
}
- �������̸�, Clang, Linx, Windows, Network�� ������ �Է� ���� �� �հ�, ����� ���ϴ� �ҽ�

#include <stdio.h>
void main() {
    char name[30];
    printf("�̸��� �Է��ϼ���. : "); gets_s(name, sizeof(name));
    int a, b, c, d;
    printf("Clang�� ���� : "); scanf_s("%d", &a);
    printf("Linx�� ���� : "); scanf_s("%d", &b);
    printf("Windows�� ���� : "); scanf_s("%d", &c);
    printf("Network�� ���� : "); scanf_s("%d", &d);
    int sum = a + b + c + d;
    double avg = sum / 4;
    printf("%s�� �հ� ���� : %d\n", name,sum);
    printf("%s�� ��� ���� : %.2lf\n", name,avg);    
}

08. ���(���ǿ� ���� ���� ������ ����) - if��
    - 1. �ܼ� if��(if��)
        : ����           
            : ���ǽ��� �Ǵ��ؼ� ���̸� ���ӹ�����, �����̸� '��������'�� ����
        
        : ����
            if(���ǽ�) {
                ���ӹ���;
            }
            ��������;    // �ܼ� if��(if �ϳ��θ� ������ ���)�� ��� ���� ���� ���о��� �� ���� ����

        : �ǽ�

#include <stdio.h>
void main() {
    int n;
    printf("���� �Է� : "); scanf_s("%d", &n);
    if (n) {    // �Է¹��� ���� �ִٸ�...  
        printf("%d�� 0�� �ƴ� ���̹Ƿ� ���ǽ��� ��\n", n); 
        printf("���ǽ��� ���̹Ƿ� ���ӹ����� ����\n");
        printf("0�� �Է��ϸ� ���ӹ����� ������� �ʴ´�.\n");
        printf("���� 1�̰�, ������ 0���� �ǴܵǱ� �����̴�.\n");  // Boolean(�Ҵ��)
    }
}

#include <stdio.h>
void main() {
    int n1, n2;
    printf("�� ���� �Է� : "); scanf_s("%d%d", &n1, &n2);
    if (n1 > n2) {
        printf("%d�� %d���� ũ��\n", n1, n2);
    }
    printf("%d�� %d���� �۴�\n", n1, n2);    // ���̾ ����ȴ�.
}

#include <stdio.h>
void main() {
    int n1,n2;
    printf("���� �Է� : "); scanf_s("%d", &n1);
    n2 = n1 % 2;
    if (n2 == 0) {
        printf("�Էµ� �� %d�� ¦���̴�.\n", n1);
    }
    if (n2 != 0) {
        printf("�Էµ� �� %d�� Ȧ���̴�.\n", n1);
    }
}  

- �ǽ�
    : �Է¹��� ������ ũ�⸦ �Ǵ��ϴ� �ҽ�(�� ������ 10���� �Ѵ�.)

#include <stdio.h>
void main() {
    int n1;
    printf("������ �Է� : "); scanf_s("%d", &n1);
    if (n1 > 10) {
        printf("�Էµ� �� %d�� 10���� ũ��.\n", n1);
    }
    if (n1 < 10) {
        printf("�Էµ� �� %d�� 10���� �۴�.\n", n1);
    }
    if (n1 == 10) {    // '����'�� '='�� �ƴ� '=='
        printf("�Էµ� �� %d�� 10�̴�.\n", n1);
    }
}
*/