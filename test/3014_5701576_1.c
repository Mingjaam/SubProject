#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	int i, j;  //�ݺ������� ����� ����
	int sum = 2; //��ü �� sum (�Ҽ��� 2�� �ݺ������� ��� ���� �ʱ⿡ ���� ��)
	clock_t start, stop;  //�ð� ����� �� start, stop
	double duration;     //���� �ð� ����

	start = clock();

	for (i = 3; i <= 100; i++) {      //3���� 100���� i ����

		for (j = i - 1; j >= 1; j--) {   //i �� i ���� ���� �� j�� ������ �������� break, �ȶ������� j�� 1�� �ɶ����� j����

			if (j == 1) { sum += i; } //j�� 1�� �Ǹ� �� ���� �Ҽ� ������ sum���� �߰�
			else if (i % j == 0) { break; }  //�������� �Ҽ��� �ƴϹǷ� break

		}

	}

	printf("%d\n", sum);

	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;    // ����ð� ����
	printf("����ð��� %f���Դϴ�.\n", duration);

	return 0;

}//5701576