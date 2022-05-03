#include<stdio.h>
#include<conio.h>

int main()

{
      int x,y,z,t,k,l;                 //degiskenler tanimlaniyor
      printf("Piramit icin satir sayisi giriniz\n\n");
      scanf("%d",&y);           //satir sayisi giriliyor
      
      for(x=1;x<=y;x++) //satirlarin olusmasi icin gerekli dongu
       {
          for(z=1;z<=y-x;z++) //piramitin yukaridan asagiya olusmasi icin gereken on bosluklarin dongusu
           {
            printf(" ");
            }
              for(k=1;k<=(x+x-1);k++)  //piramiti olusturan yildizlarin dongusu
               {
                  printf("*");
               }
           print("\n");  //satir atlatan printf
       }
       return 0;
}
