#include <stdio.h>
#include <locale.h>
#include <conio.h>
main ()
{
	setlocale(LC_ALL, "Turkish");
	baslangic:
	int sayi,kalan;
	printf("SAYININ TEK MÝ ÇÝFT MÝ OLDUÐUNU ANLAMAK ÝÇÝN\n");
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	kalan = sayi % 2;
	if (kalan == 0) 
		printf("Sayý çift\n");
	else 
		printf("Sayý tek\n");
		goto baslangic;
}

