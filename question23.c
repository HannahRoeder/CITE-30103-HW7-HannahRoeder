#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	int *arr;
	float sum = 0.0;
	float average;

	printf("Number of integers: ");
	scanf("%d", &n);

	arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	printf("Enter %d integers:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	average = sum /n;

	printf("Average: %.2f\n", average);

	free(arr);

	return 0;
}
