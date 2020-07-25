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
	int n = -1,c = -1;
	
	for (i = 0 ; i < 5 ; i++)
	{
		if (dizi[i] % 2 == 1)
		{
			n = n + 1;
			tek[n] = dizi[i];
		}
		else
		{
			c = c + 1;
			cift[c] = dizi[i];
		}
	}
	printf ("\nTek Sayilar : \n");
	while (n >= 0)
	{
		printf ("%d  ",tek[n]);	
		n = n - 1;
	}
	printf ("\nCift Sayilar : \n");
	
	while (c >= 0)
	{
		printf ("%d  " ,cift[c]);
		c = c - 1;
	}
	
	getch ();
	return 0;
}
