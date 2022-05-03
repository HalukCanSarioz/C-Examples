#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int*,int);
int main()
{
    int *x;
    int i;
	printf("10 elamanli dinamik bir diziye rasgele eleman yerlestirilmesi\n");
	printf("ve bu 10 elamanli dinamik dizinin en buyuk elemaninin bulunmasi\n\n");
	printf("\nmaximum number is %d\n\n",max(x,i));
	return 0;
}
int max(int *a,int b) 
{
    a=malloc(10*sizeof(int));
    srand(time(NULL));
    for (b=0;b<10;b++)
    {
    *a = rand()%101;
    a++;
    }
    a-=10;
        for (b=0;b<10;b++)
    {
    printf("%p ----> %d\n",a,*a);
    a++;
    }
    a-=10;
    int max = 0;
        for(b=0;b<10;b++)
    {
    if (max < *a)
    max=*a;
    a++;
    }
    return max;
}
