#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
	
	int n,i,toplam;
	toplam = 0;
	
	printf("Lutfen Bir N Sayisi Giriniz \n");
	scanf ("%d" ,& n );
	
	for(i = 1 ; i<=n ; i++) 
	{
		toplam = toplam + i;		
	}
	 
	printf("Tum Sayilarin Toplami = %d ", toplam );
	
	getch  ();
	return 0;
}

