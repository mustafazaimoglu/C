#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int dizi[3],i,enb,enk;
	
	printf ("Lutfen 3 Tane Deger Giriniz : \n");
	
	for (i = 0 ; i < 3 ; i++)
	{
		printf ("%d.Degeri Giriniz : ",i+1);
		scanf ("%d",&dizi[i]);
	}
	enk = dizi[0];
	enb = dizi[0];
	
	
	if (dizi[0]==dizi[1] && dizi[2]==dizi[1])
	{
		printf ("Girilen Tum Sayilar Esit Oldugu Icin Kiyaslama Yapilamaz!");
	}	
	else 
	{
	for (i = 0 ; i < 3 ; i++)
	{
		if (dizi[i] > enb)
		{
			enb = dizi[i];
		}
		if (dizi[i] < enk)
		{
			enk = dizi[i];
		}
	}
	printf ("%d < ",enk);
	
	for (i = 0 ; i < 3 ; i++)
	{
		if (dizi[i] != enb && dizi[i] != enk)
		{
			printf ("%d < ",dizi[i]);
		}
	}
	
	printf ("%d",enb);
	}
	getch ();
	return 0;
}
