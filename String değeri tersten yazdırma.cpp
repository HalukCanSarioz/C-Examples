#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char birinci[10];
	printf("String giriniz \n");
	scanf("%s",&birinci);
	printf("tersi -> %s",strrev(birinci));
	return 0;
}
