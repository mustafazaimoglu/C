#include <stdio.h>
#include <conio.h>

void Siralama (int Arr[])
{
	int i,temp;
	for (i = 0; i < 4; i++)
	{
		if (Arr[i] > Arr[i+1])
		{
			temp = Arr[i];
			Arr[i] = Arr[i+1];
			Arr[i+1] = temp;
		}
	}
}

int main ()
{
	int Matris[5][5] = {{4,5,6,4,7},{2,1,1,7,9},{7,5,9,3,6},{8,9,6,7,2},{4,6,8,2,5}};
	int Arr[5],i,j;
	
	printf ("Matrisin Ilk Hali ;\n");
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
			if (i == j)
			{
				Arr[i] = Matris[i][j];
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		Siralama(Arr);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j)
			{
				Matris[i][j] = Arr[i];
			}
		}
	}
	
	printf ("\nMatrisin Kosegeni Siralandiktan Sonraki Hali :\n");
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
