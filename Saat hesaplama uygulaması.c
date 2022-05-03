#include <stdio.h>
#include <locale.h>
int veriAl();
int main() 
{	
	int girdi;
	int hafta, gun, saat, dakika, saniye;
	int durum = 1;
	while (durum) 
	{
		system("cls");
		printf("saat, dakika, saniye -> 1\nhafta, gun, saat, dakika, saniye -> 2\nCikis -> 3\n\n");
		char secim;
		printf("Cevirmek istediginiz formati tuslayin.");
		secim = getch();
		system("cls");
		switch(secim) 
		{
			case '1':
				girdi = veriAl(); 
				system("cls");
				saniye = girdi % 60;
				dakika = girdi % 3600 / 60;
				saat = girdi / 3600;
				printf("%d saniye = %d saat, %d dakika, %d saniye", girdi, saat, dakika, saniye);
				printf("\n\nDevam etmek icin bir tusa basin.");
				getch();
				break;
			case '2':
				girdi = veriAl();
				system("cls");
				saniye = girdi % 60;
				dakika = girdi % 3600 / 60;
				saat = girdi % 86400 / 3600;
				gun = girdi % 604800 / 86400;
				hafta = girdi / 604800;
				printf("%d saniye = %d hafta, %d gun, %d saat, %d dakika, %d saniye", girdi, hafta, gun, saat, dakika, saniye);
				printf("\n\Devam etmek icin bir tusa basin.");
				getch();
				break;
			case '3':
				system("cls");
				durum = 0;
				printf("Program sonlandýrýldý.");
				printf("\n\nDevam etmek icin bir tusa basin.");
				getch();
				break;
			default:
				system("cls");
				printf("Geçersiz bir tuþlama yaptýnýz.");
				printf("\n\nDevam etmek için bir tusa basin.");
				getch();
				break;	
		}	
	}
	return 0;
}
int veriAl() 
{
	int girdi; 
	int kosul;
	do {
		printf("Saniye cinsinden bir tam sayi girin: ");
		scanf("%d", &girdi);
		if (kosul = girdi < 0) {
			printf("\a\tGirdiginiz sayý negatif olamaz!\n\n");
		}
	} while (kosul);
	return girdi; 
}
