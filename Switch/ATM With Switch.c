#include <stdio.h>
#include <conio.h>

int a = 100,para,z;

void ParaCek()
{
	printf ("Guncel Bakiyeniz: %d\nLutfen Cekmek Istediginiz Miktari Giriniz : ",a);
	scanf ("%d",&para);
	if (para <= a)
	{
		a = a - para;
		printf ("Islem Sonucu Kalan Bakiyeniz : %d",a);
	}
	else
	{
		printf ("Yeterli Bakiyeniz Bulunmamaktadir!");
	}
	printf ("\nBaska Islem Yapmak Icin 0'a Basiniz.Bitirmek Icin Herhangi Bir Tusa Basiniz.\n");
	scanf ("%d",&z);
	if (z == 0)
	{
		Islem(z);
	}
}

void ParaYatir()
{
	printf ("Guncel Bakiyeniz: %d\nLutfen Yatirmak Istediginiz Miktari Giriniz : ",a);
	scanf ("%d",&para);
	a = a + para;
	printf ("Islemden Sonraki Guncel Bakiyeniz : %d",a);
	printf ("\nBaska Islem Yapmak Icin 0'a Basiniz.Bitirmek Icin Herhangi Bir Tusa Basiniz.\n");
	scanf ("%d",&z);
	if (z == 0)
	{
		Islem(z);
	}
}

void Bilgi()
{
	printf ("Guncel Bakiyeniz : %d",a);
	printf ("\nBaska Islem Yapmak Icin 0'a Basiniz. Bitirmek Icin Herhangi Bir Tusa Basiniz.\n");
	scanf ("%d",&z);
	if (z == 0)
	{
		Islem(z);
	}
}

int Islem (int x)
{
	switch (x)
	{
		case 0:main();
		break;
		case 1:ParaCek();
		break;
		case 2:ParaYatir();
		break;
		case 3:Bilgi();
		break;
	}
}

int main ()
{
	int IslemNum;
	
	printf ("Para Cekmek Icin: 1\nPara Yatirmak Icin: 2\nBakiye Goruntulemek Icin: 3\nSeklinde Lutfen Tuslama Yapiniz.\nHatali Tuslamalarda Sistem Tekrar Tuslama Isteyecektir.\n");
	scanf ("%d",&IslemNum);
	
	if (IslemNum > 0 && IslemNum < 4)
	{
		Islem (IslemNum);
	}
	else
	{
		return main();
	}
	
	getch ();
	return 0;
}
