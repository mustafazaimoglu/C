#include<stdio.h>

void addOne(int *toAdd)
{
    printf("%d",toAdd);
    *toAdd = *toAdd + 1;
}

int main()
{
    int *mkz;
    int num = 33;

    mkz = &num;

    printf("%d\n",mkz);
    addOne(mkz);

    printf("\n%d",*mkz);

}