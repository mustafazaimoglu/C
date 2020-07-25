#include <stdio.h>
#include <conio.h>

int p;

int SiraBul(int dizi[],int x,int j,int k)
{
	
	if (j >= k)
	{
		if (x < dizi[k])
		{
			return k;
		}
		return SiraBul(dizi,x,j,k+1);
	}
	else
	{
		return k;
	}
}

void Sirala (int dizi[],int t,int j)
{
	if (t < j)
	{
		dizi[j]=dizi[j-1];
		return Sirala(dizi,t,j-1);
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
		t = SiraBul(dizi,x,i-1,0);
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
