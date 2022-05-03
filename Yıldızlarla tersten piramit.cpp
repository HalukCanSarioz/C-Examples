#include<stdio.h> 
int main() 
{ 
int i,j,a,k=0; 
	for(i=7;i>0;i-=2) 
{ 
		for(a=0;a<k;a++) 
{ 
			printf(" "); 
} 
		for(j=0;j<i;j++) 
{ 
			printf("*"); 
} 
	printf("\n");
	k += 1; 
} 
}
