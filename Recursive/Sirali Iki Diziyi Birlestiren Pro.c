#include <stdio.h>
#include <conio.h>

int Doldur(int x[],int y[],int j,int b,int s)
{
	if (j < b)
	{
		x[s] = y[j];
		return Doldur(x,y,j+1,b,s+1);
	}
}

int main ()
{
	int A[5] = {1,3,7,8,9};
	int B[8] = {2,4,5,6,10,11,13,15};
	int C[13],i=0,j=0,s=0;
	
	
	while (i < 5 && j < 8)
	{
		if (A[i] <= B[j])
		{
			C[s] = A[i];
			i++;
		}
		else
		{
			C[s] = B[j];
			j++;
		}
		s++;
	}
	
	if (i == 5)
	{
		Doldur(C,B,j,8,s);
	}
	else
	{
		Doldur(C,A,i,5,s);
	}
	
	printf ("Array A :\n");
	for (i = 0; i < 5; i++)
	{
		printf ("%d ",A[i]);
	}
	
	printf ("\n\nArray B :\n");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",B[i]);
	}
	printf ("\n\n");
	printf ("Sorted Array :\n");
	for (i = 0; i < 13; i++)
	{
		printf ("%d ",C[i]);
	}
	
	getch ();
	return 0;
}
