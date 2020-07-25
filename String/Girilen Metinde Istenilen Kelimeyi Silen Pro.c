#include <stdio.h>
#include <conio.h>

int BoyutBul(char x[])
{
	int i;
	for (i = 0 ; x[i] != '\0' ; i++);
	return i;
}

int WordRemover(char cumle[],int cb,int j,int c)
{
	if (c != 0)
	{
		int i;
		for (i = j ; i < cb ; i++)
		{
			cumle[i] = cumle[i+1];
		}
		return WordRemover(cumle,cb,j,c-1);
	}
}

int main ()
{
	char cumle[200],kelime[200];
	
	printf ("Type Any String : ");
	gets (cumle);
	printf ("Please Type Word You Want Delete : ");
	gets (kelime);
	int cb,kb,i,c=0,t=0;
	cb = BoyutBul(cumle);
	kb = BoyutBul(kelime);
	
	for (i = 0 ; i < cb ; i++)
	{
		if (cumle[i] == kelime[c])
		{
			c++;
		}
		else
		{
			c = 0;
		}
		if (c == kb)
		{
			t = 1;
			WordRemover(cumle,cb,i-c,c+1);
		}
	}
	
	if (t == 1)
	{
		printf ("%s",cumle);
	}
	else
	{
		printf ("Girilen Kelime Metin Icinde Saptanamamistir!");
	}
	
	getch ();
	return 0;
}
