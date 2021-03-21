#include <stdio.h>

int main()
{
    char fileName[] = "test.txt";
    FILE *file;

    file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("dosya okuma basarisiz.\n");
    }
    else
    {
        printf("dosya basari ile okundu.\n");
    }

    char a[5750];
    char temp;
    int i = 0, t, j;
//       while (fscanf(file, "%c", &a[i++]) != EOF)
//           ;

     while ((a[i++] = getc(file)) != EOF)
     {
     };

    printf("%s", a);
    printf("\n%d\n", i);

    // fscanf(file, "%c", &a); // karakter okumak için

    // printf("%c", a);

    // char a[350];

    // fgets(a,350,file); // Satır satır ortada verilen boyut kadar okur

    // printf("%s",a);

    // fgets(a,350,file);

    // printf("%s",a);

    // int i = 16;
    // char *a;
    // while(i > 0)
    // {
    //     a = fgetc(file); // karakter okur
    //     printf("%c",a);
    //     i--;
    // }

    // printf("%d\n",a);

    fclose(file);
}