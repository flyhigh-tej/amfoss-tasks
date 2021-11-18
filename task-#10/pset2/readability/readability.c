#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main()
{
    int letters=0,words=1,sentences=0;
    string text= get_string("Text: ");
    long y=strlen(text);
    for(int i=0;i< y;i++)
    {
      if ((text[i] >= 'a' && text[i]<='z') || (text[i] >= 'A' && text[i]<='Z'))
      {
        letters=letters+1;
      }
      else if(text[i] == ' ' )
      {
        words=words+1;
      }

      else if(text[i]== '.'||text[i]== '?' ||text[i]== '!')
      {
        sentences=sentences+1;
      }

    }
    float L=(letters*100)/words, S=(sentences*100)/words;
    float index = (0.0588 *L)- (0.296 *S)  - 15.8;
    index=round(index);
    if(index>=1 && index<= 16)
    {
      printf("Grade %i\n",(int)index);
    }
    else if(index>16)
    {
       printf("Grade 16+\n");
    }
    else if(index<1)
    {
        printf("Before Grade 1\n");
    }
}