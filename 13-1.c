/*
08. ���(���ǿ� ���� ���� ������ ����)
8.6 �б⹮
    - ����
        : ������� ������ ������ �� �ִ� ����� ���Ѵ�.
        : break, continue, goto, return
    - break

- �ǽ�

#include <stdio.h>
void main() {
    while (1) {  // ���� �ݺ�
        int gugu;
        printf("���ϴ� �� �Է�(1 ~ 9) : "); scanf_s("%d", &gugu);
        if (gugu <= 0 || gugu > 9) {
            printf("������ ���α׷� ����\n");
            break; // ���� �ݺ� ����
        }
        else if (1 <= gugu && gugu <= 9) {
            printf("===%d��===\n", gugu);
            for (int n = 1; n <= 9; n++) {
                printf("%d * %d = %d\n", gugu, n, gugu * n);
            }
        }
    }
}

    - continue
        : ����
            ; �ݺ����� �����ؾ� �� ��� �� ���� �������� ���� ����� �����ϰ�
            ; �ٷ� ���� �ܰ��� ���ǽ� �Ǵ� ���������� �̵��ϰ� �� �ִ� ���

- �ǽ�
    : 1���� 10���� ���� �߿��� ¦���� ����ϴ� �ҽ�

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 10; a++) {
        if (a % 2 == 0) {
            continue;  // �Ʒ��� ���๮�� ������.
            // printf("a = %d\n", a);
        }
        printf("a = %d\n", a); // Ȧ���� ����� ��.
    }
}

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 10; a++) {
        if (a % 2 != 0) {
            printf("a = %d\n", a); // Ȧ���� ���
            continue;  // �Ʒ����� if���� ���� ������ ����
        }      
            printf("a = %d\n", a); // ¦���� ���
    }
}
// 1���� 10���� ��� ����ϴ� �ҽ�

: �ǽ� 
    - 1���� 30������ ���� �� 2�� ���, 3�� ���, 5�� ����� �ƴѰ͸� ���

#include <stdio.h>
void main() {
    int a = 1;
    for (a; a <= 30; a++) {
        if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0) {
            continue;
        }
        printf("a = %d\n", a);
    }
}

#include <stdio.h>
void main() {
    int a = 0;
    while (++a < 31) {
        if (a % 2 != 0 || a % 3 != 0 || a % 5 != 0) {
            continue;
            printf("a = %d\n", a);
        }
        printf("a = %d\n", a); // 2�� 3�� 5�� ������� ���
    }
}

    - goto
        : ����
            ; �ݺ����� ������ ����� �Ѵ�
            ; ���α׷� ���� ������ ������ ������� ������ �̵���Ű�� ���
            ; ���α׷� �ҽ��� ������� ���������� ������ ���� ��������� �ʴ´�.
        : ����
            ��Ī1:
                ��ɹ�1:
                if (����)
                    goto��Ī1;
                ��ɹ�2:

#include <stdio.h>
void main() {
    int a = 1;
xx:
    printf("a = %d\n", a++);
    if (a <= 3) {
        goto xx;
    }
}

    - return
        : ���� 
            ; �Լ� ������ ����ϸ� �ش� ������ ����� �Լ��� ������ ����ȴ�.
            ; main()�Լ� ������ return���� �����ϸ� ���α׷��� ����ȴ�.
            ; �ǵ������� ���� ���� ����Ѵ�.

08. ���(���ǿ� ���� ���� ������ ����)
8.7 c����� ���� �Լ� ����
    - rand()
        : ����
            ; ������ ����ϴ� �ּ��� ����� �����Ѵ�.
            ; ������ ���� ����ؼ� �������� ����Ѵ�.
            ; �� �Լ��� 'stdlib'�� ����� �Լ��̱� ������ ������ ����� �Ѵ�.
        : �ǽ�
            ; 

#include <stdio.h>
#include <stdlib.h>
void main() {
    printf("������ : %d\n", rand());
    int num;
    for (int n = 1; n <= 5; n++) {
        num = rand();
        printf("������ : %d | %d\n", n, rand());
    }
    srand(20);
    for (int i = 1; i <= 5; i++) {  
        // srand(�ʱ� ������ 1��): rand()�Լ��� �ʱⰪ�� ����
        printf("������ : %d\n", rand());
    }
}
*/

