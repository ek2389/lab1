#include <stdio.h>

int main()
{
	int F,C,i;

	printf("Fahrenheit\tCelsius\n==========\t=======\n");
	
	for(i=0; i<=300; i = i + 10)
		{
			F = i;
			C = (5*(F-32)/9);
			printf("%d\t\t%d \n", F, C);
		}
}