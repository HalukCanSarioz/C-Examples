#include <stdio.h>
int main ( )
{
	int girilensayi;
	printf("Lutfen bir tamsayi giriniz  ");
	scanf("%d", &girilensayi);
	if ( girilensayi > 100 ) 
		printf("Girilen sayi 100'den buyuktur.");
	else
		printf("Girilen sayi 100'den kucuktur.");
	return 0;
}
