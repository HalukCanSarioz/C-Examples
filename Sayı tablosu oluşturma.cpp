#include<stdio.h> 
#include <math.h> 
int main() 
{
	int i;
	printf("A giriniz");
	scanf("%d",&i);
	for(i=1;i<11;i++)
	{
		printf("%d\t 10*%d\t 100*%d\t \t 1000*%d\n",i,i*10,i*100,i*1000);
	}
	return 0;
}
