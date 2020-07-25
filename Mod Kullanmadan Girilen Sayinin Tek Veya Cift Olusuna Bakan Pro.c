#include <stdio.h>
#include <conio.h>

int main ()
{
	int sayi;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&sayi);
	
	while (sayi >= 1)
	{
		sayi = sayi - 2;
	}
	
	if (sayi == 0)
	{
		printf ("Girilen Sayi Cift Sayidir!");
	}
	else
	{
		printf ("Girilen Sayi Tek Sayidir!");
	}
	
	getch ();
	return 0;	
}
