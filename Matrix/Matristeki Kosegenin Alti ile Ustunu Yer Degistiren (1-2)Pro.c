#include <conio.h>
#include <stdio.h>

int main ()
{
	int Matris[5][5] = {{8,1,1,1,1},{2,8,1,1,1},{2,2,8,1,1},{2,2,2,8,1},{2,2,2,2,8}};
	int i,j,Dizi[25/2],k=0,n=0;
	
	printf ("Normal Matrix :\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",Matris[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j > i)
			{
				Dizi[k] = Matris[i][j];
				k++;
			}
		}
	}
	
	int t=0,l=0;
	for (i = 4; i >= 0; i--)
	{
		for (j = 4; j >= 0; j--)
		{
			if (i > j)
			{
				if (k > n)
				{
					Matris[t][l] = Matris[i][j];
					Matris[i][j] = Dizi[n];
					n++;
				}
				
			}
			l++;
		}
		t++;
		l = 0;
	}	
	
	printf ("\nYer Degismis Matris : \n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf ("%d ",Matris[i][j]);
		}
		printf ("\n");
	}

	getch ();
	return 0;
}
