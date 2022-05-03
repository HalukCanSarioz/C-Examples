#include <stdio.h>
#include <conio.h>
void kontrol(int *,int *,int *,int *);
int main()
{
	int girilen,s1,s2,ebob=1,ekok;
	printf("1. sayiyi giriniz  ");
	scanf("%d",&s1);
	printf("2. sayiyi giriniz  ");
	scanf("%d",&s2);
	kontrol(&s1,&s2,&ebob,&ekok);
	printf("ebob = %d\n",ebob);
	printf("ekok = %d\n",ekok);
	return 0;
}
void kontrol(int *s1,int *s2,int *ebob,int *ekok)
{
	int kucuk,i,sayi1,sayi2;
	sayi1=*s1;
	sayi2=*s2;
	if(*s1<=*s2)
	{
		kucuk=*s1;
	}
	if(*s1>*s2)
	{
		kucuk=*s2;
	}
	for(i=2;i<=kucuk;i++)
	{
		if(*s1%i==0 && *s2%i==0)
		{
			*s1=*s1/i; 
			*s2=*s2/i;
			*ebob=*ebob*i;
		}
		*ekok=(sayi1)*(sayi2)/(*ebob);
	}
		

}
