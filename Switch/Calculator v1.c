#include <stdio.h>

int islem (float t)
{
	char n;
	float j;
	printf ("--> ");
	scanf ("%c",&n);
	
	switch (n)
	{
		case '=' : printf ("%.2f",t);
				break;
		case '+' :
				printf ("> ");
				scanf ("%f",&j); 
				t = t + j;
				islem (t);
				break;
		case '-' :
				printf ("> ");
				scanf ("%f",&j); 
				t = t - j;
				islem (t);
				break;
		case '*' :
				printf ("> ");
				scanf ("%f",&j); 
				t = t * j;
				islem (t);
				break;
		case '/' :
				printf ("> ");
				scanf ("%f",&j); 
				t = t / j;
				islem (t);
				break;				
		default : islem(t);
				break;
	}
}

int main ()
{
	float t;
	printf ("\"..  Calculator  ..\"\n> ");
	scanf ("%f",&t);
	
	return islem (t);
}
