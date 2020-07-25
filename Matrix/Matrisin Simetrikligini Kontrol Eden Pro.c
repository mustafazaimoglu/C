#include <stdio.h>
#include <conio.h>

int main ()
{
	int A[4][4];
	int B[4][4],i,j;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf ("Matrix[%d][%d] :",i+1,j+1);
			scanf ("%d",&A[i][j]);
		}
	}
	
	printf ("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			B[j][i] = A[i][j];
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	int t = 1;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (B[i][j] != A[i][j])
			{
				t = 0;
				break;
			}
		}
	}
	
	if (t == 1)
	{
		printf ("\nGirilen Matrix Simetriktir!");
	}
	else
	{
		printf ("\nGirilen Matrix Simetrik Degildir!");
	}
	
	getch ();
	return 0;
}
