#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

int AnaMenu();
int YeniKisi();
int KisiGoruntule();
int KisiGuncelle();

struct Bilgiler
{
	char Ad[50];
	char Soyad[50];
	char TC[15];
	char Cadde[100];
	char Sokak[100];
	char Apartman[100];
	char ApartmanNo[10];
	char DaireNo[10];
	char Anne[50];
	char Baba[50];
	char DogumYeri[100];
	char DogumTarihi[15];
	char MedeniHal[15];
	char Cinsiyet[10];
	char KizlikSoyadi[50];
	char KanGrubu[10];
	char Il[25];
	char Ilce[25];
	char Mahalle[50];
	char Koy[50];
	char CiltNo[10];
	char SiraNo[10];
	char AileSiraNo[10];
	char VerilisNedeni[50];
	char KayitNo[10];
	char NufusDairesi[100];
	char VerilisTarihi[15];
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("Muhtarlýk Otomasyonuna Hoþ Geldiniz !\n");
	AnaMenu();
}

int AnaMenu()
{
	int secim=0;
	printf("\n1 - Yeni Kiþi Ekle\n");
	printf("2 - Kiþi Görüntüle\n");
	printf("3 - Kiþi Güncelle\n");
	printf("4 - Çýkýþ\n");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:YeniKisi();AnaMenu();break;
		case 2:KisiGoruntule();AnaMenu();break;
		case 3:KisiGuncelle();AnaMenu();break;
		case 4:return 0;break;
		default:printf("Lütfen Listeden Seçim Yapýnýz !\n");break;
	}
}
int YeniKisi()
{
	FILE*Kisiler;
	struct Bilgiler Kisi;
	if((Kisiler=fopen("Bilgiler.txt","a+"))==NULL)
	{
		puts("Dosya açýlamýyor !!!\n");
		return 0;
	}
		printf("Kiþinin >>>\n");
		printf("Ad : ");	scanf("%s",&Kisi.Ad);
		printf("Soyad : ");	scanf("%s",&Kisi.Soyad);
		printf("TC : ");	scanf("%s",&Kisi.TC);
		printf("Cadde : ");	scanf("%s",&Kisi.Cadde);
		printf("Sokak : ");	scanf("%s",&Kisi.Sokak);
		printf("Apartman : ");	scanf("%s",&Kisi.Apartman);
		printf("Apt. No : ");	scanf("%s",&Kisi.ApartmanNo);
		printf("Daire No : ");	scanf("%s",&Kisi.DaireNo);
		printf("Anne Adý : ");	scanf("%s",&Kisi.Anne);
		printf("Baba Adý : ");	scanf("%s",&Kisi.Baba);
		printf("Doðum Yeri : ");	scanf("%s",&Kisi.DogumYeri);
		printf("Doðum Tarihi : ");	scanf("%s",&Kisi.DogumTarihi);
		printf("Medeni Hali : ");	scanf("%s",&Kisi.MedeniHal);
		printf("Cinsiyet : ");	scanf("%s",&Kisi.Cinsiyet);
		printf("Kýzlýk Soyadý : ");	scanf("%s",&Kisi.KizlikSoyadi);
		printf("Kan Grubu : ");	scanf("%s",&Kisi.KanGrubu);
		printf("Ýl : ");	scanf("%s",&Kisi.Il);
		printf("Ýlçe : ");	scanf("%s",&Kisi.Ilce);
		printf("Mahalle : ");	scanf("%s",&Kisi.Mahalle);
		printf("Köy : ");	scanf("%s",&Kisi.Koy);
		printf("Cilt No : ");	scanf("%s",&Kisi.CiltNo);
		printf("Sýra No : ");	scanf("%s",&Kisi.SiraNo);
		printf("Aile Sýra No : ");	scanf("%s",&Kisi.AileSiraNo);
		printf("Veriliþ Nedeni : ");	scanf("%s",&Kisi.VerilisNedeni);
		printf("Kayýt No : ");	scanf("%s",&Kisi.KayitNo);
		printf("Nufus Dairesi : ");	scanf("%s",&Kisi.NufusDairesi);
		printf("Veriliþ Tarihi : ");	scanf("%s",&Kisi.VerilisTarihi);
		fprintf(Kisiler,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",Kisi.Ad,Kisi.Soyad,Kisi.TC,Kisi.Cadde,Kisi.Sokak,Kisi.Apartman,Kisi.ApartmanNo,Kisi.DaireNo,Kisi.Anne,Kisi.Baba,Kisi.DogumYeri,Kisi.DogumTarihi,Kisi.MedeniHal,Kisi.Cinsiyet,Kisi.KizlikSoyadi,Kisi.KanGrubu,Kisi.Il,Kisi.Ilce,Kisi.MedeniHal,Kisi.Koy,Kisi.CiltNo,Kisi.SiraNo,Kisi.AileSiraNo,Kisi.VerilisNedeni,Kisi.KayitNo,Kisi.NufusDairesi,Kisi.VerilisTarihi);
		fclose(Kisiler);	
}
int KisiGoruntule()
{
	char AraTC[15];
	printf("TC : ");
	scanf("%s",&AraTC);
    FILE *Kisiler;
    struct Bilgiler Ara;
    if((Kisiler = fopen("Bilgiler.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
    while(!feof(Kisiler))
      {
		fscanf(Kisiler, "%s",&Ara.Ad);
		fscanf(Kisiler, "%s",&Ara.Soyad);
		fscanf(Kisiler, "%s",&Ara.TC);
		fscanf(Kisiler, "%s",&Ara.Cadde);
		fscanf(Kisiler, "%s",&Ara.Sokak);
		fscanf(Kisiler, "%s",&Ara.Apartman);
		fscanf(Kisiler, "%s",&Ara.ApartmanNo);
		fscanf(Kisiler, "%s",&Ara.DaireNo);
		fscanf(Kisiler, "%s",&Ara.Anne);
		fscanf(Kisiler, "%s",&Ara.Baba);
		fscanf(Kisiler, "%s",&Ara.DogumYeri);
		fscanf(Kisiler, "%s",&Ara.DogumTarihi);
		fscanf(Kisiler, "%s",&Ara.MedeniHal);
		fscanf(Kisiler, "%s",&Ara.Cinsiyet);
		fscanf(Kisiler, "%s",&Ara.KizlikSoyadi);
		fscanf(Kisiler, "%s",&Ara.KanGrubu);
		fscanf(Kisiler, "%s",&Ara.Il);
		fscanf(Kisiler, "%s",&Ara.Ilce);
		fscanf(Kisiler, "%s",&Ara.Mahalle);
		fscanf(Kisiler, "%s",&Ara.Koy);
		fscanf(Kisiler, "%s",&Ara.CiltNo);
		fscanf(Kisiler, "%s",&Ara.SiraNo);
		fscanf(Kisiler, "%s",&Ara.AileSiraNo);
		fscanf(Kisiler, "%s",&Ara.VerilisNedeni);
		fscanf(Kisiler, "%s",&Ara.KayitNo);
		fscanf(Kisiler, "%s",&Ara.NufusDairesi);
		fscanf(Kisiler, "%s\n",&Ara.VerilisTarihi);
		if(!strcmp(AraTC,Ara.TC))
  		{
	  		printf("\n----------------------------------\n");
	   		printf("Ad :  %s\n",Ara.Ad);
			printf("Soyad :  %s\n",Ara.Soyad);
			printf("TC :  %s\n",Ara.TC);
			printf("Cadde :  %s\n",Ara.Cadde);
			printf("Sokak :  %s\n",Ara.Sokak);
			printf("Apartman :  %s\n",Ara.Apartman);
			printf("Apt. No :  %s\n",Ara.ApartmanNo);
			printf("Daire No :  %s\n",Ara.DaireNo);
			printf("Anne Adý :  %s\n",Ara.Anne);
			printf("Baba Adý :  %s\n",Ara.Baba);
			printf("Doðum Yeri :  %s\n",Ara.DogumYeri);
			printf("Doðum Tarihi :  %s\n",Ara.DogumTarihi);
			printf("Medeni Hali :  %s\n",Ara.MedeniHal);
			printf("Cinsiyet :  %s\n",Ara.Cinsiyet);
			printf("Kýzlýk Soyadý :  %s\n",Ara.KizlikSoyadi);
			printf("Kan Grubu :  %s\n",Ara.KanGrubu);
			printf("Ýl :  %s\n",Ara.Il);
			printf("Ýlçe :  %s\n",Ara.Ilce);
			printf("Mahalle :  %s\n",Ara.Mahalle);
			printf("Köy :  %s\n",Ara.Koy);
			printf("Cilt No :  %s\n",Ara.CiltNo);
			printf("Sýra No :  %s\n",Ara.SiraNo);
			printf("Aile Sýra No :  %s\n",Ara.AileSiraNo);
			printf("Veriliþ Nedeni :  %s\n",Ara.VerilisNedeni);
			printf("Kayýt No :  %s\n",Ara.KayitNo);
			printf("Nufus Dairesi :  %s\n",Ara.NufusDairesi);
			printf("Veriliþ Tarihi :  %s\n",Ara.VerilisTarihi);
   			printf("\n----------------------------------\n");
  		}
      }
    fclose(Kisiler);
}
int KisiGuncelle()
{
	FILE *Kisiler;
	FILE *Temp;
    struct Bilgiler Guncelle;
    char TC[15],pass;
	printf("\nTC No : ");
	scanf("%s",&TC);
	
	if((Kisiler = fopen("Bilgiler.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý ! \n");
	return 0; 
	}
	
	if((Temp = fopen("Temp.txt","w"))==NULL)
	{
	printf("Dosya açýlamadý ! \n");
	return 0; 
	}
	do
	{
		fscanf(Kisiler, "%s",&Guncelle.Ad);
		fscanf(Kisiler, "%s",&Guncelle.Soyad);
		fscanf(Kisiler, "%s",&Guncelle.TC);
		fscanf(Kisiler, "%s",&Guncelle.Cadde);
		fscanf(Kisiler, "%s",&Guncelle.Sokak);
		fscanf(Kisiler, "%s",&Guncelle.Apartman);
		fscanf(Kisiler, "%s",&Guncelle.ApartmanNo);
		fscanf(Kisiler, "%s",&Guncelle.DaireNo);
		fscanf(Kisiler, "%s",&Guncelle.Anne);
		fscanf(Kisiler, "%s",&Guncelle.Baba);
		fscanf(Kisiler, "%s",&Guncelle.DogumYeri);
		fscanf(Kisiler, "%s",&Guncelle.DogumTarihi);
		fscanf(Kisiler, "%s",&Guncelle.MedeniHal);
		fscanf(Kisiler, "%s",&Guncelle.Cinsiyet);
		fscanf(Kisiler, "%s",&Guncelle.KizlikSoyadi);
		fscanf(Kisiler, "%s",&Guncelle.KanGrubu);
		fscanf(Kisiler, "%s",&Guncelle.Il);
		fscanf(Kisiler, "%s",&Guncelle.Ilce);
		fscanf(Kisiler, "%s",&Guncelle.Mahalle);
		fscanf(Kisiler, "%s",&Guncelle.Koy);
		fscanf(Kisiler, "%s",&Guncelle.CiltNo);
		fscanf(Kisiler, "%s",&Guncelle.SiraNo);
		fscanf(Kisiler, "%s",&Guncelle.AileSiraNo);
		fscanf(Kisiler, "%s",&Guncelle.VerilisNedeni);
		fscanf(Kisiler, "%s",&Guncelle.KayitNo);
		fscanf(Kisiler, "%s",&Guncelle.NufusDairesi);
		fscanf(Kisiler, "%s\n",&Guncelle.VerilisTarihi);
		if(!strcmp(TC,Guncelle.TC))
		{
			printf("\n----------------------------------\n");
			printf("Ad :  %s\n",Guncelle.Ad);
			printf("Soyad :  %s\n",Guncelle.Soyad);
			printf("TC :  %s\n",Guncelle.TC);
			printf("Cadde :  %s\n",Guncelle.Cadde);
			printf("Sokak :  %s\n",Guncelle.Sokak);
			printf("Apartman :  %s\n",Guncelle.Apartman);
			printf("Apt. No :  %s\n",Guncelle.ApartmanNo);
			printf("Daire No :  %s\n",Guncelle.DaireNo);
			printf("Anne Adý :  %s\n",Guncelle.Anne);
			printf("Baba Adý :  %s\n",Guncelle.Baba);
			printf("Doðum Yeri :  %s\n",Guncelle.DogumYeri);
			printf("Doðum Tarihi :  %s\n",Guncelle.DogumTarihi);
			printf("Medeni Hali :  %s\n",Guncelle.MedeniHal);
			printf("Cinsiyet :  %s\n",Guncelle.Cinsiyet);
			printf("Kýzlýk Soyadý :  %s\n",Guncelle.KizlikSoyadi);
			printf("Kan Grubu :  %s\n",Guncelle.KanGrubu);
			printf("Ýl :  %s\n",Guncelle.Il);
			printf("Ýlçe :  %s\n",Guncelle.Ilce);
			printf("Mahalle :  %s\n",Guncelle.Mahalle);
			printf("Köy :  %s\n",Guncelle.Koy);
			printf("Cilt No :  %s\n",Guncelle.CiltNo);
			printf("Sýra No :  %s\n",Guncelle.SiraNo);
			printf("Aile Sýra No :  %s\n",Guncelle.AileSiraNo);
			printf("Veriliþ Nedeni :  %s\n",Guncelle.VerilisNedeni);
			printf("Kayýt No :  %s\n",Guncelle.KayitNo);
			printf("Nufus Dairesi :  %s\n",Guncelle.NufusDairesi);
			printf("Veriliþ Tarihi :  %s\n",Guncelle.VerilisTarihi);
			
			printf(" \n\n------ Kaydý düzeltme ------------------------");
		
			printf("\nAd : ");	scanf("%s",&Guncelle.Ad);
			printf("Soyad : ");	scanf("%s",&Guncelle.Soyad);
			printf("TC : ");	scanf("%s",&Guncelle.TC);
			printf("Cadde : ");	scanf("%s",&Guncelle.Cadde);
			printf("Sokak : ");	scanf("%s",&Guncelle.Sokak);
			printf("Apartman : ");	scanf("%s",&Guncelle.Apartman);
			printf("Apt. No : ");	scanf("%s",&Guncelle.ApartmanNo);
			printf("Daire No : ");	scanf("%s",&Guncelle.DaireNo);
			printf("Anne Adý : ");	scanf("%s",&Guncelle.Anne);
			printf("Baba Adý : ");	scanf("%s",&Guncelle.Baba);
			printf("Doðum Yeri : ");	scanf("%s",&Guncelle.DogumYeri);
			printf("Doðum Tarihi : ");	scanf("%s",&Guncelle.DogumTarihi);
			printf("Medeni Hali : ");	scanf("%s",&Guncelle.MedeniHal);
			printf("Cinsiyet : ");	scanf("%s",&Guncelle.Cinsiyet);
			printf("Kýzlýk Soyadý : ");	scanf("%s",&Guncelle.KizlikSoyadi);
			printf("Kan Grubu : ");	scanf("%s",&Guncelle.KanGrubu);
			printf("Ýl : ");	scanf("%s",&Guncelle.Il);
			printf("Ýlçe : ");	scanf("%s",&Guncelle.Ilce);
			printf("Mahalle : ");	scanf("%s",&Guncelle.Mahalle);
			printf("Köy : ");	scanf("%s",&Guncelle.Koy);
			printf("Cilt No : ");	scanf("%s",&Guncelle.CiltNo);
			printf("Sýra No : ");	scanf("%s",&Guncelle.SiraNo);
			printf("Aile Sýra No : ");	scanf("%s",&Guncelle.AileSiraNo);
			printf("Veriliþ Nedeni : ");	scanf("%s",&Guncelle.VerilisNedeni);
			printf("Kayýt No : ");	scanf("%s",&Guncelle.KayitNo);
			printf("Nufus Dairesi : ");	scanf("%s",&Guncelle.NufusDairesi);
			printf("Veriliþ Tarihi : ");	scanf("%s",&Guncelle.VerilisTarihi);
	
			printf("\n----------------------------------\n");
			printf( "\nYapýlan deðiþiklikleri kaydetmek istiyormusunuz (y) yes (n) no : ");scanf("%s",&pass);
			if( pass=='y' || pass=='Y')
			{
		 		fprintf(Temp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",Guncelle.Ad,Guncelle.Soyad,Guncelle.TC,Guncelle.Cadde,Guncelle.Sokak,Guncelle.Apartman,Guncelle.ApartmanNo,Guncelle.DaireNo,Guncelle.Anne,Guncelle.Baba,Guncelle.DogumYeri,Guncelle.DogumTarihi,Guncelle.MedeniHal,Guncelle.Cinsiyet,Guncelle.KizlikSoyadi,Guncelle.KanGrubu,Guncelle.Il,Guncelle.Ilce,Guncelle.MedeniHal,Guncelle.Koy,Guncelle.CiltNo,Guncelle.SiraNo,Guncelle.AileSiraNo,Guncelle.VerilisNedeni,Guncelle.KayitNo,Guncelle.NufusDairesi,Guncelle.VerilisTarihi);
			}
			else
			{
				fclose(Temp);
				remove("Temp.txt");
				return 0;
			}
		}
		else
		{
			fprintf(Temp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s\n",Guncelle.Ad,Guncelle.Soyad,Guncelle.TC,Guncelle.Cadde,Guncelle.Sokak,Guncelle.Apartman,Guncelle.ApartmanNo,Guncelle.DaireNo,Guncelle.Anne,Guncelle.Baba,Guncelle.DogumYeri,Guncelle.DogumTarihi,Guncelle.MedeniHal,Guncelle.Cinsiyet,Guncelle.KizlikSoyadi,Guncelle.KanGrubu,Guncelle.Il,Guncelle.Ilce,Guncelle.MedeniHal,Guncelle.Koy,Guncelle.CiltNo,Guncelle.SiraNo,Guncelle.AileSiraNo,Guncelle.VerilisNedeni,Guncelle.KayitNo,Guncelle.NufusDairesi,Guncelle.VerilisTarihi);
		}
	}while(!feof(Kisiler));
	fclose(Kisiler);
	fclose(Temp);
	remove("Bilgiler.txt");
	rename("Temp.txt", "Bilgiler.txt");
	return 1;
}
