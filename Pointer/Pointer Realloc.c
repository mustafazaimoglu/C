#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,i,n1,n2;

    printf("Boyut giriniz : ");
    scanf("%d",&n1);

    p = (int*) malloc(n1 * sizeof(int));

    for(i = 0; i < n1; i++)
    {
        printf("%u\n",(p+i));
    }

    printf("Yeni boyut giriniz : ");
    scanf("%d", &n2);
    printf("Yeniden boyutlandiriliyor...\n");

    p = realloc(p,n2 * sizeof(int));

    for(i = 0; i < n2; i++)
    {
        printf("%u\n",(p+i));
    }

    printf("%d",n1);
}