// Coded By MKZ
#include <stdio.h>
#include <conio.h>

int Buyutme (int me,int mb,int n,int M[me*n][mb*n],int x,int d,int y)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			M[d+i][y+j] = x;
		}
	}
}

int main ()
{
	int i,j,n,me,mb;
	
	printf ("Matris Icin Satir Sayisi Giriniz : ");
	scanf ("%d",&me);
	printf ("Sutun Sayisi Giriniz : ");
	scanf ("%d",&mb);
	
	int A[me][mb];
	
	for (i = 0; i < me; i++)
	{
		for (j = 0; j < mb; j++)
		{
			printf ("%d.Satir %d.Sutun Giriniz : ",i+1,j+1);
			scanf ("%d",&A[i][j]);
		}
	}
	
	printf ("\n");
	for (i = 0; i < me; i++)
	{
		for (j = 0; j < mb; j++)
		{
			printf ("%d ",A[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nSekildeki Matrisi Kac Kat Buyutmek Istiyorsunuz : ");
	scanf ("%d",&n);
	
	int M[me*n][mb*n],x,y=0,d=0;
	
	for (i = 0; i < me; i++)
	{
		for (j = 0; j < mb; j++)
		{
			x = A[i][j];
			Buyutme(me,mb,n,M,x,d,y);
			y = y + n;
		}
		y = 0; //Her Satirda Ikinci Dongu Sifirlandigi Icin Var.
		d = d + n;
	}
	
	printf ("\n");
	for (i = 0; i < me*n; i++)
	{
		for (j = 0; j < mb*n; j++)
		{
			printf ("%d ",M[i][j]);
		}
		printf ("\n");
	}
	
	getch ();
	return 0;
}
