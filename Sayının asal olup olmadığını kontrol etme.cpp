#include <stdio.h>

int main()
{
	int a, b, c = 0;
	printf (" Bir sayi giriniz: ");
	scanf ("%d", &a);
	printf ("\n");
	for (b = 2; b < a; b ++)
	{
	    if (a % b == 0) c ++;
	}	
	
	printf ( (c == 0) ? "Sayi asaldir." : "Sayi asal degildir.");	
	return 0;
}
