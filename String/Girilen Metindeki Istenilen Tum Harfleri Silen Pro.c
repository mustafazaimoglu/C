#include <stdio.h>
#include <conio.h>

int BoyutBul(char Cumle[])
{
	int i;
	for (i = 0 ; Cumle[i] != '\0' ; i++);
	return i;
}

int LetterRemover(char Cumle[],int j,int cb)
{
	int i;
	for (i = j ; i < cb ; i++)
	{
		Cumle[i] = Cumle[i+1];
	}
}

int main ()
{
	char Cumle[200],Kelime;
	
	printf ("Lutfen Bir Cumle Giriniz : ");
	gets (Cumle);
	printf ("Lutfen Silinmesini Istediginiz Harfi Giriniz : ");
	scanf ("%c",&Kelime);
	int cb,i;
	
	cb = BoyutBul(Cumle);
	
	for (i = 0 ; i < cb ; i++)
	{
		if (Cumle[i] == Kelime)
		{
			LetterRemover(Cumle,i,cb);
			i--;
		}
	}
	
	printf ("%s",Cumle);
	
	getch ();
	return 0;
}
