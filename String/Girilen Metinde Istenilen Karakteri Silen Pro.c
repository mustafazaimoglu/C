#include <stdio.h>
#include <conio.h>

int main ()
{
	char Cumle[200];
	printf ("Lutfen Bir String Giriniz : ");
	gets (Cumle);
	
	int KrktrNum;
	printf ("Lutfen Silmek Istediginiz Karakterin Sirasini Giriniz : ");
	scanf ("%d",&KrktrNum);
	
	int i;
	for (i = KrktrNum-1 ; Cumle[i] != '\0' ; i++)
	{
		Cumle[i] = Cumle[i+1];
	}
	
	printf ("%s",Cumle);
	
	getch ();
	return 0;
}
