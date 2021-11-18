#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int y=strlen(argv[1]);
    int a=0 ;
    for (int i=0; i<=y;i++)
    {
        if (isdigit(argv[1][i]))
        {
            a=a+1;
        }
    }
    while (a!=y)
    {
      printf("Usage: ./caesar key\n");
      return 1;
    }
    int k= atoi(argv[1]);
    string plaintext= get_string("Plaintext: ");
    printf("Ciphertext: ");

    for (int j=0; j<strlen(plaintext); j++)
    {
        if ( (isalpha(plaintext[j])) && isupper(plaintext[j]) )
        {
            printf("%c", (((plaintext[j] - 65)+ k)% 26) +65);
        }

        else if( (isalpha(plaintext[j])) && islower(plaintext[j]) )
        {
            printf("%c", (((plaintext[j] - 97)+ k)% 26) +97);
        }

        else
        {
            printf("%c", (plaintext[j]));
        }

    }

    printf("\n");
    return 0;

}