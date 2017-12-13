#include <stdio.h>
#include <stdlib.h>

int test(int x)
{
	if (x > 10)
	{ 
	return 1;
	}
	return 0;
}

int main()
{
	int y;
	printf("rentrer une valeur :");
	scanf("%d",&y);
	if (test(y)==1)
	{
	printf("x supérieur à 10");
	}
	else
	{
	printf("x inférieur à 10");
	}
return 0;
}
