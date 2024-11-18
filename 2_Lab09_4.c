#include<stdio.h>
#include<string.h>
int main() {
	char dist[50];
	scanf("%s", dist); //그릇의 방향을 입력받음

	int s = strlen(dist);
	int h = 10; //처음 놓으면 무조건 10cm이니깐

	for (int i = 1; i < s; i++) { //다음 놓았을 때 부터 생각함
		
		if (dist[i] == dist[i-1]) { //이 전과 같다면
			h += 5;

		}
		else   {
			h += 10;
		}
	}
	printf("%d", h);
}