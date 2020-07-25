//Coded By MKZ
#include<stdio.h>


int FarkBul(int x)
{
	int p,k,c = 0;
	
	while (x > 0)
	{
		c++;
		p = x % 10;
		x = (x-p)/10;
	
		if (c > 1)
		{
			if ((k - p) != -1 && (k - p) != 1)
			{
				return 0;
			}
		}
		k = p;
	}
	return 1;
}


int main ()
{
	int Number,x,mkz = 0,i,c = 0;
	
	printf ("Type Any Number :");
	scanf ("%d",&Number);
	
	for (i = 0; i < Number; i++)
	{
		mkz = FarkBul(i);
		
		if (mkz == 1)
		{
			c++;
			printf ("%d  ",i);
			if (c % 10 == 0)
			{
				printf("\n");
			}
		}	
	}
	
	return 0;
}
