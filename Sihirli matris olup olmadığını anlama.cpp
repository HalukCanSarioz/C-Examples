#include<stdio.h>
#include<conio.h>
int ferro(int dizi[3][3])
{
            int z,i,j,k,l,satir1=0,satir2=0,satir3=0,sutun1=0,sutun2=0,sutun3=0,sag=0,sol=0,ilk,son;
            for(j=0;j<3;j++)
            {
				satir1=satir1+dizi[0][j];
				satir2=satir2+dizi[1][j];
				satir3=satir3+dizi[2][j];			
				sutun1=sutun1+dizi[j][0];
				sutun2=sutun2+dizi[j][1];
				sutun3=sutun3+dizi[j][2];
            }
            if(satir1==satir2)
			{
	            if(satir1==satir3)
	            if(sutun1==sutun2)
	            if(sutun2==sutun3)
	            if(satir1==sutun1)
            	{
					ilk=1;
				}
			}
		for(k=0;k<3;k++)
        {
        for(l=0;l<3;l++)
        { 
            if(k+l==2)
            {sag=sag+dizi[k][l];}
            if(k==l)
            {
				sol=sol+dizi[k][l];
			}
        }
        if(sag==sol)
        {
			son=1;
		}
    }    
	if(ilk==son)
    printf("Sihirli matristir");
    else
    printf("Sihirsiz matris");
    }
int main()
{
	int dizi[3][3];
	int i,j;
	    for(i=0;i<3;i++)
	    {
	    	for(j=0;j<3;j++)
	    {
	            printf("%d. satir %d. sutunu gir!",i+1,j+1);
	        	scanf("%d",&dizi[i][j]);
	    }
	    }
		ferro(dizi);
		return 0;
}


