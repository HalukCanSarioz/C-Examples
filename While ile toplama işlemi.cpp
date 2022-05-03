#include <stdio.h>
#include <conio.h>

int main()
{
	int kadar,sayac=0,toplam=0;
	printf("0'dan kaca kadar sayilari toplami>");
	scanf("%d",&kadar);
	while(sayac<kadar) {
		sayac=sayac+1;
		toplam=toplam+sayac;
	}
	printf("toplam=%d",toplam);
	return 0;
}
