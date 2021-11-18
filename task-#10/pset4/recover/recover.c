#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
int main(int argc, char *argv[])
{
 if (argc !=2)
 {
     printf("Usage: ./recover image\n");
     return 1;
 }
 FILE *Efile = fopen(argv[1], "r");
 if (Efile == NULL)
 {
     printf("Cannot open raw file\n");
     return 1;
 }
 uint8_t buffer[512];
 int jpeg_count = 0;
 char filename[8];
 FILE *file;

 while(fread(buffer, 512, 1, Efile)!=0)
 {
     if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && ( buffer[3] & 0xe0))
     {
        if (jpeg_count >0)
        {
         fclose(file);
        }

        jpeg_count=jpeg_count+1;
        sprintf(filename, "%03i.jpg",jpeg_count);
        file= fopen(filename,"w");

     }

     if (jpeg_count > 0)
     {
            fwrite(buffer, 512, 1, file);
     }

   }

   fclose(Efile);
   return 0;

}
