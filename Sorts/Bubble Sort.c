#include <stdio.h>
#include <conio.h>

int main ()
{
	int arr[8],i,j,temp;
	
	printf ("Please Enter Numbers : \n");
	for (i = 0; i < 8; i++)
	{
		printf ("Value %d :",i+1);
		scanf ("%d",&arr[i]);
	}
	
	printf ("Unsorted Array : ");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",arr[i]);
	}
	
	printf ("\n");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 7 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr [j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf ("Sorted Array : ");
	for (i = 0; i < 8; i++)
	{
		printf ("%d ",arr[i]);
	}
	
	getch ();
	return 0;
}
