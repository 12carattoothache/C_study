/*
- 7. �ڷ��� ��ȯ �� Cast ������
    : ����
    ; ���� �Ǵ� ����� ���Ͽ� ����� �ڷ������� '���� ��ȯ'
    - ������ �� ��ȯ�� �ߴٰ� �ؼ� ��� �ҽ��� ������ �ִ� ���� �ƴ�.
    - ��, �Ͻ��� ��ȯ�� ��.
    ; ����Ŀ����� �ڷ��� ��ȯ
    - ���� �ٸ� �ڷ��� �������� ������ ����Ǵ� ���
    - ���� ������ ũ�Ⱑ ū �������� �ڷ������� �ϰ��� ��ȯ
    ; ���ԽĿ����� �ڷ��� ��ȯ
    - ���Կ����� ������ ������ �ڷ����� ������ ������ �ڷ������� ��ȯ
    : �ǽ�

#include <stdio.h>
    void main() {
    printf("5/2 : %d\n", 5 / 2);                     // ����|����
    printf("5/2 : %d\n", (float)5 / (float)2);       // �Ǽ�|�Ǽ�
    printf("5/2 : %lf\n", (float)5 / (float)2);      // �Ǽ�|�Ǽ�

    printf("5/2.0 : %lf\n", 5 / 2.0);                // ����|�Ǽ�
    printf("5/2.0 : %lf\n", (float)5 / (int)2.0);    // �Ǽ�|����
    printf("5.0/2 : %d\n", (int)5.0 / (int)2);       // ����|����
}

#include <stdio.h>
void main() {
    int n1 = 5, n2 = 2;
    double n3;
    printf("��� 1 : %d\n", n1 / n2);

    n3 = (double)n2;
    // (double)n2 = n3;    // Cast�����ڴ� ��ȣ ���ʿ��� ��� �Ұ�
    printf("��� 2 : %.2lf\n", n3);
}

- 8. ũ�⸦ ���ϴ� sizeof()������ - �������� �� ���� ���
    : �ǽ�

#include <stdio.h>
void main() {
    int a = 10;
    short int s = 10;
    char c = 'a';
    char cc[10] = "samadal";   // ũ��� 10byte��� �ǹ�.
    int su1 = 123;
    float su2 = 12.345;
    long float su3 = 12.345;
    printf("������ ũ�� : %zdbyte\n", sizeof(a));   //sizeof�� ���� ������ %d ��� %zd�� ���.
    printf("������ ũ�� : %zdbyte\n", sizeof(s));
    printf("������ ũ�� : %zdbyte\n", sizeof(int));
    printf("������ ũ�� : %zdbyte\n", sizeof(c));
    printf("������ ũ�� : %zdbyte\n", sizeof(char));
    printf("���ڿ��� ũ�� : %zdbyte\n", sizeof(cc));
    printf("�Ǽ��� ũ�� : %zdbyte\n", sizeof(float));
    printf("�Ǽ��� ũ�� : %zdbyte\n", sizeof(double));
    printf("������ ũ�� : %zdbyte\n", sizeof(su1 + su2));   // 4byte + 4byte != 8byte
    printf("������ ũ�� : %zdbyte\n", sizeof(su1 + su3));   // ���� �ٸ� �ڷ����� ����: ũ�Ⱑ ū ������ ����
}
07. ǥ�� �Է� �Լ�(�ſ� �߿�) - scanf()
    - 1. ����
        : �ܼ�â(����â)�� '�Է��� ��'�� ���� �޸�(����)�� ������ �� ���
        : ������ �ڷ����� �Բ� �����ϰ� �Ǹ� �� �ڷ����� �´� ũ���� �޸� �Ҵ�
        : ������ ��� ������ 'stdio.h'�̴�.
    - 2. scanf()�� scnaf_s()
        : ����(scanf)
        'scanf': This function or variable may be unsafe. Consider using scanf_s instead.
        To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
        : �ذ�(scanf_s)
            scanf()�Լ��� 'Overflow(�����÷ο�)'�� �ſ� ����ϰ� �������� �ʴ�.
            (VC++2010 ���ĺ��� �Է��Լ��� ���� �޸� ���� ���� ���� ������ �߻�)
    - 3. ����
        : int scanf(const char *format [, argument,]....)

    - 4. �������
        : ������ �Է� �޴� ���
            int data1;
            scanf("%d", &data1);    // �����ʹ� ��ġ��, &�� ��ġ�� ���� ���
        : �Ǽ��� �Է� �޴� ���
            float data2;
            double data3;
            scanf("%f", &data2);
            scanf("lf", &data3);
        : ���ڸ� �Է� �޴� ���
            char data4;
            scanf("%c", &data4);
        : ���ڿ��� �Է� �޴� ���
            char data5[10];    // ���ڿ��� �迭(�ϳ��� ������ �������� ���� ����)�� ǥ��
            scanf("%s", &data5);

- �ǽ�

#include <stdio.h>
void main() {

    int d;      // ������ �Է¹��� ���
    printf("���� �Է� : ");
    scanf_s("%d", &d);
    printf("�Է��� ������ %d�̴�.\n", d);

    float f1;
    double f2;
    printf("�Ǽ��� ���� 2�� �Է� : ");   // \n�� �����������.
    scanf_s("%f%lf", &f1, &f2);    // \n�� �����������.
    printf("�Է��� �Ǽ� 2���� %.2f�� %.2lf�̴�.\n", f1, f2);

    char ch;
    printf("���� �Է� : "); scanf_s("%c", &ch, 1);   // 1byte.
    printf("�Է��� ���ڴ� %c�̴�\n", ch);
    // ���
    // 'scanf_s': ���� ���ڿ��� ���� �μ��� ����ϰ� ���޵��� �ʾҽ��ϴ�.
    // message: �ڸ� ǥ���� �� �ش� �Ű� �������� variadic �μ��� 2�� �ʿ������� 1���� �����Ǿ����ϴ�.
    // message: ������ variadic �μ� 2��(��) ���� ���ڿ� '%c'�� �ʿ��մϴ�.
    // message: �� �μ��� ���� ũ��� ���˴ϴ�.
    // ����
    // ���ڸ� �Է��� ���� ���ڸ� ������ ����(Buffer)�� ũ��(byte)�� �Է��ؾ� �Ѵ�.

    // ���ڿ��� �Է¹��� ���
    - ���� 1
    char str1[10];
    printf("���ڿ� �Է� : "); scanf("%s", str1);
    printf("�Է��� ���ڿ��� %s�̴�.\n", str1);

    - ���� 2
    char str2[10];
    printf("���ڿ� �Է� : ");
    while (getchar() != "\n");
    scanf("%s", str2);
    printf("�Է��� ���ڿ��� %s�̴�.\n", str2);

    - ���� ��� 1
    char str3[50];
    printf("���ڿ� �Է� : ");
    gets_s(str3, sizeof(str3));    // gets_s(�Է���ġ, �Է� ��� ũ��);
                                   // ���� ó���ϴ� ������� "���ũ��-1"
    printf("�Է��� ���ڿ��� %s�̴�.\n", str3);

    - ���� ��� 2
    char str1[10];
    printf("���ڿ� �Է� : "); scanf_s("%s", &str1, 10);
    printf("�Է��� ���ڿ��� %s�̴�.\n", str1);
}
*/