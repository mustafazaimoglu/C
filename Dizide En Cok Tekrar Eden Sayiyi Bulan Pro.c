#include <stdio.h>
#include <conio.h>

int c=0;

int SayiBul(int Arr[],int x,int j,int k)
{
	if (j < k)
	{
		if (x == Arr[j])
		{
			c++;
		}
		return SayiBul(Arr,x,j+1,k);
	}
	else
	{
		return c;
	}
}

int main ()
{
	int n;
	printf ("Kac Tane Sayi Girilecegini Giriniz : ");
	scanf ("%d",&n);
	int Arr[n],i,t,k;
	
	for (i = 0; i < n; i++)
	{
		printf ("%d.Degeri Giriniz :",i+1);
		scanf ("%d",&Arr[i]);
	}
	  
	printf ("Girilen Dizi : ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",Arr[i]);
	}
	int ind,enb = 0;
	for (i = 0; i < n; i++)
	{
		t = SayiBul(Arr,Arr[i],i,n);
		c = 0;
		if (t > enb)
		{
			enb = t;
			ind = Arr[i];
		}
	}
	
	printf ("\nEn Cok Tekrar Eden Sayi : %d\nTekrar Sayisi : %d",ind,enb);
	
	getch ();
	return 0;
}
