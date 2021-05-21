#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VARIABLE_LENGTH 100
#define println() printf("\n")
#define printtab() printf("\t")

void fillMatrix(int rowSize, char matrix[rowSize][MAX_VARIABLE_LENGTH], int row, char word[])
{
    int i;
    for (i = 0; word[i] != '\0'; i++)
    {
        matrix[row][i] = word[i];
    }
    matrix[row][i] = '\0';
}

void printTab(int amount)
{
    int j;
    for (j = 0; j < amount; j++)
    {
        printtab();
    }
}

int getLength(char Arr[])
{
    int j;
    for (j = 0; Arr[j] != '\0'; j++)
        ;
    return j;
}

void shiftOncesAddSpace(char arr[], int location)
{
    int length = getLength(arr), i;
    for (i = length; i > location; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = ' ';
}

int main()
{
    FILE *file;
    char operatorAlphabet[] = {';', ':', ',', '!', '<', '>', '=', '(', ')', '{', '}', '[', ']', '+', '-', '*', '/', '\'', '\"', '\\', '%', '&', '|', '#'};
    char valueAlphabet[][100] = {"int", "char", "float", "double", "long", "short", "case", "return", "else", "void"};
    char c, fileName[250];
    char word[MAX_VARIABLE_LENGTH];
    int i, j, k, t, f, counter = 0;
    int operatorAlphabetLength = sizeof(operatorAlphabet) / sizeof(operatorAlphabet[0]);
    int valueAlphabetRowSize = sizeof(valueAlphabet) / sizeof(valueAlphabet[0]);

    printf("Lutfen dosya ismini giriniz (or: file.txt) : ");
    gets(fileName);

    file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("Dosya okuma basarisiz.");
        return 0;
    }

    j = 0;
    while ((c = fgetc(file)) != EOF) // to find size
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            continue;
        }
        j++;
    }

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

    printf("\nDosyadan okunmus ham hali :\n");
    char line[150];
    int index = 0;
    int curlyBracketCount = 0;
    int normalBracketCount = 0;
    int newLine = 0;
    for (i = 0; i < size; i++)
    {
        int comma = 0;
        int cBracket = 0;

        if (data[i] == '{')
        {
            curlyBracketCount++;
            newLine = 1;
            cBracket = 1;
        }

        if (data[i] == '}')
        {
            curlyBracketCount--;
            newLine = 1;
            cBracket = -1;
        }

        if (data[i] == '(')
        {
            normalBracketCount++;
        }

        if (data[i] == ')')
        {
            normalBracketCount--;
        }

        if (normalBracketCount == 0)
        {
            if (data[i] == ';')
            {
                newLine = 1;
                line[index++] = data[i];
                comma == 1;
            }
        }

        if (newLine == 1)
        {

            int isOkey = 0;
            for (j = 0; line[j] != '\0'; j++)
            {
                for (k = 0; k < valueAlphabetRowSize; k++)
                {
                    isOkey = 1;
                    int matrixIndexLength = getLength(valueAlphabet[k]);
                    int same = 0;
                    int d = j;
                    for (t = 0; valueAlphabet[k][t] != '\0'; t++)
                    {
                        if (line[d] != valueAlphabet[k][t])
                        {
                            isOkey = 0;
                            break;
                        }
                        else
                        {
                            same++;
                            d++;
                        }
                    }

                    if (same == matrixIndexLength)
                    {
                        if (isOkey == 1)
                        {
                            if (line[j - 1] == 'r' && line[j - 2] == 'p' && line[j] == 'i')
                            {
                                continue;
                            }
                            shiftOncesAddSpace(line, d);
                        }
                    }
                }
            }

            printf("%s", line);

            println();

            newLine = 0;

            if (cBracket != 0)
            {
                int amount;
                if (cBracket == 1)
                {
                    amount = curlyBracketCount - 1;
                }
                else
                {
                    amount = curlyBracketCount;
                }

                index = 0;
                memset(line, 0, sizeof(line));

                for (j = 0; j < amount; j++)
                {
                    line[index++] = '\t';
                }

                line[index++] = data[i];
                line[index++] = '\n';

                printf("%s", line);
            }

            index = 0;
            memset(line, 0, sizeof(line));

            for (j = 0; j < curlyBracketCount; j++)
            {
                line[index++] = '\t';
            }
        }
        else
        {
            line[index++] = data[i];
        }
    }

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

                if (data[i] == '\\' && data[i + 1] == 'n')
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
            }

            if (isDouble == 1)
            {
                char temp1[3] = {data[i], data[i + 1], '\0'};
                fillMatrix(size, finalData, counter++, temp1);
                i++;
            }
            else
            {
                char temp2[2] = {data[i], '\0'};
                fillMatrix(size, finalData, counter++, temp2);
            }

            k = 0;
            isOperator = 0;
            isDouble = 0;
            memset(word, 0, sizeof(word)); //to reset word
        }
    }

    puts("\nKelimelestirilmis hali : ");
    for (i = 0; i < counter; i++)
    {
        for (j = 0; finalData[i][j] != '\0'; j++)
        {
            printf("%c", finalData[i][j]);
        }
        printf(", ");
    }

    printf("\n\nProgram sonu...");
    return 0;
}
