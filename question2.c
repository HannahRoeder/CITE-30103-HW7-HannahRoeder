#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a;  
    	if (b > max) {
        	max = b;
    	}
    	if (c > max) {
        	max = c;
    	}
   	 return max;
}

int main() {
        int num1, num2, num3;
        int largest;

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("Enter the third number: ");
        scanf("%d", &num3);

        largest = max3(num1, num2, num3);

        printf("Largest: %d\n", largest);

        return 0;

}
