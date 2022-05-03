#include<stdio.h>
int main()
{
	float sayi1;
	float sayi2;
	float ortalama;
	printf("iki sayýyý da girin >");
	scanf("%f%f",&sayi1,&sayi2);
	ortalama = ( sayi1 + sayi2 ) / 2 ;
	printf("ortalamalari = %f'dir",ortalama);
	return 0;
}
