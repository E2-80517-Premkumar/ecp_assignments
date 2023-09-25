#include<stdio.h>

typedef struct student
{
	char name[20];
	int rollno;
	int std;
	float marks;
}stud_t;

void accept_data(stud_t *);
void write_data(stud_t *);
void read_data(void);

int main(void)
{
	stud_t s[3];
	accept_data(s);
	write_data(s);
	read_data();

	return 0;
}

void accept_data(stud_t *s)
{
	printf("Enter student details (name, rollno, std, marks) : \n");
	for(int i=0; i<3; i++)
		scanf("%s %d %d %f", s[i].name, &s[i].rollno, &s[i].std, &s[i].marks);
}

void write_data(stud_t *s)
{
	FILE *fp = fopen("student.txt", "w");

	for(int i=0; i<3; i++)
		fprintf(fp, "%s %d %d %f", s[i].name, s[i].rollno, s[i].std, s[i].marks);

	fclose(fp);
}

void read_data(void)
{
	stud_t s;
	FILE *fp = fopen("student.txt", "r");

	while(fscanf(fp, "%s %d %d %f", s.name, &s.rollno, &s.std, &s.marks) != EOF)
		printf("%s %d %d %.2f\n", s.name, s.rollno, s.std, s.marks);

	fclose(fp);
}

