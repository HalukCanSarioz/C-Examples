#include <stdio.h>
#include <stdlib.h>
   int main()
   {
    int sayi,toptek=0,topcift=0;
    do
    {
    system("CLS");
    printf("Cift sayilarin toplami = %d",topcift);
    printf("Tek sayilarin toplami = %d",toptek);
    printf("cikis icin 00 sayilarini giriniz...   ");
    printf("Bir sayi giriniz :");
    scanf("%d",&sayi);
    if (sayi%2 == 0) topcift += sayi;
    if (sayi%2 == 1) toptek += sayi;
    }
	while(sayi != 00);
    printf ("sonlandi , ");
    printf("Cift sayilarin toplami = %d",topcift);
    printf("Tek sayilarin toplami = %d",toptek);
      printf("icin enter tusuna basiniz");
      fflush(stdin);
      return 0;
  }
