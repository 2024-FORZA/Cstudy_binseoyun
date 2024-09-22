#include <stdio.h>
#include <string.h>

int contains666(int num) {
    char str[20];
    sprintf(str, "%d", num);  // 숫자를 문자열로 변환
    return strstr(str, "666") != NULL;  // "666"이 포함되었는지 확인
}

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 666;

    // N번째 종말의 숫자를 찾을 때까지 반복
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
