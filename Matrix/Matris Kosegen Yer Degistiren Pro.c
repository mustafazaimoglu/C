#include <stdio.h>
#include <conio.h>

int main ()
{
	int n = 5;
	int M[5][5] = {{1,0,0,0,5},{0,2,0,6,0},{0,0,3,0,0},{0,7,0,4,0},{8,0,0,0,5}},i,j,k,temp,temp1;
	
	printf ("Matrisin Ilk Hali : \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%d  ",M[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (i == k)
			{
				temp = M[i][k];
				temp1 = k;
			}
		}
		for (j = 0; j < n; j++)
		{
			if (i + j == n-1)
			{
				M[i][temp1] = M[i][j];
				M[i][j] = temp;
			}
		}
	}
	
	printf ("\nMatrisin Kosegenlerinin Yer Degistirmis Hali :\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%d  ",M[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
