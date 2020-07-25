#include <stdio.h>
#include <conio.h>

int SiraBul(int dizi[],int x,int j)
{
	int i;
	for (i = 0; i <= j; i++)
	{
		if  (dizi[i] > x)
		{
			return i;
		}
	}
	return i;
}

void Sirala (int dizi[],int t,int j)
{
	int i;
	for (i = j; i > t; i--)
	{
		dizi[i] = dizi[i-1];
	}
}

int main ()
{
	int dizi[8],i,t,x;
	
	for (i = 0; i < 8; i++)
	{
		printf ("Please Enter Value %d :",i+1);
		scanf ("%d",&dizi[i]);
	}
	
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",dizi[i]);
	}
	
	for (i = 1; i < 8; i++)
	{
		x = dizi[i];
		t = SiraBul(dizi,x,i-1);
		Sirala(dizi,t,i);
		dizi[t] = x;
	}
	
	printf ("\n");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",dizi[i]);
	}
	
	
	getch ();
	return 0;
}
