#include <stdio.h>

int main() {
	char str[101];
	int i = 0;
	int words = 0;
	int word = 0;

	printf("Enter a string: ");
	fgets(str, 101, stdin);

	while (str[i] != '\0') {
		if (str[i] != ' ' && str[i] != '\n') {
			if (!word) {
				words++;
				word = 1;
			}
		}
		else {
			word = 0;
		}
		i++;
	}
	printf("Number of words: %d\n", words);

	return 0;
}
