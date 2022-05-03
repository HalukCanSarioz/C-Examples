#include <stdio.h>
main ( void )
{
	float sayi1;
	float sayi2;
	float toplam;
	printf("iki sayiyi da giriniz ");
	scanf("%f %f",&sayi1,&sayi2);
	toplam = sayi1 + sayi2;
	printf("toplam = %f",toplam);
	return 0;
}
