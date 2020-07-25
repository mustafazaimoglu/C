#include <stdio.h>
#include <conio.h>

int main ()
{
	int A[4][4],i,j,n;

	
	A[0][1] = 1;
	A[0][2] = 0;
	A[1][1] = 1;
	A[2][2] = 1;
	A[2][1] = 1;
	A[2][0] = 0;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] != 1)
			{
				A[i][j] = 0;
			}
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nSekildeki Matrisi Kac Kat Buyutmek Istiyorsunuz : ");
	scanf ("%d",&n);
	
	int M[4*n][4*n],x,y=0,d=0,k,t;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			x = A[i][j];
			
			for (k = 0; k < n; k++)
			{
				for (t = 0; t < n; t++)
				{
					M[d+k][y+t] = x;
				}
			}
			y = y + n;
		}
		y = 0;
		d = d + n;
	}
	
	printf ("\n");
	for (i = 0; i < 4*n; i++)
	{
		for (j = 0; j < 4*n; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	
	
	getch ();
	return 0;
}
