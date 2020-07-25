#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int M[8][8];
	int i,j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			M[i][j] = 0;
		}
	}
	
	M[0][0] = 1;	M[0][1] = 1;	M[1][1] = 1;
	M[2][1] = 1;	M[2][2] = 1;	M[2][5] = 2;	M[2][6] = 2;
	M[2][7] = 2;	M[3][6] = 2;	M[4][6] = 2;	M[5][2] = 3;
	M[6][1] = 3;	M[6][2] = 3;	M[6][3] = 3;	M[7][2] = 3;
	
	printf ("Nesne Matrisi : \n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");
	int c1=0,c2=0,c3=0,x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (M[i][j] == 1)
			{
				x1 = x1 + i;
				y1 = y1 + j;
				c1++;
			}
			if (M[i][j] == 2)
			{
				x2 = x2 + i;
				y2 = y2 + j;
				c2++;
			}
			if (M[i][j] == 3)
			{
				x3 = x3 + i;
				y3 = y3 + j;
				c3++;
			}
		}
	}
	
	x1 = x1/c1;
	y1 = y1/c1;
	x2 = x2/c2;
	y2 = y2/c2;
	x3 = x3/c3;
	y3 = y3/c3;
	
	int E[8][8];
	float OneToTwo,TwoToThree,OneToThree;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			E[i][j] = 0;
		}
	}
	
	E[x1][y1] = 7;
	E[x2][y2] = 7;
	E[x3][y3] = 7;
	
	printf ("Nesnelerin Agirlik Merkezi : \n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf ("%d ",E[i][j]);
		}
		printf ("\n");
	}
	
	OneToTwo = sqrt(pow(2,x2-x1)+pow(2,y2-y1));
	TwoToThree = sqrt(pow(2,x3-x2)+pow(2,y2-y3));
	OneToThree = sqrt(pow(2,x3-x1)+pow(2,y3-y1));
	
	printf ("\n1 Numarali Nesne Ile 2 Numarali nesne Arasi Uzaklik : %f\n",OneToTwo);
	printf ("2 Numarali Nesne Ile 3 Numarali nesne Arasi Uzaklik : %f\n",TwoToThree);
	printf ("1 Numarali Nesne Ile 3 Numarali nesne Arasi Uzaklik : %f",OneToThree);	
	
	getch ();
	return 0;
}
