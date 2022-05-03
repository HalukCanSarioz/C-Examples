//Doða Barýþ ÖZDEMÝR 130202010
#include <iostream>

using namespace std;

main()

{
	char a='/';
	int pay,payda,i,ebob;
	int bolen=2;
	cout<<"144/864 gibi kesirli bir sayi giriniz :";
	cin>>pay>>a>>payda;
	if(pay<payda){
	for(i=1;i<=pay;i++)
	{
		if((pay%i==0)&&(payda%i==0))
		ebob=i;
	}
	}
	else{
	for(i=1;i<=payda;i++)
		{
		if((pay%i==0)&&(payda%i==0))
		ebob=i;
		}
	}
	cout<<endl<<"Sadelesmis kesir ="<<pay/ebob<<a<<payda/ebob;
}
