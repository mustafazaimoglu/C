
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
	printf ("Kitap adi:%s \n",k.isim);
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

	struct Kitap k2,k3,k4;
	k2.fiyat=25;
	k2.isim="Talu Harikalar Diyarinda";
	k2.yazar="MF Talu";
	Yazdir(k2);
	
	
	return 0;
}


