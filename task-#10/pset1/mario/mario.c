#include<stdio.h>
#include<cs50.h>

int main()
{
    int n,i,j,k;

    do
    {
       n= get_int("Height: ");
    }while (n<1 || n>8);

    printf("Hello \n");

    for(i=1; i<=n;i++)
    {
        for(k=(n-1);k>=i;k=k-1)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("#");
        }

        printf("  ");

        for(j=1;j<=i;j++)
        {
            printf("#");
        }

        printf("\n");


    }


}
