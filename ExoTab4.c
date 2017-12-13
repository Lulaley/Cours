#include <stdio.h>

int main()
{
	int tab[20];
	int i,j,temp,debut,fin,milieu,trouve,valeur;
	i=0;
	
	for(i=0;i<20;i++)
	{
		printf("Entrez un nombre %d : ",i);
		scanf("%d",&tab[i]);
	}
	
	printf("\nEntrez la valeur a chercher :");
	scanf("%d",&valeur);
	
	for(i=0;i<20;i++)
	{
		for(j=i+1;j<20;j++)
		{
			if (tab[i]>tab[j])
			{
				temp=tab[i];
				tab[i]=tab[j];
				tab[j]=temp;
			}
		}
	}

	debut=0;
	fin=19;
	
	
	while(trouve==0 && debut<=fin)
	{
		milieu=(int) ((debut+fin)/2);
		if(valeur==tab[milieu])
		{
			trouve=1;
		}
		else if (valeur<tab[milieu])
		{
			fin=milieu-1;
		}
		else 
		{
			debut=milieu+1;
		}
	}
		
	if(trouve==1)
	{
		printf("La valeur existe à la case : %d",milieu);
	}
	else
	{
		printf("Le tableau ne contient pas cette valeur");
	}
	
	
return 0;
}
