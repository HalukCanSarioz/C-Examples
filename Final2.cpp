#include<stdio.h>
#include<conio.h>

int main()
{
	int sayi;      
	printf("Sayi giriniz ");
	scanf("%d",&sayi);
	
	void fonksiyon(int);
	fonksiyon(sayi);
	return 0;
}

void fonksiyon (int satir)
{
   for (int i=1; i<=satir; i++)
    {
         for (int j=1; j<=satir-i; j++) 
         printf(" ");
             
        for(int k=1; k<=i; k++)
               {  printf("%d",k);}
        for(int l=i-1; l>=1; l--)
                { printf("%d",l);}
                      
             printf("\n");
   }  

}
