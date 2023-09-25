#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	int std;
	union result
	{
		char grade;
		float percent;
	}res;
}stud_t;

void accept_data(stud_t *s);
void accept_data(stud_t *s);

int main(void)
{
	stud_t s[3];

	accept_data(&s);
	print_data(&s);

	return 0;
}

void accept_data(stud_t *s)
{
	printf("Enter students information (rollno, name, std) : ");
	for(int i=0; i<3; i++)
	{
		scanf("%d %s %d", &s[i].rollno, s[i].name, &s[i].std);
		if(s[i].std > 4)
		{
			printf("Enter percentage : ");
			scanf("%f", &s[i].res.percent);
		}
		else
		{
			printf("Enter grade : ");
			scanf("%*c%c", &s[i].res.grade);
		}
	}
}

void print_data(stud_t *s)
{
	printf("Students Informatiom  : \n");
	for(int i=0; i<3; i++)
	{
		printf("%d %s %d ", s[i].rollno, s[i].name, s[i].std);
		if(s[i].std > 4)
			printf("%.2f\n", s[i].res.percent);
		else
			printf("%c\n", s[i].res.grade);
	}
}
