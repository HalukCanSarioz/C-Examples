#include <stdio.h>
#include <locale.h>

int main()
 {
	int girdi;
	int enBuyuk, ikinciEnBuyuk;
	int durum = 1;
	while (1) 
	{
		printf("Sayi giriniz(0 girilirse program sonlanir.):");
		scanf("%d", &girdi);
		if (girdi == 0) 
		{
			break;
		} 
		else if (girdi < 0) 
		{
			printf("Girdiðiniz sayý 0 veya 0'dan buyuk olmalidýr.");
			continue;
		}
		if (durum) 
		{
			enBuyuk = girdi;
			ikinciEnBuyuk = girdi;
			durum = 0;
		} 
		else 
		{
			if (girdi > enBuyuk) 
			{
				ikinciEnBuyuk = enBuyuk;
				enBuyuk = girdi;
			} 
			else if (girdi > ikinciEnBuyuk && girdi != enBuyuk)
			{
				ikinciEnBuyuk = girdi;
			}
		}	
	}
	if (durum == 1)
	{
		printf("\nYeterli veri girmediniz!");
	} 
	else 
	{
		if (enBuyuk == ikinciEnBuyuk)
		{
			printf("\nGiriðiniz verilerin hepsi ayný!");
		} 
		else 
		{
			printf("\nEn büyük deðer %d, ikinci en büyük deðer %d.", enBuyuk, ikinciEnBuyuk);
		}
	}
	return 0;
}
