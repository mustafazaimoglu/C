#include <stdio.h>
#include <conio.h>

void Sirala (int Arr[],int j,int k)
{
	int temp;
	if (k > j)
	{
		if (Arr[j] > Arr[j+1])
		{
			temp = Arr[j];
			Arr[j] = Arr[j+1];
			Arr[j+1] = temp;
		}
		return Sirala (Arr,j+1,k);
	}
}

int main ()
{
	int Arr[8],i;
	
	for (i = 0; i < 8; i++)
	{
		printf ("Please Enter Value %d: ",i+1);
		scanf ("%d",&Arr[i]);
	}
	printf ("Unsorted Array : ");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",Arr[i]);
	}
	
	for (i = 0; i < 8; i++)
	{
		Sirala(Arr,0,8-i);
	}
	
	printf ("\nSorted Array : ");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",Arr[i]);
	}
	
	
	getch ();
	return 0;
}
