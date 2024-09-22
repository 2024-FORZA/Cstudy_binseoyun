
//1357번
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int reverse(char a[]); 
int main() {
    char X[5];
    char Y[5];
    scanf("%s %s", X, Y);  

    int x_r = reverse(X);
    int y_r = reverse(Y);
    int sum = x_r + y_r;

    char sum_arr[10];  
    sprintf(sum_arr, "%d", sum); //sum을 sum_arr로 변경해준다

    printf("%d", reverse(sum_arr));
    return 0;
}

int reverse(char a[]) {  
    int len = strlen(a);
    char new[5];  // 크기 5로 유지
    for (int i = len - 1; i >= 0; i--) {
        new[len - i - 1] = a[i];
    }
    new[len] = '\0';  // 종료 문자 삽입

    return atoi(new);  // 문자열을 숫자로 변환
}
