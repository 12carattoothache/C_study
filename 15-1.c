/*
09. �迭
9.2 1���� �迭
    - �ǽ�
        : ���ڿ� �迭

#include <stdio.h>
void main() {
    char str[] = "C_Lang_Array";
    printf("���ڿ� ��� : %s\n", str); 
    printf("�ּҰ� ��� : %s\n", &str[0]);
    // �迭���� �׻� �迭�� �ε���[0]��°�� ����Ű�� �ִ� �ּҰ��� ����

    printf("NULL ���� : %c | %d\n", str[12], str[12]);   // ����, 0
    printf("NULL ���� : %s | %d\n", str[12], str[12]);   // NULL, 0

    char nu = '\0';    // NULL
    char spb = ' ';    // ����(Space)

    printf("%c | %c\n", nu, spb);     // ������ ����� �����ϰ� ��µ�����
    printf("%d | %d\n", nu, spb);     // ���� �ٸ� ��(0,32)�� ��µȴ�.(�ƽ�Ű�ڵ�)
                                      // ���� NULL�� Space�� �ٸ� �����̴�
    printf("%s\n", str);
    str[7] = 'a';
    printf("%s\n", str);
}    

#include <stdio.h>
void main() {
    char str[50] = "I need Programming";
    printf("���ڿ� : %s | ũ�� : %zdB\n", str, sizeof(str));

    printf("����(%c) | ����(%d) | NULL(%d)\n", str[17], str[17], str[18]);
    printf("%c | %d\n", str[40], str[40]);
    // 18���� 50������ ��� NULL�̴�.
    // NULL�� ���ڷμ��� �� ����, ���ڷμ��� 0�� ��µȴ�.
}

- �ǽ�
    : NULL�� �� ���ڿ� ����(����) Ȯ�� - strlen(���ڿ�)

#include <stdio.h>
void main() {
    char str1[] = "Clang";
    printf("���ڿ� ���� : %d\n", strlen(str1));
    printf("���ڿ� ũ�� : %zd\n", sizeof(str1));  // NULL�� �����Ͽ� 6

    char str2[20] = "";
    printf("���ڿ� �Է� : "); scanf_s("%s", str2, sizeof(str2));
    printf("���ڿ� ��� : %s\n", str2);
    printf("���ڿ� ���� : %d\n", strlen(str2));
}
09. �迭
9.3 ������ �迭
    - ����
        : 1���� �迭
            int arr[3];    => ���� 3��(1,2,3)�� ���� 1����
        : 2���� �迭
            int arr[3][2]  => ��(����) 3��, ��(����) 2��
            // 3�� 2��
        : 3���� �迭
            int arr[3][3][3]

#include <stdio.h>
void main() {
    // 1. 2���� �迭 ����
    int arr[2][3];    // arr�� 6���� ������ �޾Ƶ��̴� �迭(����)�� ����
                      // 2���� �迭�� �׻� 0��° �ε���(0�� 0��)���� ����
                      // �� �ε����� ��� ���� Ȯ���� ���� ���� ����
    int n = 0;
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 2; j++) {
            arr[i][j] = ++n;
            printf("[%d]�� [%d]�� = %d��°�� �����Ͱ� ����� ��ġ.\n", i, j,arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 2. 2���� �迭 �ʱ�ȭ(���� ����)
    int arr[2][3] = {0,1};
    for (int i = 0; i < 3, i++) { // 1, 2�� ��� �� ���� ���� 1���� 0���� ä����.
        printf("%d\n", arr[i]);
    }
}

#include <stdio.h>
void main() {
    // 2. 2���� �迭 �ʱ�ȭ(���� ����)
    int arr[2][3] = { {3,7,1} , {4,9,2} }; // ũ�� �� ���� ä���� ���(����)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
         }
    }
}

#include <stdio.h>
void main() {
    // 2. 2���� �迭 �ʱ�ȭ(���� ����)
    int arr[2][3] = { {3,7,1} , {4,9, } }; // �ʱⰪ �Ϻ� ����
    for (int i = 0; i < 2; i++) {          // ũ�� �� ��� �ִ� ������ 0���� ä��
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 2. 2���� �迭 �ʱ�ȭ(���� ����)
    int arr[2][3] = { 1,2,3,4 };           // ���� ����
    for (int i = 0; i < 2; i++) {         
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}

#include <stdio.h>
void main() {
    // 3. 2���� �迭�� �߸��� ǥ��
    // 3�� 2��
    // int arr1[2][3] = { {1,2}, {3,4}, {5,6} }; 
    
    // ��(��ġ)�� �����ص� ������ ��(��)�� �����ϸ� ���� �߻�
    // int arr2[][] = { {1,2,3}, {4,5,6} };
    // int arr3[2][] = { {1,2,3}, {4,5,6} };

    int arr4[][3] = { 1,2,3,4,5,6,7 };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i, j, arr4[i][j]);
        }
    }
}
*/
