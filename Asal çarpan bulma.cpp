#include<stdio.h> 
#include<conio.h>
main()
{ 
	int i,sayi,sonuc;
	printf("Bir sayi giriniz.");
	scanf("%d",&sayi);
	printf("Girdiginiz sayinin asal carpanlari \n");
	sonuc=sayi;
		for(i=2; i<=sayi; i++)
		{ 
			devam:
		    if(sonuc%i==0) 
		  	{
			  	sonuc=sonuc/i; 
			  	printf("%d \n",i);
			  	goto devam;
		  	}
	} 
		return 0;
}
