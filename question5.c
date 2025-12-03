#include <stdio.h>

long factorial(int n) {
	if (n < 0) {
		printf("Error.");
		return -1;
	}
	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main() {
	int num;
	long result;

	printf("Number: ");
	scanf("%d", &num);

	result = factorial(num);

	if (result != -1){ 
		printf("%ld\n", result);
	}

	return 0;
}
