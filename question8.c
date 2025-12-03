#include <stdio.h>

int main() {
	int num;
	int arr[100];
	int evenCount = 0;
	int oddCount = 0;

	printf("How many integers: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);

				if (arr[i] % 2 == 0)
					evenCount++;
				else
					oddCount++;
	}
	printf("Even: %d\n", evenCount);
	printf("Odd: %d\n", oddCount);

	return 0;
}
