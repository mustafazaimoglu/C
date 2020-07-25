#include <stdio.h>
#include <conio.h>

int main ()
{
	int sayi;
	printf ("Lutfen Bir Sayi Giriniz : ");
	scanf ("%d",&sayi);
	
	switch (sayi / 10)
	{
		case 10: printf ("A\n"); break;
		case 9: printf ("B\n");
		case 8: printf ("C\n"); break;
		case 7: printf ("D\n");
		case 6: printf ("E\n");
		case 5: printf ("F\n"); break; //Break Konulmaz ise case i dogruladiktan sonra hepsini isleme alir.
		case 4: printf ("G\n");
		case 3: printf ("H\n"); break;
		case 2: printf ("K\n");
		case 1: printf ("J\n"); break;
		case 0: printf ("FFF\n");
		default :  printf ("Hatali Bir Giris Yaptiniz\n");
	}
	
	getch ();
	return 0;
}
