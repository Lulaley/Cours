#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int tablemultiplication(int nbr)
{
	int res,m;
	printf("\n+========================================+");
	for(m=1;m<=10;m++)
	{
	res=nbr*m;
	printf("\n| %d x %d = %d |",m,nbr,res);	
	}
	printf("\n+========================================+");
return 0;
}

int tablediviseur(int nbr)
{
	int d;
	printf("\n+========================================+");
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
return 0;
}

int nbpremier(int nbr)
{
	int i,reste;
	double racine, nbr_d;
	nbr_d=(double)nbr;
	racine=sqrt(nbr_d);
	if (nbr%2==0)
	{
		return 0;
	}
	else 
	{
		for (i=3;i<=racine;i+=2)
		{
			while(reste!=0 || i<=racine)
			{
				reste=nbr%i;
			}
		}
	}

	if (reste!=0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int nbr;
	
	printf("Veuillez entrez votre nombre :");
	scanf("%d",&nbr);
	
	tablemultiplication(nbr);
	tablediviseur(nbr);
	nbpremier(nbr);
	
return 0;	
}
