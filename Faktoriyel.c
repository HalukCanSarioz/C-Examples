#include <stdio.h>  
#include <stdlib.h>
int main()
{
    int sayi,i,sonuc=1;
    printf("Bir sayi giriniz : ");
    scanf ("%d",&sayi);
    for (i=1;i<=sayi;i++)/*Dongu ile  sayi yazdigimiz sayiye gelinceye kadar sayiyle carpiliyor boleceye yazdigimiz sayinin faktoriyeline ulasmis oluyoruz...*/
    {
        sonuc *= i;
    }
    printf ("%d sayisinin faktoriyeli %d'dir",sayi,sonuc);
    printf("icin enter tusuna basiniz..");
	fflush(stdin);
    return 0;
  }
