#include<stdio.h>

int main(void)
{
	int emp_id, dept_no;
	char desg_code;
	printf("Employee Id : \nEx:1011/1012\n");
	scanf("%d", &emp_id);

	printf("Department No : \nEx:1)10 : marketing \n2)20  : Management \n3)30 : Sales \n4)40 : Designing \n");
	scanf("%d", &dept_no);

	printf("Designation Code : \nEx:M/S/s/C \n");
	scanf("%*c%c", &desg_code);

	switch(desg_code)
	{
		case 'M':
			if(dept_no == 10)
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Manager""\n", emp_id);
			else if(dept_no == 20)
				printf("Employee with employee id %d is working in ""Management"" department as ""Manager""\n", emp_id);
			else if(dept_no == 30)
				printf("Employee with employee id %d is working in ""Sales"" department as ""Manager""\n", emp_id);
			else if(dept_no == 40)
				printf("Employee with employee id %d is working in ""Designing"" department as ""Manager""\n", emp_id);
			else
				goto L1;
			break;

		case 'S':
			if(dept_no == 10)
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Supervisor""\n", emp_id);
			else if(dept_no == 20)
				printf("Employee with employee id %d is working in ""Management"" department as ""Supervisor""\n", emp_id);
			else if(dept_no == 30)
				printf("Employee with employee id %d is working in ""Sales"" department as ""Supervisor""\n", emp_id);
			else if(dept_no == 40)
				printf("Employee with employee id %d is working in ""Designing"" department as ""Supervisor""\n", emp_id);
			else
				goto L1;
			break;

		case 's':
			if(dept_no == 10)
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Security Officer""\n", emp_id);
			else if(dept_no == 20)
				printf("Employee with employee id %d is working in ""Management"" department as ""Security Officer""\n", emp_id);
			else if(dept_no == 30)
				printf("Employee with employee id %d is working in ""Sales"" department as ""Security Officer""\n", emp_id);
			else if(dept_no == 40)
				printf("Employee with employee id %d is working in ""Designing"" department as ""Security Officer""\n", emp_id);
			else
				goto L1;
			break;

		case 'C':
			if(dept_no == 10)
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Clerk""\n", emp_id);
			else if(dept_no == 20)
				printf("Employee with employee id %d is working in ""Management"" department as ""Clerk""\n", emp_id);
			else if(dept_no == 30)
				printf("Employee with employee id %d is working in ""Sales"" department as ""Clerk""\n", emp_id);
			else if(dept_no == 40)
				printf("Employee with employee id %d is working in ""Designing"" department as ""Clerk""\n", emp_id);
			else
				goto L1;
			break;
	}
L1:
	return 0;
}

