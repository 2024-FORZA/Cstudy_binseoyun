#include <stdio.h>
#define MAX 10001  //outofbouns 되서 상수로 설정

int main() {
    int N, M;
    int arr[MAX] = {0};
    
    // 입력 받기
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= M; i++) {
        int hand1, hand2;
        scanf("%d %d", &hand1, &hand2);
        arr[hand1] = i;
        arr[hand2] = i;
    }

    // N을 (2 * M)으로 나눈 나머지 계산
    N %= (2 * M);
    if (N == 0) N = 2 * M;

    // N번째 손의 주인을 출력
    for (int i = 1, count = 0; i < MAX; i++) {
        if (arr[i] != 0) {
            count++;
            if (count == N) {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}

