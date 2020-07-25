#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main ()
{
	int i,j,n,s1=0,s0=0;
	srand (time(0));
		
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	
	printf ("\n");
	int A[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			A[i][j] = rand()%2;
			if (A[i][j] == 0)
			{
				s0++;
			}
			else
			{
				s1++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n1'lerin Sayisi : %d\n",s1);
	printf ("0'larin Sayisi : %d",s0);
	
	getch ();
	return 0;
}
