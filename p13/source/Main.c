#include<stdio.h>
#include<stdlib.h>
void cube(int &nptr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	cube(number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}
void cube(int &nptr)
{
	nptr = nptr*nptr*nptr;
}