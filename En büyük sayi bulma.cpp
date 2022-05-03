#include <stdio.h>
#include <conio.h>

int main()
{
		int maks(int,int,int),a,b,c;
		printf("Sayi giriniz  ");
		scanf("%d %d %d",&a,&b,&c);
		printf("En buyuk sayi = %d\n",maks(a,b,c));
		return 0;
}

int maks(int a,int b,int c)
{
	if(a>b && b>c)
	return a;
	else if(b>a && a>c)
	return b;
	else if(c>b && b>a)
	return c;
}
