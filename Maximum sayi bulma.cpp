#include <stdio.h>
#include <conio.h>

int maksimum (int,int,int);
int main()
{
    int a,b,c;
    printf("3 tam sayi giriniz :");
    scanf("%d%d%d",&a,&b,&c);
    printf("Maksimum : %d dir.\n",maksimum(a,b,c));
    
    return 0;
    
}
int maksimum(int x,int y,int z)
{
	int maks =x;
	if(y>maks)
		maks = y ;
	if(z>maks)
		maks = z;
		
	return maks;
}
