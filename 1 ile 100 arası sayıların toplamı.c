#include <stdio.h>   
#include <stdlib.h>
int main()
{
    int i,toplam=0;
    for (i=1;i<=100;i++)
    {
        toplam += i;
    }
    printf("1'den 100'e kadar olan sayilarin toplami = %d'dir",toplam);
    fflush(stdin);
    return 0;
  }
