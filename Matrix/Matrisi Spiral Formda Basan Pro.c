#include <conio.h>
#include <stdio.h>

int main ()
{
	int M[4][4] = {{1,1,1,1},{4,5,5,2},{4,7,6,2},{3,3,3,2}},i,j,k=0,l=0,n=4,m=4;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	
/*
k baslama satiri
m bitis satiri
l baslama sutunu
n bitis sutunu
i iterasyon sayisi
*/	
	printf ("\n");
	while (k < m && l < n)
	{
		for (i = l; i < n; i++)
		{
			printf ("%d ",M[k][i]);
		}
		k++;
		for (i = k; i < m; i++)
		{
			printf ("%d ",M[i][n-1]);
		}
		n--;
		if (k < m)
		{
			for (i = n-1; i >= l; i--)
			{
				printf ("%d ",M[m-1][i]);
			}
			m--;
		}
		if (l < n)
		{
			for (i = m-1; i >= k; i--)
			{
				printf ("%d ",M[i][l]);
			}
			l++;
		}
	}

	getch ();
	return 0;
}
