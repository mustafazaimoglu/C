#include<stdio.h>
#include<stdlib.h>

// i think there is a problem but i could not find it;

int main()
{
    int *testPointer;

     testPointer = malloc(5 * sizeof(int));

    if (testPointer == NULL)
    {
        printf("Memory not allocated!");
    }
    else
    {
        printf("Memory allocated!");
    }

    /*
        pointerAdı = malloc,calloc.....
        malloc (10 * sizeof(int)); kendimiz çarparız
        calloc (10, sizeof(int)); iki parameter veririz
        realloc(pointerAdı, 10 * sizeof(int)); // yeniden alan tahsis ederken kullanılır.
        free(pointerAdı); boşaltmak için
    */
}
