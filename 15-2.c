/*
10. �Լ�
10.1 ����
    - Ư���� ����� �����ϴ� �ϳ��� ������ ���¸� ���Ѵ�.
    - �Լ��� ����� ������ �ʿ��� �� �ҷ��� ����� �����ϴ�.
    - �ַ� ������ ������ �ҽ� �ȿ��� ��� ���Ǹ� �ҽ� ���̰� ������� ��ȿ������.
    - �Լ��� �̿� ���� ��츦 ����� �� �ִ�.
    - ����ڰ� ���� ���� �Ǵ� �̸� ���ǵ� �Լ��� ȣ���� ����Ѵ�.
    - (�ſ� �߿�) �Լ� ���Ǵ� �ݵ�� 'main()�Լ�' ������ ������ �Ǿ�� �Ѵ�.

10.2 ����
    - step 1. �Լ� ����
        <��ȯ�ڷ���> �Լ���(�ڷ���1 �Ű�����1, �ڷ���2 �Ű�����2,.....)
            ���;
            ���;
            ....
            [return] ��ȯ�ڷ����� ������ ��ɿ��� ���� ������� ȣ���� ������ �ǵ�����.
            ����, ��ȯ�ڷ����� void�� ��쿡�� return�� �����ص� �ȴ�.
    - step 2.  �Լ� ȣ��   
        void main() {
            �Լ���();
        }
        
#include <stdio.h>
int kg() {
    int a = 1;
    printf("ù ��°(%d) �Լ� ����\n", a);
    return a;
}

double it() {
    double a = 1.1;
    printf("�� ��°(%g) �Լ� ����\n", a);
    return a;
}

char bank() {
    char a = 'a';
    printf("�� ��°(%c) �Լ� ����\n", a);
    return a;
}

void eroom() {    // �Լ� ���� �ڷ��� ������ �⺻������ 'int��'�� ����ȴ�.
                  // ��ȯ�� ���� ���� ��쿡�� �ݵ�� 'void'�� ����Ѵ�.
    printf("������ �Լ� ����\n");
    return;    // ��ȯ�� ���� ���� �ʰڴ�.
}

void main() {
    kg();
    it();
    bank();
    eroom();
}
10.3 �ǽ�
    - �Լ��� �����ϴ� ���(�Լ� ��ġ)

#include <stdio.h>
void func();

void main() {
    func();
}

void func() {
    printf("samadal\n");
}
// main�Լ��� �����Ϸ��� �Լ����� �����ٰ� �η���
// �����Լ��� �Լ��� �� ���� �θ� �ȴ�.

// 1-
#include <stdio.h>

void haha() {
    printf("Samadal\n");
}

void nemo() {
    int x;
    for (x = 1; x <= 3; x++) {
        printf("NEMO\n");
    }
}

void main() {
    haha();
    nemo();
}


// 2-
#include <stdio.h>
void haha();
void nemo();

void main() {
    haha();
    nemo();
}

void haha() {
    printf("Samadal\n");
}

void nemo() {
    int x;
    for (x = 1; x <= 3; x++) {
        printf("NEMO\n");
    }
}

#include <stdio.h>

void ss() {
    printf("Samadal\n");
}
void sh() {
    printf("Madal\n");
}
void main() {
    int a;
    printf("����� ���ڿ���? : "); scanf_s("%d", &a);
    if (a == 1) {
        ss();
    }
    else if (a == 2) {
        sh();
    }
}
- �ǽ�
    : �Ű������� �޾ƿ��� �Լ�

#include <stdio.h>
void func(int x) {
    return x;
}

void main() {
    func(4);
}

#include <stdio.h>
void plus(int x, int y) {
    printf("%d + %d = %d\n", x, y, x + y);
}

void minus(int x, int y) {
    printf("%d - %d = %d\n", x, y, x - y);
}

void mul(int x, int y) {
    printf("%d * %d = %d\n", x, y, x * y);
}

void div(int x, int y) {
    printf("%d / %d = %d\n", x, y, x / y);
}

void main() {
    int a = 10, b = 5;
    plus(a, b);
    minus(a, b);
    mul(a, b);
    div(a, b);
}
*/
#include <stdio.h>
int func() {
    return 3;
}

void main() {
    int a;
    a = func();
    printf("func�Լ��� �������� %d�Դϴ�.\n", a);
}