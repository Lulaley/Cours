#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nbr,d;
	printf("Saisir votre nombre a diviser :");
	scanf("%d",&nbr);
	printf("+========================================+");
	for (d=1;d<=nbr;d++)
	{
		if(nbr%d==0)
		{
			printf("\n| Le diviseur de votre nombre est :%d",d);
			if(d>=10 && d<100)
				{
					printf("    |");
				}
			else if(d>=100 && d<1000)
				{
					printf("   |");
				}
			else if(d>=1000 && d<10000)
				{
					printf("  |");
				}
			else if(d>=10000)
				{
					printf(" |");
				}
			else if(d<10)
				{
					printf("     |");
				}
		}
	}
	printf("\n+========================================+");
	return(0);
}	
