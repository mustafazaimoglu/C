#include <stdio.h>
#include <conio.h>

void Yazdir(int Sonuc)
{
	printf ("%d",Sonuc);
}

int Topla(int a,int b)
{
	Yazdir(a+b);
}


int main ()
{
	int t,x = 15 ,y = 16;
	
	t = Topla(x,y);
	
	
	getch ();
	return 0;
}





