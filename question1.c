#include <stdio.h>

float toCelsius(float f) {
	return (f - 32) * 5.0/9.0;
}

int main() {
	float celsius, fahrenheit;
	printf("Enter fahrenheit: ");
	scanf("%f", &fahrenheit);

	celsius = toCelsius(fahrenheit);

	printf("Celsius: %.2f\n", celsius);

	return 0;
}

