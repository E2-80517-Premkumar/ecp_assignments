#include<stdio.h>
#include<limits.h>

int main(void)
{
  	printf("1)Data Type\t 2)Size\t 3)Format Specifier\t 4)Range\n");

	printf("char\t  %ld\t  %%c\t  %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("unsigned char\t  %ld\t  %%c\t  %d to %d\n", sizeof(char), 0, CHAR_MAX);

	printf("short int\t  %hd\t  %%hd\t  %hd to %hd\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("unsigned short int%hu\t  %%hu\t  %d to %hu\n", sizeof(unsigned short int), 0, USHRT_MAX);

	printf("int\t  %d\t  %%d\t  %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int\t  %u\t  %%u\t  %d to %u\n", sizeof(unsigned int), 0, UINT_MAX);

	printf("long int\t  %ld\t  %%ld\t  %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
	printf("unsigned long int %lu\t  %%lu\t  %d to %lu\n", sizeof(unsigned long int), 0, ULONG_MAX);
	

	return 0;
}

