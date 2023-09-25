#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}stud_t;

int main(void)
{
	stud_t s;
	printf("Enter the student info : ");
	scanf("%d %s %f", &s.rollno, s.name, &s.marks);

	printf("Student Info : \n");
	printf("Roll No. : %d\nName : %s\nMarks : %.2f\n", s.rollno, s.name, s.marks);

	return 0;
}

