/*
//1357��
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
    sprintf(sum_arr, "%d", sum); //sum�� sum_arr�� �������ش�

    printf("%d", reverse(sum_arr));
    return 0;
}

int reverse(char a[]) {  
    int len = strlen(a);
    char new[5];  // ũ�� 5�� ����
    for (int i = len - 1; i >= 0; i--) {
        new[len - i - 1] = a[i];
    }
    new[len] = '\0';  // ���� ���� ����

    return atoi(new);  // ���ڿ��� ���ڷ� ��ȯ
}
*/