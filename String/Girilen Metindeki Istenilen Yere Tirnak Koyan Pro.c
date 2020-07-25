#include <stdio.h>
#include <conio.h>

int BoyutBul(char x[])
{
	int i;
	for (i = 0 ; x[i] != '\0' ; i++);
	return i;	
}

int TirnakEkle(char Cumle[],int j,int cb)
{
	int i;
	
	for ( i = cb ; i >= j ; i--)
	{
		Cumle[i+1] = Cumle[i];
	}
	
	Cumle[j] = '\"';
	
}
int main ()
{
	char Cumle[200],Kelime[200];
	printf ("Lutfen Bir Cumle Giriniz : ");
	gets (Cumle);
	printf ("Lutfen Islem Yapilacak Kelimeyi Giriniz : ");
	gets (Kelime);
	
	int kb,cb,i,j,t = 0,c = 0;
	cb = BoyutBul(Cumle); 
	kb = BoyutBul(Kelime);
	
	for (i = 0 ; i < cb ; i++)
	{
		if (Cumle[i] == Kelime[c])
		{
			c = c + 1;
		}
		else 
		{
			c = 0;
		}
		
		if (c == kb)
		{
			t = 1;
			TirnakEkle(Cumle,i+1,cb+1);
			TirnakEkle(Cumle,i-kb+1,cb+2);
		}
	}
	
	if (t == 1)
	{
		printf ("%s",Cumle);
	}
	else
	{
		printf ("Girilen Kelime Cumle Icerisinde Yer Almamaktadir!");
	}
	getch ();
	return 0;
}
