#include <stdio.h>
#include <conio.h>

int faktoriyel(int);

int main()
{
	int faktoriyel(int),toplam,a;

	printf("Faktoriyel alinacak sayiyi giriniz  ");
	scanf("%d",&a);
	toplam=faktoriyel(a);
	printf("%d",toplam);

}
int faktoriyel(int a)
{
    int toplam = 1, i;
    for(i = 1; i <= a; i++)
    {
        toplam = toplam * i;
    }
	return toplam;
}
	

