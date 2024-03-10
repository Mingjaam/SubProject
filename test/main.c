#include <stdio.h>
#include <stdlib.h>
int sub(int a, int b) {
	return a - b;
}
int main() {
	int result = 0;
	result = sub(2, 3);
	printf("%d\n", result);
	system("pause");
	return 0;
}