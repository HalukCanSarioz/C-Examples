#include <stdio.h>
#include <locale.h>
int main()
{	
	int girdi;
	int enBuyuk, enKucuk;
	int enBuyukSayaci = 0;
	int enKucukSayaci = 0;
	int durum = 1;
	while(1) 
	{
		printf("Lutfen sayi giriniz: ");
		scanf("%d", &girdi);
		if (girdi == 0) 
		{
			break;
		} 
		else if (girdi < 0) 
		{
			printf("Girdiginiz sayý 0 veya 0'dan buyuk olmalidýr.");
			continue;
		}
		if (durum) 
		{
			enBuyuk = girdi;
			enKucuk = girdi;
			durum = 0;
			enBuyukSayaci++;
			enKucukSayaci++;
		} 
		else
		{
			if (girdi > enBuyuk) 
			{
				enBuyuk = girdi;
				enBuyukSayaci = 1;
			}
			else if (girdi < enKucuk)
			{
				enKucuk = girdi;
				enKucukSayaci = 1;
			}
			else 
			{
				if (girdi == enBuyuk) 
				{
					enBuyukSayaci++;
				}
				if (girdi == enKucuk) 
				{
					enKucukSayaci++;
				}
			}
		}
		
	}
	
	if (durum == 1) 
	{
		printf("\nHiç bir veri girmediniz!");
	} 
	else 
	{
		if (enBuyuk == enKucuk) 
		{
			printf("\nGirdiginiz sayilarin hepsi ayný (%d'den %d tane girdiniz).", enKucuk, enKucukSayaci);
		} 
		else 
		{
			printf("\nEn buyuk sayi %d (%d adet), en kucuk sayi %d (%d adet).", enBuyuk, enBuyukSayaci, enKucuk, enKucukSayaci);
		}
	}
	return 0;	
}
