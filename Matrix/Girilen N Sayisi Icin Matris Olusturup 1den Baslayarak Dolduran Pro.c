#include <stdio.h>
#include <conio.h>

int main ()
{
	int n,i,j;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&n);
	printf ("\n");
	
	int matris[n][n];
	int c = 0;
	
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			c = c + 1;
			matris[i][j] = c;
		}
	}
	
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			printf ("%d  ",matris[i][j]);
		}
		printf ("\n");
	}
	
	
	
	
	getch ();
	return 0;
}
