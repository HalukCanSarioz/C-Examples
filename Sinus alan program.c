#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592
int main(void)
{
    int aci;
    do{
    printf("sayi giriniz :");
    scanf("%d",&aci);
    printf("aci : %d sinusu : %.3f",aci,sin(aci*pi/180));
    puts("icin Y,Devam etmek icin N harfine basiniz");
    }
    while(getchar() == 'N' || getchar() == 'n');
    printf("program sonlandirmak icin enter tusuna basiniz");
      fflush(stdin);
      return 0;
  }
