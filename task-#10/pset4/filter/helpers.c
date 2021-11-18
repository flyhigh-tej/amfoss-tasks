#include "helpers.h"
#include<math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for(int j=0; j < width; j++)
        {
         float sum= image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue;
         int avg = (round)(sum/3);
         image[i][j].rgbtRed= avg;
         image[i][j].rgbtGreen= avg;
         image[i][j].rgbtBlue= avg;
        }
    }


}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i< height; i++)
    {
        for(int j=0; j< width; j++)
        {
            float orgRed= image[i][j].rgbtRed;
            float orgGreen= image[i][j].rgbtGreen;
            float orgBlue= image[i][j].rgbtBlue;

            int sepiaRed = (round)(0.393*orgRed + 0.769*orgGreen + 0.189*orgBlue);
            int sepiaGreen = (round)(0.349*orgRed + 0.686*orgGreen + 0.168*orgBlue);
            int sepiaBlue = (round)(0.272*orgRed + 0.534*orgGreen + 0.131*orgBlue);

            if(sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if(sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if(sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            image[i][j].rgbtRed= sepiaRed;
            image[i][j].rgbtGreen= sepiaGreen;
            image[i][j].rgbtBlue= sepiaBlue;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i< height; i++)
    {
       for(int j = 0; j< (width/2); j++)
       {
           RGBTRIPLE tmp = image[i][j];
           image[i][j] = image[i][width-(j+1)];
           image[i][width-(j+1)] = tmp;
       }
    }

}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for (int i=0; i< height; i++)
    {
        for (int j=0; j< width; j++)
        {
            float Red = 0;
            float Blue = 0;
            float Green = 0;
            int box = 0;

            for (int x=-1; x<2; x++)
            {
                for (int y = -1;y< 2; y++)
                {
                    int X = i + x;
                    int Y = j + y;

                    if (X<0 || X>(height-1) || Y<0 || Y>(width-1))
                    {
                        continue;
                    }
                    Red = Red+image[X][Y].rgbtRed;
                    Green = Green+image[X][Y].rgbtGreen;
                    Blue = Blue+image[X][Y].rgbtBlue;

                    box=box+1;

                }

                tmp[i][j].rgbtRed = (round)(Red/box);
                tmp[i][j].rgbtBlue = (round)(Green/box);
                tmp[i][j].rgbtGreen = (round)(Blue/box);
            }

        }

    }
}
