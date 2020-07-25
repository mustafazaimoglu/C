#include <stdio.h>
#include <conio.h>

int main ()
{
	int dizi[5]={1,2,3,4,5};
	int A[3][2]={{1,2},{3,4},{5,6}};
	
	int i,j;
	int B[3][2];
	
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf ("Matrix'in %d.Satir %d.Sutunu Giriniz : ",i+1,j+1);
			scanf ("%d",&B[i][j]);
		}
	}
	printf ("\n\n\n");
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf ("[%d]",B[i][j]);
		}
		printf ("\n");
	}
	printf ("\n\n");
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
