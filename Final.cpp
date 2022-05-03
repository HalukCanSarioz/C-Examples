#include<stdio.h>
#include<conio.h>

int main()
{
	int sayi;  
	char yon;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("\n sagdan bakmak icin a\n soldan bakmak icin b giriniz \n seciminiz:");
	scanf("%c",&yon);
	scanf("%c",&yon);
	int asalmi(int c);
	int fonksiyon(int x, char y);
	printf("Donen deger:%d ",fonksiyon(sayi,yon));
	}
	int fonksiyon(int x, char y)
	{
	    int asalmi(int c);int deger=0;
	   if(y=='a')
	             if (asalmi(x))
	                  if (asalmi((int)(x/10)))
	                     if (asalmi((int)(x/100)))
	                     deger=1;
	              
	    if(y=='b')
	    if (asalmi(x))
	                  if (asalmi(x%100))
	                     if (asalmi(x%10))
	                     deger=1;
	              
	    
	    return(deger);
}

int asalmi(int k)
{ 
    int asallik=1;
 for(int i=2; i<=k-1; i++)
         if(k%i==0) asallik=0;
             return (asallik);
    }
