#include <stdio.h>

int main()
{
	char someVector[] = "input vector string";
	int i,j;

	for (j=0; someVector[j] !="0"; j++)
	{
		i++;
	}

	printf("length of string: %d", i)
}