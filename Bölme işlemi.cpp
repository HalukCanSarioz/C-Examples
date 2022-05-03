#include <stdio.h>
int main ( )
{
	int sayi1;
	int sayi2;
	float sonuc;
	printf("Bolunecek sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("Bolen sayiyi giriniz: ");
	scanf("%d",&sayi2);
	if ( sayi2 != 0 ) 
	{
		sonuc = (float) sayi1 / sayi2;
		printf("sonuc: %.2f\n",sonuc);
	}
	else
	{
		printf("hata : bolen 0 olamaz ;)");
	}

	return 0;
}
