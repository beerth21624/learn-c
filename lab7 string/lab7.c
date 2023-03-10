#include <stdio.h>

void roman2arabic(char input[], char output[])
{
    int i = 0;
    for (i = 0; input[i] != '\0';)
    {
        switch (input[i])
        {
        case 'I':
            if (input[i + 1] == 'V')
            {
                output[i] = '4';
                i++;
            }
            else if (input[i + 1] == 'X')
            {
                output[i] = '9';
                i++;
            }

            else if (input[i + 2] == 'I')
            {
                output[i] = '3';
                i++;
            }
            else if (input[i + 1] == 'I')
            {
                output[i] = '2';
                i++;
            }
            else
            {
                output[i] = '1';
                i++;
            };
            break;

        case 'V':
            output[i] = '5';
            i++;
            while (input[i] == 'I')
            {
                output[i] = '1';
                i++;
            }
            break;

        case 'X':

            output[i] = '1';
            output[i + 1] = '0';
            i++;
            while (input[i] == 'X')
            {
                output[i] = '1';
                output[i + 1] = '0';
                i++;
            }
            break;

        default:
            output[i] = input[i];
            i++;
            break;
        }
    }

    output[i] = '\0';
}

int main()
{
    char input[80], output[80];

    printf(" Input: ");
    gets(input);

    roman2arabic(input, output);
    printf("Output: %s\n", output);

    return 0;
}