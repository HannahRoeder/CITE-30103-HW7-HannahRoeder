#include <stdio.h>

struct Student {
	char name[40];
	int roll;
	float marks;
};

int main() {
	struct Student s[5];
int i;

for (i = 0; i < 5; i++) {
	printf("Name for student %d: ", i + 1);
	scanf("%39s", s[i].name);

	printf("roll number: ");
	scanf("%d", &s[i].roll);

	printf("marks: ");
	scanf("%f", &s[i].marks);

	printf("\n");
}

printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");

for (i = 0; i < 5; i++) {
	printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
}
return 0;
}
