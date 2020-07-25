#include <stdio.h>
#include <conio.h>

int main (){
	int sayi,c,i;
	
	printf ("Asal Olup Olmadigini Kontrol Etmek Istediginiz Sayiyi Giriniz : ");
	scanf ("%d",&sayi);
	
	for (i = 2 ; i < sayi ; i++ )
	{
		if (sayi % i == 0)
		{
			c = 1;
		}		
	}
	
	if (c == 1)
	{
		printf ("Girilen Sayi Asal Degildir!");
	}
	else
	{
		printf ("Girilen Sayi Asaldir");
	}
	getch ();
	return 0;
}
