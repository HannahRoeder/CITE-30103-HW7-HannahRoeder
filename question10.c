#include <stdio.h>

int main() {
	int A[3][3], B[3][3], C[3][3];

	printf("Enter 9 integers for Martix A:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter 9 integers for Matric B:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("\nMatrix A:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix B: \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}

	printf("\nsum of matrix C: \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
