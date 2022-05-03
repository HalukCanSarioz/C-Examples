#include <iostream>
using namespace std;
int main()
{
	int satir,i,j=0,sayac=0,k=0,l=0;
	cout<<"Satir sayisi girin ";
	cin>>satir;
	for(i=1;i<=satir;i++)
	{
		for(j=1;j<=satir-i;j++)
		{
			cout<<" ";
		}
			for(k=1;k<=i;k++)
			{
				cout<<"*";
			}
					for(int l=i-1; l>=1; l--)
					{ 
					cout<<"*";
					}
			cout<<endl;	 
	}
	return 0;
}
