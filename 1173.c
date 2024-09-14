#include<stdio.h>
int main() {
	int N, m, M, T, R;
	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

	/*T:증가하는 맥박
	  M:최대맥빅
	  R:감소하는 맥박
	  m:최소맥박,초기맥박
	  N:운동시간*/
	int count = 0; //현재까지 시간
	int time = 0; //실제 운동을 한 시간
	int X = m;//현재 맥박

	if (X + T > M) {
		printf("-1\n");
		return 0;
		
	}
	while (time<N) 
	{
		

		if (X + T <= M) {
			
			X += T;
			time += 1;

		}

		
		else {
			
			X -= R;
			
			
			if (X < m) {
				X = m;
			}
			
		}


		count += 1;


	}
	
	printf("%d\n", count);

}