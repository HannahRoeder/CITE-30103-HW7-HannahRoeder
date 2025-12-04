#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int isPalindrome = 1;

	printf("Enter a word: ");
	scanf("%s", str);

	int length = 0;
	while (str[length] != '\0') {
		length++;
	}

	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - 1 - i]) {
			isPalindrome = 0;
		}
	}

	if (isPalindrome) {
		printf("Palindrome\n");
	}
	else {
		printf("Not palindrome\n");
	}
	return 0;
}
