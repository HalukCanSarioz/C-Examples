#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int k,i,a,b,c,j;
	for(i=1;i<=500;i++)
	{
		for(j=1;j<=500;j++)
		{
			for(k=1;k<=500;k++)
			{
				if(i>j && i>k)
				if(pow(i,2)==pow(j,2)+pow(k,2))
				printf("%d \t = \t %d \t %d\n",i,j,k);
			}
		}
	}
	return 0;
}
