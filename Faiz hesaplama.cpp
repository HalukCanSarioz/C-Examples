#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int ay,sayac;
	float ara,yuzde,fark,yil,ana,faiz;
	printf("Her ay %0.05 faizlenecek ana parayi giriniz ");
	scanf("%f",&ana);
	printf("Kac ayda ");
	scanf("%d",&ay);
	
	for(sayac=0;sayac<ay;sayac++){
		
		faiz=(ana/100)*0.05;
		ana=ana+faiz;
}
	printf("%d ayda paraniz %f olur ve %f kadar faiz eklenir",ay,ana,faiz);
	return 0;
}
