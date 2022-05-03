#include<stdio.h>
int main()
{
	float ortalama;
	int toplam=0,girilen=0,sayac=0;
	printf("Notu giriniz(-1 girerseniz ortalama alma durur)  ");
	scanf("%d",&girilen);
	while(girilen!=-1){
		sayac=sayac+1;
		toplam=toplam+girilen;
		printf("Notu giriniz(-1 girerseniz ortalama alma durur)  ");
		scanf("%d",&girilen);
}
	ortalama=(float)toplam/sayac;
	printf("ortalama = %.2f",ortalama);
	return 0;	
}
