#include <stdio.h>
#include <conio.h>

int Siralama(int x[11],int j)
{
	int enk,i,c;
	if (j < 10)
	{
		enk = x[j];
		c = j;
	
		for (i = j; i < 10; i++)
		{
			if (x[i] < enk)
			{
				enk = x[i];
				c = i;
			}
		}
	
		for (i = 10; i >= j; i--)
		{
			x[i+1] = x[i];
		}
		x[j] = enk;
		x[c+1] = x[10];
		return Siralama (x,j+1);
	}
}

int main ()
{
	int i,arr1[5],arr2[5],arr3[11];
	int c = 0;
	for (i = 0; i < 5; i++)
	{
		printf ("Lutfen %d Degeri Giriniz(1) : ",i+1);
		scanf ("%d",&arr1[i]);
		arr3[c] = arr1[i];
		c++;
	}
	for (i = 0; i < 5; i++)
	{
		printf ("Lutfen %d Degeri Giriniz(2) : ",i+1);
		scanf ("%d",&arr2[i]);
		arr3[c] = arr2[i];
		c++;
	}
	
	for (i = 0; i < 10; i++)
	{
		printf ("%d ",arr3[i]);
	} 
	printf ("\n");
	
	c = 0;
	
	Siralama(arr3,c);
	
	for (i = 0; i < 10; i++)
	{
		printf ("%d ",arr3[i]);
	} 
	
	getch ();
	return 0;
}
