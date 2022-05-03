#include <stdio.h>
#include <conio.h>

int main()
{
	int sayac,faktor,nn;
	sayac=0;
	faktor=1;
	printf("Faktor almak istenen sayiyi giriniz ");
	scanf("%d",&nn);
	while (sayac<nn)
	{
		sayac =sayac+1;
		faktor=faktor*sayac;
	}
	printf("Sonuc %d",faktor);
	return 0;	
}
