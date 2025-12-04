#include <stdio.h>

int square(int x) {
	return x * x;
}

int main() {
	int num = 5;
	int result;

	int (*functionPointer)(int);

	functionPointer = square;

	result = functionPointer(num);

	printf("The square of %d is %d\n", num, result);

	return 0;
}
