/*
08. ���
8.2 switch ~ case��
    - �ǽ�
        : ������ �������� ������ ����ϴ� �ҽ�
            A����(100~90)
            B����(89~80)
            C����(79~70)
            D����(69~60)
            F����(59~0)

#include <stdio.h>
void main() {
    int jumsu;
    printf("������ �Է��ض� : "); scanf_s("%d", &jumsu);
    if (0 <= jumsu && jumsu <= 100) {
        switch (jumsu / 10) {
        case 10:
        case 9: printf("A����(%d)\n", jumsu); break;
        case 8: printf("B����(%d)\n", jumsu); break;
        case 7: printf("C����(%d)\n", jumsu); break;
        case 6: printf("D����(%d)\n", jumsu); break;
        default: printf("F����(%d)\n", jumsu); break;
        // case�� ifó�� ������ �������ϰ� ��(����) �ϳ����� ���� �� �ִ�.
        }
    }
    else {
        printf("������ �߸� �ԷµǾ����ϴ�\n");
    }
}

cf) �ڵ����� ���� ���Ǵ� ��ȣ�� ���
& - Ampersand
@ - At
* - Asterisk
_ - Underscore
- - Hyphen
^ - Circumflex, Caret
` - Grave
~ - Tiddle
! - Exclamation Point
    
    - �ǽ�
        : 3�� ����� �Ǻ��� �� �ִ� �ҽ�

#include <stdio.h>
void main() {
    int n,ref;
    printf("������ �Է� : "); scanf_s("%d", &n);
    ref = n % 3;
    
    switch (ref) {
    case 0: printf("%d�� 3�� ����̴�.\n", n); break;
    default: printf("%d�� 3�� ����� ^�ƴϴ�.^\n", n); break;
    }

}

8.3 for��
    - ����
        : ������ ������ �����Ǵ� ���� � ó���� ������ Ƚ����ŭ �ݺ��ؼ� ����
        : ���� �ڵ� �Ǵ� ������ �ڵ带 ������ �����Ű���� �� �� ���
    
    - ����
       for (�ʱ��; ���ǽ�; ������) {
           �ݺ��� ��ɹ�;
       }
       ���� ����;

    - ���� for��

#include <stdio.h>
void main() {
    // for�� �ȿ� �ʱⰪ�� �־��� ��� 
    for (int i = 0; i<2; i++) { // i++�� ���Ҵ� ������
        // �ʱⰪ�� �� �� �а� �� �̻� �� �д´�.
        printf("i1 = %d\n", i); // ���ǽ��� �����϶����� ��� �ݺ�
    }
    // printf("i2 = %d\n", i);    // ����
                                  // ���� i�� for�� �ȿ��� ����(��������)�Ǿ� �ֱ� ����.
}


#include <stdio.h>
void main() {
    // for�� �ۿ� �ʱⰪ�� �־��� ���(���� �⺻���� ���)
    int i;
    for (i = 0; i < 2; i++) { // ���ǽ��� �������� for���ȿ����� ����. 
        printf("i1 = %d\n", i); 
    }
    printf("\ni2 = %d\n", i); // ���� for�� ���� i2�� 2��� ���� �޴´�.
}

#include <stdio.h>
void main() {
    // ���� ���ø� if������ �ٲٱ�.
    int i = 0;
    if (i < 2) { //for���� ���ǹ��� if�� ���ǿ� �ֱ�
        printf("i1 = %d\n", i++); //for���� �������� �ֱ�
        printf("i1 = %d\n", i++);
        printf("i2 = %d\n", i++);
    }
    else {
        printf("���� ����");
    }
}

- �ǽ�: 1 - ������ ���� ����Ϸ���?
    1. Hello
    2. Hello
    3. Hello
    4. Hello

     : 2 - ������ ���� ����Ϸ���?
         A, B, C, D ..., X, Y, Z

     : 3 - ������ ���� ����Ϸ���?
         3+6+9=18

// 1 -
#include <stdio.h>
void main() {
    int i = 1;
    for (i; i < 5; i++) printf("%d. Hello\n", i);
}

// 2 -
#include <stdio.h>
void main() {
    char ch = 'A';
    int i = 0;
    for (i; i < 26; i++) {
        printf("%c, ", ch + i);
    }
    printf("\b\n"); //������ ��ǥ�� ���������ϴµ� �ý��� ��ü�� ����.
}
// ASCII CODE�� ���� ����(���ڸ� ���� ���� ǥ��)

// 3 -

#include <stdio.h>
void main() {
    int i, sum = 0; // sum�� �ʱⰪ �ݵ�� ����
    for (i = 1; i < 11; i++) {
        if (i % 3 == 0) {
            printf("%d+", i);
            sum += i;
        }
    }
    printf("\b=%d\n", sum);
}
*/



