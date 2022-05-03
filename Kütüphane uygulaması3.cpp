#include<locale.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <cstdlib>
int main(void)
{
	baslangic:
    setlocale(LC_ALL, "Turkish");
    char ad[20],soyad[20],no[11],iletisim[50],kitap[20],alis[12],iade[12];// 3 tane char türünde dizi deðiþkenimi tanýmlýyoruz
        printf("1. yeni kayit ekle\n");
        printf("2. kayit ara\n");
        printf("3. cikis\n");
        printf("bir secim yapiniz\n");
        int secim;
        scanf("%d",&secim);
        
if(secim == 1){
    FILE *dosya; // deðiþkenimizi tanýmlýyoruz

    // no deðiþkenini numarayla herhangi bir aritmatik iþlem yapmayacaðým için char tanýmladým
    printf("AD: ");// Kullanýcýdan adýný istiyoruz
    scanf("%s",&ad); // %s kullanarak string bir ifadeyi okutuyoruz ve ad ddizi deðiþkenine atýyoruz
    printf("SOYAD: ");
    scanf("%s",&soyad);
    printf("NO: ");
    scanf("%s",&no);
    printf("ILETISIM: ");
    scanf("%s",&iletisim);
    printf("KITAP: ");
    scanf("%s",&kitap);
    printf("ALIS TARIHI: ");
    scanf("%s",&alis);
    printf("IADE TARIHI: ");
    scanf("%s",&iade);


    dosya = fopen("kayit.txt","a+"); // dosya deðiþkenimle kayit.txt adinda bir metin belgesi açtým
    // a+ dememin sebebi yazmaya satýrýn sonundan baþlamasý için
    fprintf(dosya,"%s %s %s %s %s %s %s\n",ad,soyad,no,iletisim,kitap,alis,iade); // kullanýcýdan aldýðým bilgileri txt ye yazdýrdým fprintf fonksiyonuyla
    fclose(dosya); // iþlem tamamlandýktan sonra dosyamý kapatýyorum
    // derlediðiniz zaman .exe'nin çalýþtýðý yerde txt'yi oluþturur.
}
  if(secim == 2){
    	FILE *dosya;
    	dosya = fopen("kayit.txt","r");
        char ARANAN[50];
        int sonuc[5];
		printf("ARANAN: ");
   	 	scanf("%s",ARANAN);
    while(!feof(dosya))// !feof dosyanýn sonun gelene kadar dön demek
    {
        fscanf(dosya,"%s %s %s %s %s %s %s",&ad,&soyad,&no,&iletisim,&kitap,&alis,&iade);// dongu ilk donuþunde birinci satýrý gösterecektir
	    if(strcmp(ARANAN,ad)==0){
        printf("-\n Adi: %s\n Soyadi: %s\n No: %s\n Ýletiþim: %s\n Kitap: %s\n Alýþ Tarihi: %s\n Ýade Tarihi: %s\n-\n",ad,soyad,no,iletisim,kitap,alis,iade); // okuduðu bilgiler ekrana formatlý bir þekilde yazdýracak
		}
    }
    // not: txt de kaç satýr varsa döngü o sayýda dönecektir
    fclose(dosya); // sonunda dosyamýzý kapatýyoruz
 }
	if(secim == 3)
	{
		 return 0;
	}
    goto baslangic;
}
