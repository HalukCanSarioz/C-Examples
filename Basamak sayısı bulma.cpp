#include<stdio.h> 
#include <math.h> 
int main() 
{ 
	int sayi,i,basamak;
	printf("0-9999 arasi sayi giriniz : "); 
	scanf("%d",&sayi); 
	for(i=0;i<4;i++)
	{
		if((sayi/pow(10,i))>=1) 
		{	
			basamak = i+1;
		}
	}		
	printf("Sayiniz %d basamakli",basamak); 
	return 0;
}
