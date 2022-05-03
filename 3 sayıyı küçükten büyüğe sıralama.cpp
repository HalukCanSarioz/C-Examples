#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c;
	printf("1.sayiyi girin:\n");
	scanf("%d",&a);
	printf("2.sayiyi girin:\n");
	scanf("%d",&b);
	printf("3.sayiyi girin:\n");
	scanf("%d",&c);
	printf("Girilen sayi\n%d %d %d\n",a,b,c);
	if ((a==b) && (b==c) && (a==c))
	{
		printf("%d=%d=%d",a,b,c);
	}
	else if ((a==b) && (b<c) && (a<c) )
	{
		printf("%d=%d<%d",a,b,c);
	} 
	else if ((a<b) && (b==c) && (a<c)) 
	{
		printf("%d<%d=%d",a,b,c);
	} 
	else if ((a<b) && (b<c) && (a<c)) 
	{
		printf("%d<%d<%d",a,b,c);
	} 
	else if ((b<a) && (a<c) && (b<c))
	{
		printf("%d<%d<%d",b,a,c);
	} 
	else if ((c<b ) && (b<a) && (c<a)) 
	{
		printf("%d<%d<%d",c,b,a);
	} 
	else if ((c<a) && (a<b) && (c<b))
	{
		printf("%d<%d<%d",c,a,b);
	} 
	else if ((a<c) && (c<b) && (a<b))
	{	
		printf("%d<%d<%d",a,c,b);
	} 
	else if ((b<c) && (c<a) && (b<a)) 
	{
		printf("%d<%d<%d",b,c,a);
	} 
	else if ((b<c) && (c<a) && (b<a)) 
	{
		printf("%d<%d<%d",b,c,a);
	}
	else if ((a==b) && (a>c) && (b>c) )
	{
		printf("%d<%d=%d", c,a,b);
	}
	
	return 0;
}
