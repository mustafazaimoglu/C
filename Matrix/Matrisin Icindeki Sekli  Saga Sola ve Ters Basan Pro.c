#include <stdio.h>
#include <conio.h>

int main ()
{
	int M[5][5],i,j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			M[i][j] = 0;
		}
	}
	
	M[1][2] = 1;
	M[2][1] = 1;
	M[3][1] = 1;
	M[2][2] = 1;
	M[2][3] = 1;
	M[3][3] = 1;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nSola Dogru Yazimi :\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",M[j][i]);
		}
		printf ("\n");
	}	
	
	printf ("\nSaga Dogru Yazimi :\n");
	for (i = 4; i >= 0; i--)
	{
		for (j = 4; j >= 0; j--)
		{
			printf ("%d ",M[j][i]);
		}
		printf ("\n");
	}	
	
	printf ("\nTers Yazimi :\n");
	for (i = 4; i >= 0; i--)
	{
		for (j = 4; j >= 0; j--)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}	
	
	
	getch ();
	return 0;
}
