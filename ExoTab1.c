#include <stdio.h>

int main()
{
	int tab[10];
	float moy;
	int i,somme,min,max;

	for(i=0;i<10;i++)
	{
		printf("Entrez un nombre :");
		scanf("%d",&tab[i]);
	}

	

	for(i=0;i<10;i++)
	{
		somme=somme+tab[i];
	}

	printf("\nLa somme est : %d",somme);

	moy=somme/10;

	printf("\nLa moyenne est : %f",moy);

	max=tab[0];
	min=tab[0];

	for(i=0;i<10;i++)
	{
		if(max<tab[i])
		{
			max=tab[i];
		}
		if(min>tab[i])
		{
			min=tab[i];
		}
	}

	printf("\nLe maximum est : %d",max);
	printf("\nLe minimum est : %d",min);

	return 0;
}
