#include <stdio.h>
#include <string.h>

int main() {
    char S[101];  
    int position[26];  
    
    // 처음 등장하는 위치를 모두 -1로 초기화
    for (int i = 0; i < 26; i++) {
        position[i] = -1;
    }

  
    scanf("%s", S);
    
   
    for (int i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a';  // 문자 'a'부터의 인덱스 계산
        if (position[index] == -1) {  
            position[index] = i;
        }
    }

   
    for (int i = 0; i < 26; i++) {
        printf("%d ", position[i]);
    }

    return 0;
}
