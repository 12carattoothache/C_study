/*
09. �迭
9.2 1���� �迭
    - �ǽ�
        : �ʱⰪ ���� �迭 ����(���� �� �ʱ�ȭ(������ ���� �����ϴ� ��))

#include <stdio.h>
void main() {
    int arr[5];    // �迭 ũ��(����) ����
    double darr[4];

    arr[0] = 1, arr[1] = 20, arr[2] = 300, arr[3] = 4000;
    darr[0] = 1.1, darr[1] = 1.14, darr[2] = 2.27;
    // ���� ������ �ʱ�ȭ. �� �迭�� �ε���(arr[0])�� ���� ����

    printf("0��° �ε����� ��Ұ� : %d | %.2lf\n", arr[0], darr[0]);
    printf("1��° �ε����� ��Ұ� : %d | %g\n", arr[1], darr[1]);
    printf("2��° �ε����� ��Ұ� : %d | %g\n", arr[2], darr[2]);
    printf("3��° �ε����� ��Ұ� : %d\n", arr[3]);
    // g, G�� �Ҽ��� ���� �� ������� ǥ���� �� ȿ�����̴�. (�Ǽ������� ���)
    // .2f, .2lf�� �޸� �ڸ��� �Է¾��� ǥ���� �����ϴ�.

    darr[3] = 4.15;
    printf("3��° �ε����� ��Ұ� : %d | %g\n", arr[3], darr[3]);
    // �������� �׻� Ÿ��(double)�� �־�� �ϴµ� �̹� Ÿ���� ����Ǿ� �����Ƿ� �� �ᵵ �ȴ�.
    // �׷��� ������ ������ ��µǴµ�, ������ ����� 'double darr[3];' �����̴�.
    // ��ܿ� 3���� ���� ��� ���ԵǾ� �ֱ� ������ �� �̻� �Է��� ���� ����.
    // ���� �Ǽ��� �迭�� 'double darr[4];'�� ���� �����ؾ� �Ѵ�.

    arr[4] = 50000; // ������ �ε����� ������ �ֱ� ������ ����, ����� �ȴ�.
    printf("4��° �ε����� ��Ұ� : %d\n", arr[4]);
}

#include <stdio.h>
void main() {
    int arr[3] = { 1,2 };
    double darr[2] = { 3.14 };

    printf("arr[0] : %d | arr[1] : %d\n", arr[0], arr[1]); // 1, 2
    printf("arr[1] : %d | arr[2] : %d\n", arr[1], arr[2]); // 2, 0(�����Ⱚ)
    printf("darr[0] : %lf | darr[1] : %lf\n", darr[0], darr[1]);  
    // 3.140000, 0.000000(�����Ⱚ)
    // ��������� �迭���� �ʱ�ȭ�ϸ鼭 ����� ���� �����ϸ�
    // ������ ���� ��µȴ�.
    // '0(����)'���� �ʱ�ȭ �ǰ� '0.000000(�Ǽ�)'�� �ʱ�ȭ�ȴ�.
}
- �ǽ�
    : �ݺ����� �̿��� ������ �迭(�������� 1 ~ 10���� 10���� �迭�� ������ �� ���)

#include <stdio.h>
void main() {
    int arr[10];  // '�������� �ʴ� ���� �����Դϴ�.'(��� x)
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, i+1);
    }
}

- �ǽ�
    : �ݺ��� ���� �Է� �� �迭 ���̸� �̿��� �迭 ����

#include <stdio.h>
void main() {
    int arr[10], arrlen;    // arrlen�� �迭�� ���̸� Ȯ���ϱ� ���� ����
    printf("������ �迭 ũ�� : %zd\n", sizeof(arr));  // 4byte * 10
    printf("������ ���� ũ�� : %zd\n", sizeof(arrlen));  //4byte

    arrlen = sizeof(arr) / sizeof(arr[9]);
    printf("������ �迭 ���� : %d\n", arrlen);

    for (int i = 0; i < arrlen; i++) {
        printf("arr[%d]��° �Է� : ", i); scanf_s("%d", &arr[i]);
    }
    for (int j = 0; j < arrlen; j++) {
        printf("arr[%d]��° ��� : %d\n", j, arr[j]);
    }
}

- �ǽ�
    : 1���� 10������ ���� �����ϰ� �� �� ¦������ ���� ���ϴ� �ҽ�
 
#include <stdio.h>
void main() {
    int arr[10], arrlen, sum = 0;    // arrlen�� �迭�� ���̸� Ȯ���ϱ� ���� ����
    printf("������ �迭 ũ�� : %zd\n", sizeof(arr));  // 4byte * 10
    printf("������ ���� ũ�� : %zd\n", sizeof(arrlen));  //4byte

    arrlen = sizeof(arr) / sizeof(arr[9]);
    printf("������ �迭 ���� : %d\n", arrlen);

    for (int i = 0; i < arrlen; i++) {
        printf("arr[%d]��° �Է� : ", i); scanf_s("%d", &arr[i]);
    }
    for (int j = 0; j < arrlen; j++) {
        if (arr[j] % 2 == 0) {
            printf("%d\n",arr[j]);
            sum += arr[j];
        }
    }
    printf("1���� 10���� �� : %d\n", sum);
}

09. �迭
9.2 1���� �迭
    - �ǽ�
        : ���̰� 5�� ������ �迭�� �����ϰ� �� 5���� ������ �Է¹��� �� 
        �ִ밪�� �ּҰ��� ���ϴ� �ҽ�

#include <stdio.h>
void main() {
    int arr[5], max, min;

    for (int i = 0; i < 5; i++) {
        printf("������ arr[%d] : ", i); scanf_s("%d", &arr[i]);
    }
    max = min = arr[0];      // �ִ밪�� �ּҰ��� �Ǵ��ϱ� ���� ���ذ��� ����

    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("�ִ밪(%d) | �ּҰ�(%d)\n", max, min);
}

#include <stdio.h>
void main() {
    char str1[] = "C Language";   // ������ ���� ���ø�ŭ �ڵ����� ũ�� ����
    char str2[] = "Clang";

    printf("%s | %s\n", str1, str2);
    printf("�迭�� str1�� ũ�� : %zdByte\n", sizeof(str1));    // 11Byte (����10 + 1)
    printf("�迭�� str2�� ũ�� : %zdByte\n", sizeof(str2));    // 6Byte  (����5 + 1)

    for (int i = 0; i <= 5; i++) {
        printf("%c | %d\n", str2[i], str2[i]);  
        // ����(���ڿ�)�� �� �ڿ� '1Byte(NULL)'�� �߰����־�� �Ѵ�.
        // �������� ������ �ƽ�Ű �ڵ� ���� ��µȴ�.
    }
}
*/
#include <stdio.h>
void main() {
    char str[] = "C_Lang_Array";
    printf("���ڿ� ��� : %s\n", str);
    printf("�ּҰ� ��� : %s\n", &s)
}
