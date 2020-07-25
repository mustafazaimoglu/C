#include <stdio.h>
#include <conio.h>


int main ()
{
	int i,j;
	int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{7,5,8,9}};
	int top=0;
	
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (i == j)
			{
				printf ("%d  ",matris[i][j]);
				top = top + matris[i][j];
			}
		}
	}
	
	printf ("\nSayilari Kosegenin Degerleridir.\n\n%d Sayisi Kosegenin Degerler Toplamidir.",top);
	
	getch ();
	return 0;
}
