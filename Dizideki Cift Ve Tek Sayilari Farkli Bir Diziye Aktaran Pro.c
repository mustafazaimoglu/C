#include <stdio.h>
#include <conio.h>

int main (){
	int dizi[5];
	int i,enb,enk;
		
	for (i  = 0 ; i < 5 ; i++)
	{
		printf ("%d.Terimi Giriniz : ",i+1);
		scanf ("%d",&dizi[i]);
	}
	
	int tek[5],cift[5];
	int n = 0,c = 0;
	
	for (i = 0 ; i < 5 ; i++)
	{
		if (dizi[i] % 2 == 1)
		{
			tek[n] = dizi[i];
			n = n + 1;
		}
		else
		{
			cift[c] = dizi[i];
			c = c + 1;
		}
	}
	printf ("\nTek Sayilar\n");
	for (i = 0 ; i < n ; i++)
	{
		printf ("%d  ",tek[i]);
	}
	printf ("\nCift Sayilar\n");
	for (i = 0 ; i < c ; i++)
	{
		printf ("%d  ",cift[i]);
	}
	
	getch ();
	return 0;
}
