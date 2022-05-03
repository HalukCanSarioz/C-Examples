#include<stdio.h>
#include<conio.h> 

int main() 
{ 	
	int sayi,i; 
	float altinoran = 0.0;
 	printf("Bir Sayi Giriniz : ");
  	scanf("%d",&sayi);
   	for (i=0 ; i<sayi ; i++)
	{
		altinoran = 1+1/altinoran;
	} 
	printf("%f",altinoran);
	return 0;
}
