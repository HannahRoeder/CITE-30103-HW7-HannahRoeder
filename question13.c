#include <stdio.h>

int main() {
	char str[101];

	int vowels = 0;
	int consonants = 0;
	int digits = 0;

	printf("Enter a word: ");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		char ch = str[i];

		if (ch >= 'A' && ch <= 'Z') {
			if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
				vowels++;
			else
				consonants++;
		}

		else if (ch >= 'a' && ch <= 'z') {
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
				vowels++;
			else
				consonants++;
		}

		else if (ch >= '0' && ch <= '9') {
			digits++;
		}
	}
	printf("Vowels: %d\n", vowels);
	printf("consonants: %d\n", consonants);
	printf("Digits: %d\n", digits);

	return 0;
}
