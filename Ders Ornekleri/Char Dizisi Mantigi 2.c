#include <stdio.h>
#include <conio.h>

int main()
{
	char dizi[50];
	printf ("Kelime Giriniz :");
	//scanf ("%s",&dizi); //tek kelime alir.
	gets (dizi); //birden Fazla Kelime alir.
	
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
	
	printf ("\nGirilen cumle %d Karakterlidir.",i);
	
	getch ();
	return 0;
}
