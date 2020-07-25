#include <stdio.h>
#include <conio.h>

int main ()
{
	int A[5][3];
	int B[3][5],i,j,c=10;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A[i][j] = c;
			c++;
		}
	}
	
	printf ("A Matrisi :\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			B[j][i] = A[i][j];
		}
	}
	printf ("\nB Matrisi :\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",B[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
