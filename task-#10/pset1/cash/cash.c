#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float change;
    do {
    change= get_float("Change owed:");
    }while (change <= 0);
    int cents= round(change*100);
    int coins=0;

    while (cents >=25)
    {

        coins=coins+1;
        cents=cents-25;
    }


    while (cents >= 10)
    {
       coins= coins+1;
       cents=cents-10;
    }

    while (cents >=5)
    {
        coins= coins+1;
        cents=cents-5;
    }

    while (cents >=1)
    {
        coins= coins+1;
        cents=cents-1;
    }

    printf("%i",coins);
}