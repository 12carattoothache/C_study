/*
8.3 for��
- ���� for��
    : �ʱ�İ� ���ǽ�, ������ ������ ���� �ݺ���

#include <stdio.h>
    void main() {
    // �ʱ���� ������ ���
    int a = 1;
    for (; a <= 3; a++) { // a�� �̹� for�� �ۿ��� ����Ǿ� �����Ƿ� ���� ����
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // ������ ������ ���
    int a = 1;
    for (a = 1; ; a++) { // ���ǽ��� �����Ǹ� ��� ���̱� ������ ���� �ݺ�
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // �������� ������ ���
    int a = 1;
    for (a = 1; a <= 3;) { // �������� �����Ǹ� ������ ��ȭ�� �����Ƿ� ���� �ݺ� 
        printf("a=%d\n", a);
    }
}

#include <stdio.h>
void main() {
    // �ʱ�İ� �������� ������ ���
    int a = 1;
    for (; a <= 3; ;) { // ��� �� �������� ����Ǳ� ������ ���� ���
        printf("a=%d\n", a++);
    }
}

#include <stdio.h>
void main() {
    char a, b;
    for (a = 'A', b = 'Z'; a <= 'Z'; a++, b--) {
        printf("%c%c", a, b);
    }
    printf("\n");
}
// �ʱ��, �������� �� �� ����� ���

�ǽ� - 1���� 10���� ��� �������� ���� ���ϴ� �ҽ�
- ���� �������� ¦������ ���� ���� ��� / Ȧ������ ���� ���� ���

#include <stdio.h>
void main() {
    int i, sum = 0; // sum�� �ݵ�� �ʱ�ȭ
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("1���� 10������ �հ� : %d\n", sum);
}

#include <stdio.h>
void main() {
    int i, sum1 = 0, sum2 = 0; // sum�� �ݵ�� �ʱ�ȭ
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum1 += i;
            printf("¦�� : %d\n", i);
        }
        if (i % 2 != 0) {
            sum2 += i;
            printf("Ȧ�� : %d\n", i);
        }
    }
    printf("¦������ �հ� : %d\n", sum1);
    printf("Ȧ������ �հ� : %d\n", sum2);
}

#include <stdio.h>
void main() {
    int i1, i2, sum1 = 0, sum2 = 0; // sum�� �ݵ�� �ʱ�ȭ
    for (i1 = 1; i1 <= 10; i1 += 2) {
        sum1 += i1;
    }
    for (i2 = 2; i2 <= 10; i2 += 2) {
        sum2 += i2;
    }
    printf("Ȧ������ �հ� : %d\n", sum1);
    printf("¦������ �հ� : %d\n", sum2);
}

#include <stdio.h>
void main() {
    int a1,a2, b, sum1 = 0, sum2 = 0; 
    printf("���� �Է��ϼ��� : "); scanf_s("%d", &b);
    for (a1=1; a1 <= b; a1 += 2) {
        sum1 += a1;
        printf("Ȧ�� : %d\n", a1);
    }
    for (a2 = 2; a2 <= b; a2 += 2) {
        sum2 += a2;
        printf("¦�� : %d\n", a2);
    }
printf("1���� %d������ Ȧ���� �� : %d\n", b, sum1);
printf("2���� %d������ ¦���� �� : %d\n", b, sum2);
}

�ǽ� - 1���� 100 ������ ���� �� 7�� ����� ������ ���� ���ϴ� �ҽ�

#include <stdio.h>
void main() {
    printf("a(n)�� 7�� ����� ������ n��° �� | s(n)�� a(n)�� n�ױ����� ����.\n");
    int i, count=0, sum=0;
    for (i = 7; i <= 100; i += 7) {
        count += 1;
        sum += i;
        printf("a(%d) = %d\n", count, i);
    }
    printf("������ ���� ���� n : %d\n", count);
    printf("s(%d) : %d\n", count,sum);
}

�ǽ� - �л� 10���� ����(0~100)�� �Է� �ް� �Է¹��� ������ ���, 
�ְ�����, ���������� ���ϴ� �ҽ�
*/
#include <stdio.h>
void main() {
    int c, v, max = 0, min = 100;  // c : ī��Ʈ(�ο���), v : ���� ����, max/min : �ִ밪/�ּҰ�
    double sum = 0; // sum : ����� ���ϱ� ���� �հ�(����� �Ҽ��� �Ʒ� �ڸ������� ǥ���ϱ� ���� �Ǽ��� ǥ��)
    for (c = 1; c <= 10; c++) {
        printf("%d�� �л��� ���� : ", c); scanf_s("%d", &v);
        sum += v;
        if (max < v) {  // ���� �� �� ���� �޾Ƶ���. �� ���� ���ڵ��� �� ���� ���Ͽ� max ����
            max = v;
        }
        if (min > v) {  // ���� �� �� ���� �޾Ƶ���. �� ���� ���ڵ��� �� ���� ���Ͽ� min ����
            max = v;
            min = v;
        }
    }
    printf("�հ� : %.0lf | ��� : %.1lf\n", sum, sum / 10);
    printf("�ְ����� : %d | �������� : %d\n", max, min);
}