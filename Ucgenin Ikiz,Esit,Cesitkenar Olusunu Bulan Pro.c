#include <stdio.h>
#include <conio.h>

int main (){
	int Kenar1,Kenar2,Kenar3;
	
	printf ("Lutfen Ucgenin Kenar Uzunluklarini Giriniz :\n");
	printf ("1.Degeri Giriniz : ");
	scanf ("%d",&Kenar1);
	printf ("\n2.Degeri Giriniz : ");
	scanf ("%d",&Kenar2);
	printf ("\n3.Degeri Giriniz : ");
	scanf ("%d",&Kenar3);
	printf ("\n");
	
	if (Kenar1 == Kenar2)
	{
		if (Kenar2 == Kenar3)
		{
			printf ("Esitkenar Ucgendir!");
		}
		else
		{
			printf ("Ikizkenar Ucgendir!");
		}
	}
	else if (Kenar2 == Kenar3)
	{
		printf ("Ikizkenar Ucgendir!");
	}
	else if (Kenar1 == Kenar3)
	{
		printf ("Ikizkenar Ucgendir!");
	}
	else 
	{
		printf ("Cesitkenar Ucgendir!");
	}
	
	getch ();
	return 0;
}
