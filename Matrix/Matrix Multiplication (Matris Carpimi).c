#include <stdio.h>
#include <conio.h>

main ()
{
	int A[3][3] = {{3,5,9},{4,6,1},{1,8,2}};
	int B[3][3] = {{1,0,3},{4,5,7},{2,3,6}};
	int C[3][3],i,j,k;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf ("A Matrisi : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	printf ("\nB Matrisi : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ",B[i][j]);
		}
		printf ("\n");
	}
	printf ("\nMatris Carpimi (ByCan't Reis Carpimi) Sonucu : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ",C[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
