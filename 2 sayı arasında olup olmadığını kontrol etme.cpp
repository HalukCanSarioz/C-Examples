#include <stdio.h>
int main ()
{
	int sayi1;
	printf("Girilen sayinin 20 ile 100 arasinda olup olmadigini kontrol eder\n");
	printf("Lutfen bir tamsayi giriniz  ");
	scanf("%d",&sayi1);
	if ( sayi1>20 && sayi1<100 )
	{
		printf("sayi 100 ile 20 arasýndadýr.\n");
	}
	else
	{
		printf("sayi 100 ile 20 arasi degildir.\n");
	}
		
	return 0;
}
