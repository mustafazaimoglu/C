#include <stdio.h>
#include <conio.h>

void DigitRemover(int Arr[],int j,int k)
{
	if (k > j)
	{
		Arr[j] = Arr[j+1];
		return DigitRemover(Arr,j+1,k);
	}
}

int main ()
{
	int Arr[10] = {1,2,4,1,5,2,9,1,8,4},i,j,c=0;
	printf ("First Situation : ");
	for (i = 0; i < 10; i++)
	{
		printf ("%d ",Arr[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j < 10 - c; j++)
		{
			if (Arr[i] == Arr[j])
			{
				DigitRemover(Arr,j,10-c);
				c++;
			}
		}
	}
	printf ("\nLast Situation  : ");
	for (i = 0; i < 10-c; i++)
	{
		printf ("%d ",Arr[i]);
	}
	
	getch ();
	return 0;
}
