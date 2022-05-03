#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int sayac=0,buyuk=0,rastgele[100],kucuk=1000,ksayac=0,bsayac=0,i;
    srand(static_cast<unsigned int>(time(0)));

    for(i=0;i<100;i++)
    {
    	rastgele[i]=(rand() % 1001);
    }
    for(i=0;i<100;i++)
    {
    	sayac=sayac+1;
    	
    	if(buyuk<rastgele[i])
    	{
    		buyuk=rastgele[i];
    		bsayac=sayac;
    	}
    }
    for(i=0;i<100;i++)
    {
    	sayac=sayac+1;
    	
    	if(kucuk>=rastgele[i])
    	{
    		kucuk=rastgele[i];
    		ksayac=sayac;
    	}
    }
	cout<<"En buyuk "<<buyuk<<" sayisi "<<bsayac<<".dir"<<endl;
	cout<<"En kucuk "<<kucuk<<" sayisi "<<ksayac<<".dir"<<endl;
}
