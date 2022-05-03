#include <stdio.h>
#include <conio.h>

int main()
{
	int bolen(int);
	int sayi;
	printf("Lutfen bir tamsayi giriniz:");
	scanf("%d",&sayi);
	bolen(sayi);
	return 0;
}

int bolen(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d \n",i);
		}

	}
}

