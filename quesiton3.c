#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if (n <= 1) {
        	return 0;  
    	}

    	for (int i = 2; i <= (int)sqrt(n); i++) {
        		if (n % i == 0) {
            			return 0;
        	}
    }

    return 1; 
}

int main() {
	int num;

	printf("Enter a number: ");

	scanf("%d", &num);

	int result;

	result = isPrime(num);

	if (result == 1) {
		printf("Prime.\n");
	}
	else {
		printf("Not Prime.\n");
	}
}
