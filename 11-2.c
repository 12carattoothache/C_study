/*
�ǽ� : 1 ~ 100������ �� �߿��� 3�� 5�� ������� ������ ���ϴ� �ҽ�
#include <stdio.h>
void main() {
    int i = 1, count = 0;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            count++;
            printf("i(%d) = %d\n", count, i);
        }
        i++; // i�� 1���� ��� �����ϰ� ������Ѵ�.
    }
    printf("3�� 5�� ������� ���� : %d\n", count);
}

- �ǽ� : 1 ~1000������ ���� ���ϴµ� 3�� ����� �����ϰ�
3�� 5�� ������� �����ϴ� �հ� ���� ������ ���ϴ� �� ��


#include <stdio.h>
void main() {
    int i = 1, count = 0, count1 = 0, count2 = 0, sum = 0, sum1 = 0, sum2 = 0;
    while (i <= 1000) {
        sum += i;
        count++;
        if (i % 3 == 0 && i % 5 != 0) {
            count1++;
            printf("i(%d) = %d\n", count1, i);
            sum1 += i;
        }
        i++;
    }
    sum2 = sum - sum1;
    count2 = count - count1;
    printf("�� : %d | ���� : %d\n", sum2, count2);
}

#include <stdio.h>
void main() {
    int i = 1, count = 0, count1 = 0, count2 = 0, sum = 0, sum1 = 0, sum2 = 0;
    for (i; i <= 1000; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                count1++;
                sum1 += i;    // 3�� 5�� ������� ��
                printf("3�� 5�� ������� �� : %d | ���� : %d\n", sum1, count1);
            }
            count2++;
            sum2 += i; // 3�� ����� ��
            printf("3�� ����� �� : %d | ���� : %d\n", sum2, count2);
        }
        count++;
        sum += i;
    }
    printf("���ǿ� �´� �� : %d | ���� : %d\n", (sum - sum2 + sum1), (count - count2 + count1));
}

- �ǽ�
    : 1000���� ���� ����ϱ���� �ɸ��� ��¥�� ã�� �ҽ�
    : ��.ù ������ 100���� ����ϰ� ���������ʹ� ������ 2�辿 ����Ѵ�.
    
#include <stdio.h>
    void main() {
    int money = 1000, cost = 100, day = 0;    // ���� ��, ���� �ݾ�, ��¥
    while (money >= 0) {
        money -= cost;
        day++;
        printf("%d�� �� ��� �ݾ� : %d�� | ���� �ݾ� : %d��\n", day, cost, money);
        cost *= 2;
    }
    printf("�ɸ��� ��¥ : %d��\n", day);
}

8.5 do ~ while��
    - ����
        : while���� ������ �����ϴ�.
        : �������� ���ǽ��� ���ϱ� ���� ���� do���� �ڿ� �ִ� ����� �����ϰ�
          ������ �Ǵ��Ѵ�.
        : while������ ���ǰ� ������� do ���׿� �ִ� ��ɹ��� �� ���� ����ȴ�.
    - ����
        �ʱ��
        do {
            ��ɹ�;
        }
        while(���ǽ�); 

- �ǽ�

#include <stdio.h>
void main() {
    int x;
    for (x = 1; x <= 10; x++) {
        printf("%d\n", x);
    }
}

#include <stdio.h>
void main() {
    int x=1 ;
    while (x <= 10) {
        printf("%d\n", x++);   // ������ ������ ���� �̿�
    }
}
*/
#include <stdio.h>
void main() {
    int x = 1;
    do {
        printf("%d\n", x++);
    } while (x <= 10);
}