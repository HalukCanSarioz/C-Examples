#include <stdio.h>
#include <locale.h>
int yuvarla(double sayi);
void ayikla(int kurus, int adetler[]);
int main()
{
	double girdi;
	char *isimler[11] = {"Iki Yuzluk", "Yuzluk", "Ellilik", "Yirmilik", "Onluk", "Beslik", "Birlik", "50 Kurusluk", "25 Kurusluk", "10 Kurusluk", "5 Kurusluk"};
	int adetler[11] = {0};
	printf("Ondalik isareti kullanacaksaniz, virgul kullanmaya dikkat edin.\n\n");
	do {
		printf("Tutari giriniz: ");
		scanf("%lf", &girdi);
		if (girdi < 0) {
			printf("\t\aHATA-> Girdiğiniz tutar negatif olamaz.\n\n");
		}
	} while (girdi < 0);
	system("cls");
	int kurus = yuvarla(girdi);
	printf("Girdiğiniz miktar %.2f TL\n\n", (double) kurus / 100);
	ayikla(kurus, adetler);
	int i;
	for (i = 0; i < 11; i++) 
	{
		if (adetler[i] != 0) 
		{
			printf("%d tane %s\n", adetler[i], isimler[i]);
		}
	}
	return 0;
}
int yuvarla(double sayi)
{
	sayi *= 1000; 
	int emanet = (int) sayi; 
	int kontrol = emanet % 10;
	if (kontrol >= 5) 
	{
		emanet += 10 - kontrol;
	} 
	else 
	{
		emanet -= kontrol;
	} 
	emanet /= 10; 
	kontrol = emanet % 10; 
	if (kontrol >= 8)
	{
		emanet += 10 - kontrol;
	} 
	else if (kontrol >= 3) 
	{
		emanet += 5 - kontrol;
	} 
	else 
	{
		emanet -= kontrol;
	} 
	return emanet;
}
void ayikla(int kurus, int adetler[]) 
{
	adetler[0] = kurus / 20000;
	kurus -= adetler[0] * 20000;
	adetler[1] = kurus / 10000;
	kurus -= adetler[1] * 10000;
	adetler[2] = kurus / 5000;
	kurus -= adetler[2] * 5000;
	adetler[3] = kurus / 2000;
	kurus -= adetler[3] * 2000;
	adetler[4] = kurus / 1000;
	kurus -= adetler[4] * 1000;
	adetler[5] = kurus / 500;
	kurus -= adetler[5] * 500;
	adetler[6] = kurus / 100;
	kurus -= adetler[6] * 100;
	adetler[7] = kurus / 50;
	kurus -= adetler[7] * 50;
	adetler[8] = kurus / 25;
	kurus -= adetler[8] * 25;
	adetler[9] = kurus / 10;
	kurus -= adetler[9] * 10;
	adetler[10] = kurus / 5;
	kurus -= adetler[10] * 5;
}
