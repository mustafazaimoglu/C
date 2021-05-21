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

int operatorControl(char c, int alphabetLength, char operatorAlphabet[alphabetLength])
{
    int i;
    for (i = 0; i < alphabetLength; i++)
    {
        if (c == operatorAlphabet[i])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    FILE *file;
    char operatorAlphabet[] = {';', ':', ',', '!', '<', '>', '=', '(', ')', '{', '}', '[', ']', '+', '-', '*', '/', '\'', '\"', '\\', '%', '&', '|', '#'};
    char valueAlphabet[][100] = {"int", "char", "float", "double", "long", "short", "case", "return", "else", "void"};
    char word[MAX_VARIABLE_LENGTH];
    char c, fileName[250];
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


    printf("Kelimelestirilmis hali : \n");
    for (i = 0; i < counter; i++)
    {
        for (j = 0; finalData[i][j] != '\0'; j++)
        {
            printf("%c", finalData[i][j]);
        }
        printf(", ");
    }
    printf("\n\n");

    int error = 0;
    int ifContoller = 0;
    int normalBracet = -1; // -1 = null , 0 = ( , 1 = )
    int curlyBracet = -1;  // -1 = null , 0 = { , 1 = }
    int isThereAOperator = 0;
    int isAssignmentOkey = 0;
    int innerCounter = 1;

    for (i = 0; i < counter; i++)
    {
        for (j = 0; finalData[i][j] != '\0'; j++)
        {
            if (error == 1)
            {
                i = counter;
                break;
            }
            else if (ifContoller == 0)
            {
                if (finalData[i][j] == 'i' && finalData[i][j + 1] == 'f' && finalData[i][j + 2] == '\0')
                {
                    ifContoller = 1;
                    break;
                }
            }
            else if (normalBracet == -1)
            {
                if (finalData[i][j] == '(')
                {
                    normalBracet++;
                    break;
                }
                else
                {
                    error = 1;
                }
            }
            else if (normalBracet == 0)
            {
                if (innerCounter == 1 || innerCounter == 3)
                {
                    error = operatorControl(finalData[i][j], operatorAlphabetLength, operatorAlphabet);
                    innerCounter++;
                    break;
                }
                else if (innerCounter == 2)
                {
                    if (finalData[i][j] == '>' || finalData[i][j] == '<' || (finalData[i][j] == '<' && finalData[i][j + 1] == '=') ||
                        (finalData[i][j] == '>' && finalData[i][j + 1] == '=') || (finalData[i][j] == '=' && finalData[i][j + 1] == '=') ||
                        (finalData[i][j] == '!' && finalData[i][j + 1] == '='))
                    {
                        isThereAOperator = 1;
                        innerCounter++;
                        break;
                    }
                    else
                    {
                        error = 1;
                    }
                }
                else if (innerCounter == 4)
                {
                    if (finalData[i][j] == ')')
                    {
                        normalBracet++;
                        innerCounter = 1;
                        break;
                    }
                    else
                    {
                        error = 1;
                    }
                }
            }
            else if (curlyBracet == -1)
            {
                if (finalData[i][j] == '{')
                {
                    curlyBracet++;
                    break;
                }
                else
                {
                    error = 1;
                }
            }
            else if (curlyBracet == 0)
            {
                if (innerCounter == 1 || innerCounter == 3)
                {
                    error = operatorControl(finalData[i][j], operatorAlphabetLength, operatorAlphabet);
                    innerCounter++;
                    break;
                }
                else if (innerCounter == 2)
                {
                    if (finalData[i][j] == '=' && finalData[i][j + 1] == '\0')
                    {
                        isAssignmentOkey = 1;
                        innerCounter++;
                    }
                    else
                    {
                        error = 1;
                    }

                    break;
                }
                else if (innerCounter == 4)
                {
                    if (finalData[i][j] == '}')
                    {
                        curlyBracet++;
                        innerCounter = 0;
                        break;
                    }
                    else
                    {
                        error = 1;
                    }
                }
            }
            else if (ifContoller == 1 && normalBracet == 1 && curlyBracet == 1 && isAssignmentOkey == 1 && isThereAOperator == 1)
            {
                if (finalData[i][j] == 'e' && finalData[i][j + 1] == 'l' && finalData[i][j + 2] == 's' && finalData[i][j + 3] == 'e')
                {
                    if (finalData[i + 1][0] == '{')
                    {
                        curlyBracet = -1;
                        isAssignmentOkey = 0;
                        innerCounter = 1;
                    }
                    else if (finalData[i + 1][0] == 'i')
                    {
                        ifContoller = 0;
                        normalBracet = -1;
                        curlyBracet = -1;
                        isThereAOperator = 0;
                        isAssignmentOkey = 0;
                        innerCounter = 1;
                    }
                    else
                    {
                        error = 1;
                    }
                    break;
                }
                else
                {
                    error = 1;
                }
            }
        }
    }

    if (ifContoller == 1 && normalBracet == 1 && curlyBracet == 1 && isAssignmentOkey == 1 && isThereAOperator == 1 && error == 0)
    {
        printf("Dosya gramer'e UYGUNDUR.");
    }
    else
    {
        printf("Dosya gramer'e UYGUN DEGILDIR.");
    }

    printf("\n\nProgram sonu...");
    return 0;
}
