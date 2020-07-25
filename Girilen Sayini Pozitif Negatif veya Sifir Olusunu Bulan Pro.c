#include <stdio.h>
#include <conio.h>

int main(void)
{	
	int a;
	printf("Kontrol Etmek Istediginiz Sayiyi Giriniz \n");
	scanf("%d", &a);

	if (a == 0 )
	{
		printf("Girilen Sayi Sifirdir");
	}
	if ( a > 0)
	{
		printf("Girilen Sayi Pozitiftir");
	}
	if ( a < 0)
	{
	 	printf("Girilen Sayi Negatiftir");
	}
	
	getch ();
	return 0;
}
