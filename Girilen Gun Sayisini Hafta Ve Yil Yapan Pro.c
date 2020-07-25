#include <stdio.h>
#include <stdio.h>

int main ()
{	
	float gun,hafta,yil;
	
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%f",&gun);
	
	hafta = gun / 7;
	yil = gun / 365;
	
	printf ("%.2f Haftadir\n",hafta);
	printf ("%.2f Yildir",yil);
	
	getch ();
	return 0;
}
