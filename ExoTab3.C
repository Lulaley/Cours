#include <stdio.h>

int main()
{
	int tab[20];
	int position,i,j,temp,max,indicemax;
	
	for(i=0;i<20;i++)
	{
		printf("Entrez un nombre :");
		scanf("%d",&tab[i]);
	}
	
	printf("Entrez une position :");
	scanf("%d",&position);
	
	if (position>0 && position<=20)
	{
		for(i=0;i<(position-1);i++)
		{
			for(j=i+1;j<position;j++)
			{
				if (tab[i]>tab[j])
				{
					temp=tab[i];
					tab[i]=tab[j];
					tab[j]=temp;
				}
			}
		}
		
		
		for(i=position;i<20;i++)
		{
			max=tab[i];
			indicemax=i;
			
			for(j=i+1;j<20;j++)
			{
				if (tab[j]>max)
				{
					max=tab[j];
					indicemax=j;
				}
			}
		tab[indicemax]=tab[i];
		tab[i]=max;
		}
		
	for(i=0;i<20;i++)
	{
		printf("\n%d",tab[i]);
	}
	
	}
	
return 0;
}
