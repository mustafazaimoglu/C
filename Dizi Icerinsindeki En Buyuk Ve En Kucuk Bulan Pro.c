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
	
	enb = dizi[0];
	enk = dizi[0];

	for (i = 0 ; i < 5 ; i++ )
	{
		if (enk > dizi[i])
		{
			enk = dizi[i];
		}
		if (enb < dizi[i])
		{
			enb = dizi[i];
		}
	}
	
	printf ("\nGirilen En Buyuk Sayi : %d\n",enb);
	printf ("Girilen En Kucuk Sayi : %d",enk);
	
	getch ();
	return 0;
}
