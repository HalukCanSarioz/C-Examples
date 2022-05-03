#include<stdio.h>
#include<conio.h>
void daire(int *,int *,int *);

int main()
{
	int r,c,a;
	printf("r gir:");
	scanf("%d",&r);
	daire(&r,&c,&a);
	printf("%d yaricapli cemberin cevresi=%d alani=%d dir",r,c,a);
	return 0;
}

void daire(int *r,float *c,float *a)
{
	*c=2*3**r;
	*a=3**r**r;
}
