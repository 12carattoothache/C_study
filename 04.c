/*
// 2. �Ǽ�
// �Ǽ��� �� ���
#include <stdio.h>
void main() {
    float b = 1.2f;    // ���⼭ ���(double������ �ؾ� �ϴµ� float������ �ߴ�.)�� ����.
    double c = 1.3;   // �ڷ����� ũ��(8byte) �����̴�.
    printf("b : %f\n", b);
    printf("c : %lf\n", c);
    // �Ҽ� ���� �ڸ��� ����
    float bb = 1.25f;
    double cc = 1.36;
    printf("bb : %f\n", bb);
    printf("cc : %f\n", bb);
    printf("bb + cc = %0.2lf\n", bb + cc);

    float b1 = 1.256f;   // �ݿø�
    float b2 = 1.25f;
    double b3 = 1.254;
    double b4 = 1.236;
    printf("b1(%.2f) | b2(%.2f) | b3(%.2lf) | b4(%.2lf)\n", b1, b2, b3, b4);
}

#include <stdio.h>
void main() {
    // 3. ����
    char ch1 = 'A', ch2 = 'a', ch3 = 65;  // ���� �ڷ����� ������ ���ÿ� ���� ���� ���� ����
    // ch3�� ��� �ڷ���(����)�� ��(����)�� ������ �ٸ�
    // ������ ��¹����� %c�� ��µǹǷ� ASCII CODE�� ���� ���ڷ� �ٲ�
    // ���� ���� X

    // int ch3 = 65;  �̷��� �����ص� ���� x
    printf("ch1(%c) | ch2(%c) | ch3(%c)\n", ch1, ch2, ch3);
}

#include <stdio.h>
void main() {
    // 4. ���ڿ�
    // ���ڿ��� ���Կ�����(=)�� �̿��ؼ� ���� ������ ���� ����.
    // ����� ���ÿ� �����Ǵ� ������ ����Ҹ� ����鼭 ���� �ٷ� �Է��ؾ� �Ѵ�.
    char str1[10] = "samadal";    // �迭? �� ���� ������ ���� ���� ���� ���� ���� �ִ�.
    printf("str1    : %s\n", str1);
    printf("str1    : %c\n", str1[0]);  // �ε���(�ε��� ��ȣ�� 0������ ���������� ����)
    printf("str1    : %c\n", str1[1]);
    printf("str1    : %c\n", str1[6]);
    printf("str1    : %c\n", str1[7]);
    printf("str1    : %c\n", str1[8]);

    char str2[6] = "clang";   // ���ڿ��� ũ��� '�迭�� + 1byte'�̻�ŭ ������ �Ѵ�.
    printf("str2    : %s\n", str2); // �׷��� ���� ��� �����Ⱚ�� ���
}

- �ǽ�
- ������ ���̿� Ű, �����Ը� �Բ� ����ϴ� �ҽ�

#include <stdio.h>
void main() {
    int age = 22;
    float height = 166.5f;
    float weight = 75.5f;
    printf("����(%d) | Ű(%.1f) | ������(%.1f)\n", age, height, weight);

    char ch;
    ch = 'D';                    // �ʱ⿡ ������ ���� ��� �����Ǳ⸦ ���Ѵٸ�
    printf("ch1 : %c\n", ch);    // �������� ���� �ߺ��ؼ��� �ȵȴ�.
    ch = 'G';
    printf("ch2 : %c\n", ch);

- �ǽ�
- ������ Ű�� inch�� ȯ���Ͽ� ����ϴ� �ҽ�(1inch = 2.54cm)
#include <stdio.h>
void main() {
    float height = 166.5f;
    float height_inch = height / 2.54f;
    printf("ȯ�� ��: %.1fcm | ȯ�� �� : %.1finch\n", height, height_inch);
}


        - �ǽ�(�ʱⰪ�� ���� ������ ��)

#include <stdio.h>
        void main() {
        int n1 = 10, n2 = 20, res;    // �ʱⰪ�� �����Ǿ� ���� ����
        res = n1 + n2;                // ����� ���� �ʱⰪ���� ����
        printf("n1(%d) | n2(%d) | res(%d)\n", n1, n2, res);

        int v1 = 10;
        double v2 = 20.0;
        printf("v1(%d) | v2(%.1lf)\n", v1, v2);
        // printf("v12(%d)\n", v1 + v2);  // ���� �� Ÿ���� �ٸ� ��� ũ�Ⱑ ū
        // printf("v12(%.1lf)\n", v1 + v2);  // �ڷ������� ����� ��.(����)
    }

    - �ǽ�
        : a�� 20, b�� 30�� �� ���� temp�� �̿��ؼ� �� ������ ���� ��ȯ�ϴ� �ҽ�

#include <stdio.h>
        void main() {
        int a = 20, b = 30, temp;
        printf("���� �� : a�� %d, b�� %d\n", a, b);

        temp = a;
        a = b;
        b = temp;
        printf("���� �� : a�� %d, b�� %d\n", a, b);
    }

    06. ������(�ſ� �߿� - Ư�� ���ǽĿ��� �ʼ�)
        - 1. ���������
        : ����
        = ; ������ ���� ���׿� ����
        == ; ���װ� ������ ���� ����.
        + ; ���ϱ�
        - ; ����
        *; ���ϱ�
        / ; ��
        %; ������


#include <stdio.h>
        void main() {
        // 1. �⺻
        int n1 = 20, n2 = 3;
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
        printf("%d / %d = %d\n", n1, n2, n1 / n2);
        printf("%d %% %d = %d\n", n1, n2, n1 % n2);
        // 2. ��¹��� ������ ���� �׻� '����', �Ǽ��� ���� �׻� '�Ǽ�'�� ����Ѵ�.
        // ������ ���� Ÿ���� �����ڸ� ����ϴ� ���� ����.
        printf("20 + 3.0 = %.1lf\n", n1 + 3.0);
        printf("4.0 / 2.0 = %.1lf\n", 4.0 / 2.0);
        printf("2.0 / 4 = %.1lf\n", 2.0 / 4);
        printf("2 / 4 = %d\n", 2 / 4);  // ���� �� ���� ���� ���� '0'�� �� ���
        // 3. ������ %�� ���ǻ���
        printf("2 %% 4 = %d\n", 2 % 4); // ���� �� ���� ���� �������� ���������� ���� �� ��ü
        printf("4 %% 2 = %d\n", 4 % 2); // ������ �������Ƿ� �������� 0
        // 4. %�� �������� ���ϴ� �������̹Ƿ� �Ǽ����� ��� �Ұ���(������ ����)
        // printf("4.6 % 2 = %.1lf\n", 4.6 % 2);
        }
- �ǽ�
    : �� ��(8,2)�� �̿��� '8�� �������� 0�̹Ƿ� ¦���Դϴ�.'��,
    : �� ��(9,2)�� �̿��� '9�� �������� 1�̹Ƿ� Ȧ���Դϴ�.'�� ����ϴ� �ҽ�

#include <stdio.h>
void main() {
    int a = 8, b = 9, c = 2, div1, div2;
    div1 = a % c;
    div2 = b % c;
    printf("%d %% %d�� %d�̹Ƿ� ¦���Դϴ�.\n",a,c,div1);
    printf("%d %% %d�� %d�̹Ƿ� Ȧ���Դϴ�.\n",b,c,div2);
}

- �ǽ�
    : �� ��(8,3)�� �̿��� 3�� ����̸� '3�� ����Դϴ�.'��,
    : 3�� ����� �ƴϸ� '3�� ����� �ƴմϴ�.'�� ����ϴ� �ҽ�

#include <stdio.h>
void main() {
    int a = 8, b = 3, div1, div2;
    div1 = a % 3;
    div2 = b % 3;
    printf("%d�� 3���� ���� �������� %d�̹Ƿ� 3�� ����� �ƴϴ�.\n", a, div1);
    printf("%d�� 3���� ���� �������� %d�̹Ƿ� 3�� ����̴�.\n", b, div2);
}

    - 2. ���Կ�����(�ſ� ���� ���)  *****�ݵ�� �ʱⰪ�� �־�� �Ѵ�.*****
        : ����
            +=  ; ǥ��(a += b) -> a = a+b
            -=  ; ǥ��(a -= b) -> a = a-b
            *=  ; ǥ��(a *= b) -> a = a*b
            /=  ; ǥ��(a /= b) -> a = a/b
            %=  ; ǥ��(a %= b) -> a = a%b

#include <stdio.h>
void main() {
    int a =5, b = 3;
    printf("a1 : %d\n", a);    // 5
    a += b;                    // a = 5 + 3
    printf("a2 : %d\n", a);    // 8
    a += b;                    // a = 8 + 3
    printf("a3 : %d\n", a);    // 11
}

#include <stdio.h>
void main() {
    int a = 5, b = 5;
    printf("a += 1 = %d\n", a += 1);    // 6
    printf("a -= 1 = %d\n", a -= 1);    // 5
    printf("a *= b = %d\n", a *= b);    // 25
    printf("a /= b = %d\n", a /= b);    // 5
    printf("a %%= b = %d\n", a %= b);    // 0
}

#include <stdio.h>
void main() {
    int  a = 2, b = 4, c = 6, d = 8, e = 10;
    a += 3;   // 5
    b -= 2;   // 2
    c *= 3;   // 18
    d /= 2;   // 4
    e %= 3;   // 1
    printf("a(%d), b(%d), c(%d), ,d(%d), e(%d)\n", a, b, c, d, e);
}
*/
