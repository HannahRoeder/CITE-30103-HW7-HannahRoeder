#include <stdio.h>

void swap(int *x, int *y) {

	int temp = *x;
	*x = *y;
	*y = temp;
}


int main() {
	int a, b;
	

	printf("Enter the first number: ");
	scanf("%d", &a);

	printf("Enter the second number: ");
	scanf("%d", &b);

	printf("before: a: %d, b: %d \n", a, b);

	swap(&a, &b);

	printf("after: a: %d, b: %d\n", a, b);
	return 0;
}
