#include <stdio.h>

struct Student {
	char name[4];
	int roll;
	float marks;
};

int main() {
	struct Student s[5];
	int i;
	int top = 0;

	for (i = 0; i < 5; i++) {
		printf("name: ");
		scanf("%39s", s[i].name);

		printf("rolls: ");
		scanf("%d", &s[i].roll);

		printf("marks: ");
		scanf("%f", &s[i].marks);

		printf("\n");
}

for (i = 1; i < 5; i++) {
	if (s[i].marks > s[top].marks) {
		top = i;
	}
}

printf("\nStudent with highest marks:\n");
printf("Name: %s\n", s[top].name);
printf("Roll: %d\n", s[top].roll);
printf("Marks: %.2f\n", s[top].marks);

return 0;
}
