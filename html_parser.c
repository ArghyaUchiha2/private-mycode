#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0; // Variable to check if we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // Remove trailing spaces from the beginning
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
            string[i] = string[i + 1];
    }

    // Removing trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char str[] = " <h1>      Ronty  's    website heading.     </h1>   ";
    parser(str);
    printf("~~%s~~\n", str);
    return 0;
}