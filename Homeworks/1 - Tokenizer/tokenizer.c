#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VARIABLE_LENGTH 100

void fillMatrix(int rowSize, char matrix[rowSize][MAX_VARIABLE_LENGTH], int row, char word[])
{
    int i;
    for (i = 0; word[i] != '\0'; i++)
    {
        matrix[row][i] = word[i];
    }
    matrix[row][i] = '\0';
}

int main()
{
    FILE *file;
    char operatorAlphabet[] = {';', ':', ',', '!', '<', '>', '=', '(', ')', '{', '}', '[', ']', '+', '-', '*', '/', '\'', '\"', '%', '&', '|', '#'};
    char valueAlphabet[][100] = {"int", "char", "float", "long", "short", "case", "return"};
    char c, fileName[250];
    char word[MAX_VARIABLE_LENGTH];
    int i, j, k, t, f, counter = 0;
    int operatorAlphabetLength = sizeof(operatorAlphabet) / sizeof(operatorAlphabet[0]);
    int valueAlphabetRowSize = sizeof(valueAlphabet) / sizeof(valueAlphabet[0]);

    printf("Lutfen dosya ismini giriniz (or: file.txt)(dosya programla ayni dizinde olmalidir) : ");
    gets(fileName);

    file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("Dosya okuma basarisiz.");
        return 0;
    }

    j = 0;
    printf("\nDosyadan okunmus ham hali :\n");
    while ((c = fgetc(file)) != EOF) // to find size
    {
        printf("%c", c);

        if (c == ' ' || c == '\n' || c == '\t')
        {
            continue;
        }
        j++;
    }
    puts("\n");

    int size = j;

    char finalData[size][MAX_VARIABLE_LENGTH];
    char data[size]; // creating array

    fseek(file, 0, SEEK_SET); // returning to head

    j = 0;
    while ((c = fgetc(file)) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            continue;
        }

        data[j] = c;
        j++;
    }
    data[size] = '\0'; // insurance

    fclose(file);

    k = 0;
    int isOperator = 0;
    int isDouble = 0;
    memset(word, 0, sizeof(word));
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < operatorAlphabetLength; j++)
        {
            if (data[i] == operatorAlphabet[j])
            {
                isOperator = 1;

                if (data[i] == '+' && data[i] == data[i + 1])
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '-' && data[i] == data[i + 1])
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '&' && data[i] == data[i + 1])
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '|' && data[i] == data[i + 1])
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '/' && data[i] == data[i + 1])
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '/' && data[i + 1] == '*')
                {
                    isDouble = 1;
                    break;
                }

                if (data[i] == '*' && data[i + 1] == '/')
                {
                    isDouble = 1;
                    break;
                }

                if ((data[i] == '>' || data[i] == '<' || data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/' || data[i] == '%' || data[i] == '!' || data[i] == '=') && data[i + 1] == '=')
                {
                    isDouble = 1;
                    break;
                }
            }
        }

        if (isOperator == 0)
        {
            word[k] = data[i];
            int isOkey;

            for (j = 0; j < valueAlphabetRowSize; j++)
            {
                isOkey = 1;
                for (t = 0; valueAlphabet[j][t] != '\0'; t++)
                {
                    if (word[t] != valueAlphabet[j][t])
                    {
                        isOkey = 0;
                        break;
                    }
                }

                if (isOkey == 1)
                {
                    fillMatrix(size, finalData, counter++, valueAlphabet[j]);

                    // printf("%s, ", valueAlphabet[j]);
                    k = -1;
                    memset(word, 0, sizeof(word));
                    break;
                }
            }

            k++;
        }
        else
        {
            if (word[0] != '\0')
            {
                word[k] = '\0';
                fillMatrix(size, finalData, counter++, word);
                // printf("%s, ", word);
            }

            if (isDouble == 1)
            {
                char temp1[3] = {data[i], data[i + 1], '\0'};
                fillMatrix(size, finalData, counter++, temp1);
                // printf("%c", data[i]);
                i++;
            }
            else
            {
                char temp2[2] = {data[i], '\0'};
                fillMatrix(size, finalData, counter++, temp2);
            }
            // printf("%c, ", data[i]);

            k = 0;
            isOperator = 0;
            isDouble = 0;
            memset(word, 0, sizeof(word)); //to reset word
        }
    }

    puts("Kelimelestirilmis hali : ");
    for (i = 0; i < counter; i++)
    {
        for (j = 0; finalData[i][j] != '\0'; j++)
        {
            printf("%c", finalData[i][j]);
        }
        printf(", ");
    }

    puts("\nProgram sonu...");

    return 0;
}
