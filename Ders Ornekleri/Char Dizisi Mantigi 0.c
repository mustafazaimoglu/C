#include <stdio.h>
#include <conio.h>

int main()
{
	char dizi[]={'m','e','r','h','a','b','a','\0'};
	
	printf ("%s\n",dizi);
	
	int i;
	
	for (i=0;dizi[i]!='\0';i++)
	{
		printf ("%c",dizi[i]);
	}
	printf ("\n");
	i = 0;
	while (dizi[i] != '\0')
	{
		printf ("%c",dizi[i]);
		i++;
	}
	
	getch ();
	return 0;
}
