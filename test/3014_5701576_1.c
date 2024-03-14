#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	int i, j;  //반복문에서 사용할 정수
	int sum = 2; //전체 합 sum (소수중 2는 반복문에서 계산 하지 않기에 먼저 합)
	clock_t start, stop;  //시간 계산을 할 start, stop
	double duration;     //수행 시간 선언

	start = clock();

	for (i = 3; i <= 100; i++) {      //3에서 100까지 i 증가

		for (j = i - 1; j >= 1; j--) {   //i 를 i 보다 작은 수 j로 나누어 떨어지면 break, 안떨어지면 j가 1이 될때까지 j감소

			if (j == 1) { sum += i; } //j가 1이 되면 그 수는 소수 임으로 sum값에 추가
			else if (i % j == 0) { break; }  //떨어지면 소수가 아니므로 break

		}

	}

	printf("%d\n", sum);

	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;    // 수행시간 계산식
	printf("수행시간은 %f초입니다.\n", duration);

	return 0;

}//5701576