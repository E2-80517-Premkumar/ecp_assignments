#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	int std;
	float marks;
}stud_t;

void accept_data(stud_t *s);
void print_data(stud_t *s);

int main(void)
{
	stud_t s;
	printf("Enter student info : ");
	
	accept_data(&s);
	print_data(&s);
	return 0;
}

void accept_data(stud_t *s)
{
	scanf("%d %s %d %f", &s->rollno, s->name, &s->std, &s->marks);
}

void print_data(stud_t *s)
{
	printf("Student Info : \n");
	printf("Roll No. : %d\nName : %s\nStd : %d\nMarks : %.2f\n", s->rollno, s->name, s->std, s->marks);
}

