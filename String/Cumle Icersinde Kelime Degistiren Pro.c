#include <stdio.h>
#include <conio.h>

int BoyutBul(char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

void WordRemover (char x[],int kb,int j,int cb)
{
	int i;
	if (kb > 0)
	{
		for (i = j; i < cb; i++)
		{
			x[i] = x[i+1];
		}
		return WordRemover(x,kb-1,j,cb);
	}
}

void WordAdder(char x[],char y[],int kb,int j,int cb)
{
	int i,c=0;
	while (c < kb)
	{
		for (i = cb; i > j; i--)
		{
			x[i+1] = x[i];
		}
		x[i+1] = y[c];
		j++; //Yeni Bir Harf Eklenince Kopyalama Yapmamasi Icin Var
		c++;
	}
	
}

int main ()
{
	char Cumle[200],Kelime1[50],Kelime2[50];
	printf ("Lutfen Bir Cumle Giriniz : ");
	gets (Cumle);
	printf ("Cumle Icerisinden Hangi Kelimeyi Cikarmak Istersiniz Giriniz : ");
	gets (Kelime1);
	printf ("Yerine Ne Yazmak Istersiniz Giriniz : ");
	gets (Kelime2);
	
	int cb,kb1,kb2,c=0,i,t=0,k;
	
	cb = BoyutBul(Cumle);
	kb1 = BoyutBul(Kelime1);
	kb2 = BoyutBul(Kelime2);
	
	k = kb2 - kb1; //Yeni Kelime Buyuk Oldugu Vakit Cumle Yazimi Bozulmasin Diye Kullanildi.
	
	for (i = 0; i < cb; i++)
	{
		if (Cumle[i] == Kelime1[c])
		{
			c++;
		}
		else
		{
			c = 0;
		}
		
		if (c == kb1)
		{
			if (Cumle[i+1] == ' ' || Cumle[i+1] == '\0') //Son Kelime ve Herhangi Bir Kelimenin Yarisinda Calismasin Diye Var.
			{
				t = 1;
				WordRemover(Cumle,kb1,i-kb1+1,cb);
				WordAdder(Cumle,Kelime2,kb2,i-kb1,cb+k);
			}
		}
	}
	
	if (t == 1)
	{
		printf ("\n%s",Cumle);
	}
	else
	{
		printf ("\nGirilen Kelime Cumle Icerisinde Saptanamamistir!");
	}
	
	getch ();
	return 0;
}
//Coded By MKZ
