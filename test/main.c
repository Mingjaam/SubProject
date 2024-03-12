#include <stdio.h>

int main(void) {

	int i, j;
	int sum = 2;

	for (i = 3; i <= 100; i++) {
		
		for (j = i-1; j >= 1; j--) {

			if (j == 1) { sum += i ; }
			else if (i % j == 0) { break; }

		}

	}

	printf("%d", sum);

	return 0;

}//5701576