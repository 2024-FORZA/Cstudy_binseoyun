#include <stdio.h>
#include <string.h>

int contains666(int num) {
    char str[20];
    sprintf(str, "%d", num);  // ���ڸ� ���ڿ��� ��ȯ
    return strstr(str, "666") != NULL;  // "666"�� ���ԵǾ����� Ȯ��
}

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 666;

    // N��° ������ ���ڸ� ã�� ������ �ݺ�
    while (1) {
        if (contains666(num)) {
            count++;
        }

        if (count == N) {
            printf("%d\n", num);
            break;
        }

        num++;
    }

    return 0;
}
