/*
08. ���(���ǿ� ���� ���� ������ ����)
8.3 for��
    - ���� for��
        : 1���� �����ؼ� Ȧ���� ���� ���ϸ鼭 �� ���� 10000�� ���� �ʴ� ������ ����?

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
    for (i; sum < 10000; i++) {
        if (i % 2 != 0) {
            sum += i;
            printf("i(%d) | sum(%d)\n", i, sum);   
        }
    }
    i--;
    printf("%d\n", i);
    // 201���� i�� �ش����� �ʴ� ���̹Ƿ� ����ϸ� 200�� ����.
    // ���� i���� 1�� ���ҽ�Ų �� ���
}
- �ǽ� : �� 100���� ����Ǿ� �ִ� â�� �� 2������ �ִ�. 
       : �� �� ������ �Ϸ翡 20g���� ���� �԰� 10�ϸ��� ���� ���� 
       : 2�辿 �����Ѵ�. �� �� ���� â���� ���� ��� ���� ���̰� �ɱ�?
       : �׸��� �� ���� ��� �� ����ϱ�?(�� �� ���� 1kg)

#include <stdio.h>
void main() {
    int rice = 100000, mouse = 2, day; // 100�� * 1000g
    for (day = 1; rice > 0; day++) {
        if (day % 10 == 0) {
            mouse *= 2;    // rice = rice - (mouse * 20)
         }
        rice -= mouse * 20;
        printf("%d�� %dg %d����\n", day, rice, mouse);
    }
    day--;
    // for���� ������ ����� �� (���� ��) day�� �� �� ����
    printf("%d�� %d����\n", day, mouse);
}

#include <stdio.h>
#include <stdlib.h>    // ���ڿ� ��ȯ, ���� �޸� ���� ���� �ϴ� ��� ����
                       // c ǥ�� ��ƿ��Ƽ �Լ����� ��� ���� ����
void main() {
    int money, i = 0;
    printf("����� ���� : "); scanf_s("%d", &money);
    system("cls");  // 
    for (;;) { // �ҽ��� �ݺ��ϰ� ���ִ� ���
        printf("1. Ŀ��(200), 2. ���ھ�(250), 3. ��ȯ, 4. ����\n");
        printf("�޴� ���� : "); scanf_s("%d", &i);
        if (i == 4) {
            exit(1); // �ҽ��� ���ѹݺ��� �������ִ� ���
        }
        else if ((i == 1 && money < 200) || (i == 2 && money < 250)) {
            printf("����� �����մϴ�.\n");
        }
        else if (i == 1) {
            printf("������ �弼��!\n");
            money -= 200;
        }
        else if (i == 2) {
            printf("������ �弼��!\n");
            money -= 250;
        }
        else if (i == 3) {
            printf("�Ž����� : %d��\n", money);
            money = 0; 
        }
        else {
            printf("�߸� �Է��߽��ϴ�.\n");
        }
    }
}
08. ���(���ǿ� ���� ���� ������ ����)
8.4 while��
    - ���� 
        : ����� ������ �ȵǸ� '���� �ݺ�'�� ������ ����
        : for���� �����ϰ� �ݺ��� �۾��� �ϱ����� ���ȴ�.
        : for�������� �ʱ��, ���ǽ�, ������ ���� ������ �ʿ��ϴ�.
        : ���� �����ο� ������ ���ǽ��� ���ȴ�.
        : �ٸ� ���(��, ������ ���� �б�)�� ������� ���� �ݺ��� �����ϴ�.
        : while�� �ȿ� �ִ� ���ǽĿ� ������ �� �ֵ��� '�� �Ǵ� ��'�� ���� �����Ѵ�.
    - ����
        �ʱ��;
        while(���ǽ�) {
            ��ɹ�;
        } 

#include <stdio.h>
void main() {
    int i = 1;
    while (i <= 10) {
        printf("i = %d\n", i);  // ���ѹݺ�
        i++;   // ���ѹݺ��� ����
    }
}

// ������������ 1���� 10���� ���
#include <stdio.h>
void main() {
    int i = 10;
    while (i >= 1) {
        printf("i = %d\n", i);  // ���� �ݺ�
        i--;   // ���� �ݺ��� ����
    }
}
// ������������ 10���� 1���� ���


#include <stdio.h>
void main() {
    int i = 10;
    while (i) { // ���ѹݺ� ����( i=0�� �Ǹ� i�� ���� ���� ���� �ǹǷ�)
        printf("i = %d\n", i);  
        i--;  
    }
}

- �ǽ�
    : 1 ~ 100������ ���� ���ϴ� �ҽ�

#include <stdio.h>
void main() {
    int sum=0, i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("1���� 100������ �� : %d\n", sum);
}

#include <stdio.h>
void main() {
    int sum = 0, i = 1;
    while (i <= 100) {
        sum += i++; // ������ �������̹Ƿ� i�� 1���� ��
        printf("���� �� : %d\n", sum);
    }
    printf("1���� 100������ �� : %d\n", sum);
}

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
samadal:;
    sum += i;
    i += 1;
    if (i <= 100) {
        goto samadal;  // ���ǿ� �����ϸ� samadal�� ���ư�. ���� �Ʒ� ��¹� ���� x
        printf("�� : %d\n", sum);
    }
}

#include <stdio.h>
void main() {
    int i = 1, sum = 0;
samadal:;
    sum += i;
    i += 1;
    if (i <= 100) 
    goto samadal;  
    printf("�� : %d\n", sum);  
}
*/


