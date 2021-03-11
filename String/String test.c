#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[400], word[100];
    int i, j;

    printf("Lutfen bir cumle giriniz : ");
    gets(sentence);

    printf("Aranan kelimeyi giriniz : ");
    gets(word);

    char tempHead = word[0];
    char tempTail = word[strlen(word) - 1];
    int result = 0;

    for (i = 0; i < strlen(sentence); i++)
    {
        if (result != 1)
        {
            if (sentence[i] == tempHead && sentence[strlen(word) + i - 1] == tempTail)
            {
                //  && ((i == strlen(sentence) - 1) || sentence[i + 1] == ' ')
                if ((i == 0 || sentence[i - 1] == ' '))
                {
                    for (j = 1; j < strlen(word); j++)
                    {
                        printf("\n%c \n",sentence[i + j]);
                        if (sentence[i + j] != word[j])
                        {
                            break;
                        }
                    }
                    result = 1;
                }
            }
        }
    }

    if(result == 1)
    {
        printf("working");
    }
    else
    {
        printf("not working");
    }

    // printf("%s , %d", sentence, strlen(sentence));
    // puts(word);
    // puts(sentence);
}