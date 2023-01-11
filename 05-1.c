/*
06. ������(�ſ� �߿� - Ư�� ���ǽĿ��� �ʼ�)
    - 3. ����������(�ſ� ���� ���) - ������� �ʼ�
        : ����
            ++num    ; ���� 1 ���� �� ���� ������ �������� ����(�� ���� �� ����)
                     ; val = ++num; (num�� 1 ���� �� val�� ����)
      ***   num++    ; ���� ������ ���� ������ �� ���� 1 ����(�� ���� �� ����)
            --num    ; ���� 1 ���� �� ���� ������ �������� ����(�� ���� �� ����)
            num--    ; ���� ������ ���� ������ �� ���� 1 ����(�� ���� �� ����)
            : �ǽ�

#include <stdio.h>
void main() {
    int num1 = 12, num2 = 12;

    printf("num1    : %d\n", num1);      // 12
    printf("num1++    : %d\n", num1++);  // 12
    printf("num1    : %d\n", num1);      // 13

    printf("num2    : %d\n", num2);      // 12
    printf("++num2   : %d\n", ++num2);   // 13
    printf("num2   : %d\n", num2);       // 13

    printf("num1    : %d\n", num1);      // 13
    printf("num1--    : %d\n", num1--);  // 13
    printf("num1    : %d\n", num1);      // 12

    printf("num2    : %d\n", num2);        // 13
    printf("--num2++    : %d\n", --num2);  // 12
    printf("num2    : %d\n", num2);        // 12
}

#include <stdio.h>
void main() {
    int num1 = 10;
    int num2 = (num1--) + 2;


    printf("num1    : %d\n", num1);    // 9
    printf("num2    : %d\n", num2);    // 12
}
    - 4. ���迬����(���� ���) - ������� �ʼ�
        : ����
            A <     ; A���� ũ��.    if(a < 10)
            A >     ; A���� �۴�.
            A <=    ; A���� ũ�ų� ����.
            A >=    ; A���� �۰ų� ����.
            A ==    ; A�� ����.
            A !=    ; A�� ���� �ʴ�.

#include <stdio.h>
void main() {
    printf("���� %f�� %f�� ũ�� �� : %d\n", 3.01, 3.0, 3.01 <= 3.0);  // ����
    printf("���� %f�� %f�� ũ�� �� : %d\n", 3.01, 3.0, 3.01 >= 3.0);  // ��
    printf("���� %f�� %f�� ũ�� �� : %d\n", 3.01, 3.0, 3.01 == 3.0);  // ����
    printf("���� %f�� %f�� ũ�� �� : %d\n", 3.01, 3.0, 3.01 != 3.0);  // ��
    // �ε�� ��ü�� %d�� ����. �̶� bool����� ���� ���� ���̸� ���� 1,
    // �����̸� ���� 0�� ����Ѵ�.
}
06. ������(�ſ� �߿� - Ư�� ���ǽĿ��� �ʼ�)
    - 5. ��������
        : ����
            ||    A || B    A�� B �� �� �ϳ��� ���̸� �������� ������ ��(��OR)
            &&    A && B    A�� B �� �� ���� ���� �������� ���� ��ȯ(�� AND)
            !     !A        A�� ���̸� ������, �����̸� ���� ��ȯ(��NOT)
        : �ǽ�

#include <stdio.h>
void main() {
    int num1 = 10, num2 = 20, result1, result2, result3;
    result1 = (num1 == 10 && num2 == 12);
    result2 = (num1 < 10 || num2 > 12);
    result3 = (!num1);
    printf("result1 : %d\n", result1);  // 0
    printf("result2 : %d\n", result2);  // 1
    printf("result3 : %d\n", result3);  // 0
}
    - 6. ��Ʈ������
        : ����
            |    ��Ʈ ���� ����(OR). �� ���� ������ ��.
            &    ��Ʈ ���� ����(AND). �� �� ���� ���� ��.
            ^    ��Ʈ ���� ��Ÿ�� ����(XOR). ������ ����, �ٸ��� ��.
            ~    ��Ʈ ����(NOT). ��Ʈ�� ����
            <<   ��Ʈ ���� �̵�().
            >>   ��Ʈ ���� �̵�().

#include <stdio.h>
void main() {
    int num1 = 12, num2 = 7;

    int result1 = num1 | num2;    // 15
    printf("num1 | num2 : %d\n", result1);

    int result2 = num1 & num2;    // 4
    printf("num & num2 : %d\n", result2);

    int result3 = num1 ^ num2;    // 11
    printf(" num ^ num2 : %d\n", result3);
}
*/