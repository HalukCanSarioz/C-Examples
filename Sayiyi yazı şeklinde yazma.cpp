#include<stdio.h>
#include<conio.h>

void ekrana_yaz(int);
main()
{
    int sayi,birler,onlar,yuzler;
    do
    {                                // girilen sayinin 1-999 arasýnda
        printf("  Bir sayi giriniz(1-999):   "); 
        scanf("%d",&sayi);             // olup olmadýðý kontrolü yapýlýyor
    }
	while(sayi<1 || sayi>999);   // deðilse, tekrar sayý giriþi istenir
    
    printf("\n\n");
    printf("   ");
                                 // varsayalým sayýmýz  -- 543 -- olsun 
    yuzler=sayi-(sayi%100);   // - 500 - olan kýsmý alýr 
    ekrana_yaz(yuzler);         // ve fonksiyona yollar

    sayi=sayi%100;    
    onlar=sayi-(sayi%10);   // ardýndan sayýnýn - 40 - olan kýsmýný alýr
    ekrana_yaz(onlar);     // ve fonksiyona yollar

    birler=sayi%10;         // en sonda - 3 - olan kýsmý alýr
    ekrana_yaz(birler);       // ve fonksiyona yollar
	return 0;
}

void ekrana_yaz(int sayi)  
{
    if(sayi>=1 && sayi<=9)
    {
        switch(sayi)
        {
           case 1: printf("bir  "); break;
           case 2: printf("iki  "); break;
           case 3: printf("uc  "); break;
           case 4: printf("dort  "); break;
           case 5: printf("bes  "); break;
           case 6: printf("alti  "); break;
           case 7: printf("yedi  "); break;
           case 8: printf("sekiz  "); break;
           case 9: printf("dokuz  "); break;
        }
    }
    if(sayi>=10 && sayi<=99)
    {
        switch(sayi)
        {
           case 10: printf("on "); break;
           case 20: printf("yirmi "); break;
           case 30: printf("otuz "); break;
           case 40: printf("kirk "); break;
           case 50: printf("elli "); break;
           case 60: printf("altmis "); break;
           case 70: printf("yetmis "); break;
           case 80: printf("seksen "); break;
           case 90: printf("doksan "); break;
        }
    }
    if(sayi>=100 && sayi<=999)
    {
        switch(sayi)
        {
           case 100: printf("yuz "); break;
           case 200: printf("ikiyuz "); break;
           case 300: printf("ucyuz "); break;
           case 400: printf("dortyuz "); break;
           case 500: printf("besyuz "); break;
           case 600: printf("altiyuz "); break;
           case 700: printf("yediyuz "); break;
           case 800: printf("sekizyuz "); break;
           case 900: printf("dokuzyuz "); break;
        }
    }
}
