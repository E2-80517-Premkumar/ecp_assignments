#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	int std;
	float marks;
}stud_t;

void accept_data(stud_t *);
void printf_data(stud_t *);

int main(void)
{
	stud_t s[5];
	printf("Enter the student information : \n");
	accept_data(s);
	print_data(s);

	return 0;
}

void accept_data(stud_t *s)
{
	for(int i=0; i<5; i++)
		scanf("%d %s %d %f", &s[i].rollno, s[i].name, &s[i].std, &s[i].marks);
}

void print_data(stud_t *s)
{
	printf("Student Info : \n");
	for(int i=0; i<5; i++)
		printf("Roll No. : %d\t Name : %s\t Std : %d\t Marks : %.2f\n", s[i].rollno, s[i].name, s[i].std, s[i].marks);
}

