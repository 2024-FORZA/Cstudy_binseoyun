/*#include<stdio.h>
int main() {
 //처음에 모든 문을 열고
	//2의배수 방의 문을 닫고
	//3의 배수 방의 문 중 닫힌 것을 열고, 열린 것은 닫음
	//k
	//열려있는 방 학생은 도주
	int T;
	scanf("%d", &T); //첫 번 째 줄에는 테스트 케이스 T 가 주어짐
	while (T--) {
		int n;
		scanf("%d", &n);
		//5개의 방
		//1,2,3,4,5 열려있는 방 1의 배수
		//1,3,5 열림 2,4 닫음 2의 배수
		//1,5 열림 3,2,4 닫음 3의 배수
		//1,4,5 열림 3,2 닫음 4의 배수
		//1,4 열림 5,3,2 닫음 5의 배수

		int num[100] = { 0 }; //처음에 다 닫혀있는 걸로 설정
		int now;
		
			for (int i = 1; i <= n; i++) {

				for (int j = 1; j <= n; j++) {

					now = i * j;
					if (now <= n) {
						if (num[now-1] == 0) {
							num[now-1] = 1; //닫혀있으면 열려있게
						}
						else if(num[now-1]==1){
							num[now-1] = 0; //열려있으면 닫혀있게 설정
						}
					}

					else if(now>n){
						break;
					}

				}
			}
			int count = 0;
			for (int k = 0; k < n; k++) {
				if (num[k] == 1) {
					count++;
				}
			}
			printf("%d\n", count);

		}
		
	}

	*/
