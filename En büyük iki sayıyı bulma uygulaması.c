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
			printf("Girdi�iniz say� 0 veya 0'dan buyuk olmalid�r.");
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
			printf("\nGiri�iniz verilerin hepsi ayn�!");
		} 
		else 
		{
			printf("\nEn b�y�k de�er %d, ikinci en b�y�k de�er %d.", enBuyuk, ikinciEnBuyuk);
		}
	}
	return 0;
}
