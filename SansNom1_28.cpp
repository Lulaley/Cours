#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int tablemultiplication(int nbr)
{
	int res,m;
	printf("\n+===========================+");
	for(m=1;m<=10;m++)
	{
	res=nbr*m;
	printf("\n| %d x %d = %d",m,nbr,res);	
		if (res<10)
		{
			printf("               |");
		}
		else if (res>=10 && res<100)
		{
			if (m<10)
			{
				printf("              |");
			}
			else if(m>=10)
			{
				printf("             |");
			}
		}
		else if (res>=100 && res<1000)
		{
			if(m<10)
			{
				printf("             |");
			}
			else if (m>=10)
			{
				printf("             |");
			}
		}
		else if (res>1000 && res<10000)
		{
			if(m<10)
			{
				printf("            |");
			}
			else if (m>=10)
			{
				printf("           |");
			}
		}
	}
	printf("\n+===========================+");
return 0;
}

int tablediviseur(int nbr)
{
	int d;
	int compteur=0;
	printf("\n+========================================+");
	for (d=1;d<=nbr;d++)
	{
		if(nbr%d==0)
		{
			compteur++;
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
return compteur;
}

int nbpremier(int nbr)
{
	int d;
	int compteur=0;
	
	for (d=1;d<=nbr;d++)
	{
		if(nbr%d==0)
		{
			compteur++;
		}
	}
return compteur;
}

int main()
{
	int nbr;
	
	printf("Veuillez entrez votre nombre :");
	scanf("%d",&nbr);
	
	tablemultiplication(nbr);
	tablediviseur(nbr);
	if (nbpremier(nbr)==2)
	{
		printf("\n+==========================+");
		printf("\n| Votre nombre est premier |");
		printf("\n+==========================+");
	}
	else 
	{
		printf("\n+================================+");
		printf("\n| Votre nombre n'est pas premier |");
		printf("\n+================================+");
	}
	
return 0;	
}

