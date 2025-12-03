#include <stdio.h>

int main() { 
	int arr[10];

	for (int i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}

	int max;
	max = arr[0];

	int min;
	min = arr[0];

	for (int j = 0; j < 10; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
		if (arr[j] < min) {
			min = arr[j];
		}
	}

	printf("smallest: %d\n", min);
	printf("largest: %d\n", max);
	return 0;
}	
