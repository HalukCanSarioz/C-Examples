#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int ay,sayac;
	float ara,yuzde,fark,yil,ana,faiz;
	printf("Her ay %0.05 faizlenecek ana parayi giriniz ");
	scanf("%f",&ana);
	printf("Kac ayda  ");
	scanf("%d",&ay);

	for(sayac=1;sayac<=ay+1;sayac++){
		
		faiz=ana*(0.05);
		ara=ana+faiz;
}
	printf("%d ayda paraniz %.2f olur ve %.2f kadar faiz eklenir",ay,ara,faiz);
	return 0;
}
