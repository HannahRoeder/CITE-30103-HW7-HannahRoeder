#include <stdio.h>

int main() {
	char str1[201], str2[101];

	int i, j;

	printf("First string: ");
	scanf("%s", str1);

	printf("Second string: ");
	scanf("%s", str2);

	for (i = 0; str1[i] != '\0'; i++);

	for (j = 0; str2[j] != '\0'; j++, i++) {
		str1[i] = str2[j];
	}

	str1[i] = '\0';

	printf("%s\n", str1);

	return 0;


}
