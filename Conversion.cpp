#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Decimal à Binaire  //Ecris en environ 1h //De 18h40 à 19h40 le 18/10/2017
	
	long int X1, X2, X3, X4, X5, X6, X7, X8;
	long int Y1, Y2, Y3, Y4, Y5, Y6, Y7, Y8;
	long int Z1, Z2, Z3, Z4, Z5, Z6, Z7, Z8;
	long int W1, W2, W3, W4, W5, W6, W7, W8;

	

	printf("Veuillez entrer votre chiffre decimal que vous voulez convertir :");
	scanf("%d",&X1);
	if (X1 < 0 || X1 >= 256)
		printf("Entree erronee");
	else
		{
			if (X1 < 256)
			{
				Y1=X1/2;  //binaire = 1  //hexa = 1
				Z1=Y1*2;
				W1=X1-Z1;
		
				X2=Y1;
			
				Y2=X2/2;  //binaire = 2  //hexa = 2
				Z2=Y2*2;
				W2=X2-Z2;
		
				X3=Y2;
		
				Y3=X3/2;  //binaire = 4  //hexa = 4
				Z3=Y3*2;
				W3=X3-Z3;
		
				X4=Y3;
		
				Y4=X4/2;  //binaire = 8  //hexa = 8
				Z4=Y4*2;
				W4=X4-Z4;
		
				X5=Y4;
	
				Y5=X5/2;  //binaire = 16  //hexa = 1
				Z5=Y5*2;
				W5=X5-Z5;
		
				X6=Y5;
			
				Y6=X6/2;  //binaire = 32  //hexa = 2
				Z6=Y6*2;
				W6=X6-Z6;
		
				X7=Y6;
		
				Y7=X7/2;  //binaire = 64  //hexa = 4
				Z7=Y7*2;
				W7=X7-Z7;
			
				X8=Y7;
		
				Y8=X8/2;  //binaire = 128  //hexa = 8
				Z8=Y8*2;
				W8=X8-Z8;
				
				printf("\n");	
				printf("Votre chiffre decimal en binaire est : %d%d%d%d%d%d%d%d",W8, W7, W6, W5, W4, W3, W2, W1);
			}
		}
	
	//Decimal à Hexadecimal 
	//Début à 19h40 et fin à 22h20 + de 23h40 à 24h00 le 18/10/2017  
	//Début à 9h30 et fin à 11h00 + plusieurs minutes differentes entre 16h00 et 18h00 de  le 19/10/2017  
	//Début à 13H00 et fin à 16h00  et de 19h00 à 19h40 le 21/10/2017

	
	int entier4_1 = W1*1+W2*2+W3*4+W4*8;
	int entier4_2 = W5*1+W6*2+W7*4+W8*8;
	char Hexa1;
	char Hexa2;
		
    if(entier4_2==0)
		{
			Hexa1='0';
		}
		else if(entier4_2==1)
		{
			Hexa2='1';
		}
		else if(entier4_2==2)
		{
			Hexa2='2';
		}
		else if(entier4_2==3)
		{
			Hexa2='3';
		}
		else if(entier4_2==4)
		{
			Hexa2='4';
		}
		else if(entier4_2==5)
		{
			Hexa2='5';
		}
		else if(entier4_2==6)
		{
			Hexa2='6';
		}
		else if(entier4_2==7)
		{
			Hexa2='7';
		}
		else if(entier4_2==8)
		{
			Hexa2='8';
		}
		else if(entier4_2==9)
		{
			Hexa2='9';
		}
		else if(entier4_2==10)
		{
			Hexa2='A';
		}
		else if(entier4_2==11)
		{
			Hexa2='B';
		}
		else if(entier4_2==12)
		{
			Hexa2='C';
		}
		else if(entier4_2==13)
		{
			Hexa2='D';
		}
		else if(entier4_2==14)
		{
			Hexa2='E';
		}
		else if(entier4_2==15)
		{
			Hexa2='F';
		}
		
		
    if(entier4_1==0)
		{
			Hexa1='0';
			
		}
		else if(entier4_1==1)
		{
			Hexa1='1';
		}
		else if(entier4_1==2)
		{
			Hexa1='2';
		}
		else if(entier4_1==3)
		{
			Hexa1='3';
		}
		else if(entier4_1==4)
		{
			Hexa1='4';
		}
		else if(entier4_1==5)
		{
			Hexa1='5';
		}
		else if(entier4_1==6)
		{
			Hexa1='6';
		}
		else if(entier4_1==7)
		{
			Hexa1='7';
		}
		else if(entier4_1==8)
		{
			Hexa1='8';
		}
		else if(entier4_1==9)
		{
			Hexa1='9';
		}
		else if(entier4_1==10)
		{
			Hexa1='A';
		}
		else if(entier4_1==11)
		{
			Hexa1='B';
		}
		else if(entier4_1==12)
		{
			Hexa1='C';
		}
		else if(entier4_1==13)
		{
			Hexa1='D';
		}
		else if(entier4_1==14)
		{
			Hexa1='E';
		}
		else if(entier4_1==15)
		{
			Hexa1='F';
		}

	printf("\nVotre chiffre decimal en hexadecimale est : %c%c",Hexa2,Hexa1);
	
	printf("\n");
	system("Pause");
	return(0);
}
