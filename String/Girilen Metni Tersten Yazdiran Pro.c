#include <stdio.h>
#include <conio.h>

int main ()
{
	char mkz[100];
	
	printf ("Type Any String (Without Space) :");
	scanf ("%s",&mkz);
	
	int i=0;
	
	while (mkz[i] != '\0')
	{
		i++;
	}
	
	printf ("....:::::: %d ::::::.....\n\n",i);
	
	i = i - 1;
	
	printf ("This is the reverse of entered string : ");
	
	while ( i >= 0)
	{
		printf ("%c",mkz[i]);
		i--;
	}
	
	getch ();
	return 0;
}
