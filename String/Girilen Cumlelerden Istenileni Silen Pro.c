#include <conio.h>
#include <stdio.h>

int BoyutBul (char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

void Destroyer (char A[5][20],int j)
{
	int i,t,b,b1;
	for (i = j; i < 5; i++)
	{
		b1 = BoyutBul(A[i]);
		b = BoyutBul(A[i+1]);
		for (t = 0; t < b1; t++)
		{
			A[i][t] = '\0';
		}
		
		for (t = 0; t <= b; t++)
		{
			A[i][t] = A[i+1][t];
		}
	}
}

int main ()
{
	char A[5][20];
	char B[20];
	int i,j,k,kb,ib;
	
	
	for (i = 0; i < 5; i++)
	{
		printf ("Lutfen %d.Ismi Giriniz : ",i+1);
		gets (A[i]);
	}
	
	printf ("\nLutfen Silmek istediginiz Ismi Giriniz : ");
	gets (B);
	
	kb = BoyutBul(B);
	int c,x=0;
	for (i = 0; i < 5; i++)
	{
		c = 0;
		ib = BoyutBul(A[i]);
		for (j = 0; j < ib; j++)
		{
			if (A[i][j] == B[c])
			{
				c++;
			}
			else
			{
				c = 0;
				j = ib;
			}
		}
		if (c == kb)
		{
			x++;
			Destroyer(A,i);
			i--;
		}
	}
	
	for (i = 0; i < 5-x; i++)
	{
		printf ("\n%s",A[i]);
	}
	
	getch ();
	return 0;
}
