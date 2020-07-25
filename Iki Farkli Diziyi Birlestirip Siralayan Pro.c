#include <stdio.h>
#include <conio.h>

int siralama(int x1[],int enk,int x2[],int x4[],int c)
{
	int i,x=0,k=0;
		for (i = 0; i < 5; i++)
		{
			if (enk > x1[i])
			{
				enk = x1[i];
				k = i;
				
			}
		}
		for (i = 0; i < 5; i++)
		{
			if (enk > x2[i])
			{
				enk = x2[i];
				x = i;
			}
		}
		if (x1[k] > x2[x])
		{
			x2[x] = 10000000;
		}
		else
		{
			x1[k] = 10000000;
		}
		x4[c] = enk;
	
	return x4[10];
}

int main ()
{
	int mkz1[5] = {2,4,8,9,1},mkz2[5] = {7,5,3,6,10},i,mkz4[10];
	int enk,c=0;
	
	printf ("Asagidaki Sekilde Iki Adet Dizi Bulunmaktadir.\n");
	for (i = 0; i < 5; i++)
	{
		printf ("%d ",mkz1[i]);
	}
	printf ("\n");
	for (i = 0; i < 5; i++)
	{
		printf ("%d ",mkz2[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		enk = mkz1[i];
		siralama(mkz1,enk,mkz2,mkz4,c);
		c++;
	}
	for (i = 0; i < 5; i++)
	{
		enk = mkz2[i];
		siralama(mkz1,enk,mkz2,mkz4,c);
		c++;
	}
	printf ("\n\nYapilan Duzenlemeden Sonra Dizinin Son Hali :\n");
	for (i = 0; i < 10; i++)
	{
		printf ("%d ",mkz4[i]);
	}
	
	getch ();
	return 0;
}
