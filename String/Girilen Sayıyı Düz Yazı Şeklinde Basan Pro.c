#include <stdio.h>
#include <conio.h>

int main () 
{
	int x,p,c=2,i,t=2,l=0;
	int son[3];
	int ilk[3];
	char birlik[9][20] = {"bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
	char onluk[9][20] = {"on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
	char yuz[4] = {"yuz"};
	char bin[4] = {"bin"};
	
	printf ("Lutfen Maximum 6 Basamakli Bir Sayi Giriniz : ");
	scanf ("%d",&x);
	
	if (x > 999999)
	{
		printf ("Girilen Sayi 6 Basamaktan Fazla Lutfen Tekrar Deneyiniz !\n\n");
		return main();
	}
	
	while (x > 0)
	{
		p = x % 10;
		x = x - p;
		x = x / 10;
		if (c >= 0)
		{
			son[c] = p;
		}
		if (c < 0)
		{
			if (t >= 0)
			{
				ilk[t] = p;
				t--;
			}
		}
		c--;
		l++;
	}

	printf ("\nGirilen Sayinin Metin Hali : ");
	
	if (l > 3)
	{
		for (i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				if (ilk[i] == 1)
				{
					printf ("%s",yuz);	
				}
				else if (ilk[i] > 0 && ilk[i] < 10)
				{
					printf ("%s%s",birlik[ilk[i]-1],yuz);
				}
			}
			if (i == 1)
			{
				if (ilk[i] != 0)
				{
					printf ("%s",onluk[ilk[i]-1]);
				}
			}
			if (i == 2)
			{
				if (ilk[i] > 0 && ilk[i] < 10)
				{
					if (ilk[0] > 0 && ilk[0] < 10 || ilk[1] > 0 && ilk[1] < 10)
					{
						printf ("%s",birlik[ilk[i]-1]);
					}
					else if (ilk[i] > 1)
					{
						printf ("%s",birlik[ilk[i]-1]);
					}
				}
				printf ("%s",bin);
			}
		}
	}
	
		
	for (i = 0; i < 3; i++)
	{
		if (l > 2)
		{
			if (i == 0)
			{
				if (son[i] == 1)
				{
					printf ("%s",yuz);	
				}
				else if (son[i] > 0 && son[i] < 10)
				{
					printf ("%s%s",birlik[son[i]-1],yuz);
				}
			}
		}	
		if (i == 1)
		{
			if (son[i] > 0 && son[i] < 10)
			{
				printf ("%s",onluk[son[i]-1]);
			}
		}
		if (i == 2)
		{
			if (son[i] != 0)
			{
				printf ("%s",birlik[son[i]-1]);
			}
		}
	}	
	return 0;
}
