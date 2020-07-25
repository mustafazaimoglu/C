#include <stdio.h>
#include <conio.h>

int main ()
{
	int M[4][4],i,j,n;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("Matrix[%d][%d] : ",i+1,j+1);
			scanf ("%d",&M[i][j]);
		}
	}
	
	printf ("\nKac Kat Buyutmek Istediginizi Giriniz :");
	scanf ("%d",&n);
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			M[i][j] = n * M[i][j];
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
