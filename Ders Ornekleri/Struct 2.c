//STRUCT (YAPILAR-STRUCTURES)
#include <stdio.h>

struct Kitap
{
	char *isim;
	char *yazar;
	int fiyat;
	
};

void Yazdir(struct Kitap k)
{
	printf ("Kitap Adi:%s \n",k.isim);
	printf ("Yazari :%s \n",k.yazar);
	printf ("Fiyati :%d \n",k.fiyat);
}

int main ()
{
	struct Kitap k1;
	
	k1.isim="Algoritmaya giris";
	k1.yazar="Rifat Colkesen";
	k1.fiyat=50;
	Yazdir(k1);
	printf ("\n");
	
	struct Kitap Kitaplar[5];
	Kitaplar[0].isim="Veri Yapilari";
	Kitaplar[0].yazar="Fatih Kocamaz";
	Kitaplar[0].fiyat=30;
	Yazdir(Kitaplar[0]);
	printf ("\n");
	
	Kitaplar[1].isim="Ayrik Matematik";
	Kitaplar[1].yazar="B.Baykant Alagoz";
	Kitaplar[1].fiyat=20;
	Yazdir(Kitaplar[1]);
	
	int i;
	for (i = 0; i < 2; i++)
	{
		printf ("\n");
		Yazdir(Kitaplar[i]);
	}
	
	return 0;	
}
