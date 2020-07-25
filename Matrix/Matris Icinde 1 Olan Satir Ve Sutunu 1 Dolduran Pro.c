#include <conio.h>
#include <stdio.h>

int main ()
{
	int Matris[5][5],i,j,X[5],Y[5],k=0,t;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			Matris[i][j] = 0;
		}	
	}
	
	Matris[0][0] = 1;
	Matris[2][4] = 1;
	Matris[4][2] = 1;
	
	printf ("Matrisin Ilk Hali :\n");
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
			if (Matris[i][j] == 1)
			{
				X[k] = i;
				Y[k] = j;
				k++;
			}
		}	
	}
	
	printf ("\nMatrisin Son Hali : \n");
	for (t = 0; t < k; t++)
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (i == X[t])
				{
					Matris[i][j] = 1;
				}
				if (j == Y[t])
				{
					Matris[i][j] = 1;
				}
			}
		}
	}
	
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
