#include <stdio.h>
#include <cstring>
main()
{
   FILE *fp; 
   char ivir[25]; 
   int index;
   fp = fopen("onsatir.txt","w");   /* yazmak icin acalim */
   strcpy(ivir,"Bu bir ornek satirdir.");
   for (index = 1;index <= 10;index++)
       fprintf(fp,"%s  Satir no: %d\n",ivir,index);
   fclose(fp);    /* dosyayý kapayalim */
}
