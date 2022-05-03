#include <stdio.h>
 
int main()
{
    int sayi1,sayi2;
    int ekok;
    
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    for(int i = (sayi1 * sayi2); i > 0; i--)
    {
        if(i % sayi1 == 0 && i % sayi2 == 0){ 
            ekok = i;
        }
    }
    printf("\nEKOK = %d",ekok);
    return 0;
}
