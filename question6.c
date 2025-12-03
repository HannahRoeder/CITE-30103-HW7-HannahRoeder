#include <stdio.h>

int main() {
	int n;
	int arr[100];
	int sum = 0;
	float average;

	printf("How many ints (no more than  100)?");
	scanf("%d", &n);

	if (n < 1 || n > 100) {
		printf("Error: n must be between 1 and 100.\n");
		return 1;
	}

	printf("Enter %d integers:\n", n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[1]);
		sum += arr[i];
	}

	average = (float)sum / n;

	printf("Total: %d\n", sum);
	printf("Agerage: %.2f\n", average);

	return 0;
}
