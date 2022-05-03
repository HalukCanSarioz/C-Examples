#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<windows.h>

	void KayitMenu();
	int AnaMenu();
	void OlayAraMenu();
	void OgrenciIslemMenu();
	void KitapIslemMenu();
	int KayitAra();
	int OgrenciSorgula();
	int KitapSorgula();
	int YeniOlay();
	int YeniOgrenci();
	int YeniKitap();
	int KitapArttir(char *);
	int KitapVer(char *,char *,char *);
	int KitapAl(char *);
	int OlayOgrAra();
	int OlayKtpAra();
	int OlayTarihAra();
	int OgrNoSorgula();
	int OgrIsimSorgula();
	int OgrNoGuncelle();
	int KtpNoSorgula();
	int KtpIsimSorgula();
	int KtpNoGuncelle();
	char * Turkce(char [100]);
	char * replace(char [100]);

	
struct Ogrenci 
{  
   char No[12]; 
   char Ad[20]; 
   char Soyad[20]; 
   char TC[12]; 
   char Telefon[12];
   char Mail[50];
   char KayitTarih[12];
   int KitapSayisi[5];
};

struct Kitap
{
	char No[12];
	char Isim[100];
	char Yazar[100];
	char Basim[12];
	char Raf[12];
	char KayitTarih[12];
	char SonAlinma[12];
	char SonAlan[12];
	char Durum[2];
};

struct Olay
{
	char OgrenciNo[12];
	char KitapNo[12];
	char Tarih[12];
	char Olay[2];
};

char * replace(char *str)
{
	int i;
	for(i=0;str[i]; i++)
	{
		if(str[i] == '_')
		{
			str[i] = ' ';
		}
	}
	return str;
}

char * Turkce(char *str)
{
	for(int i=0;str[i];i++)
	{
		int tamsayi = int(str[i]);
		switch(tamsayi)
		{
			case ' ': str[i]='_';break;
			case -121: str[i]='c';break;
			case -115: str[i]='i';break;
			case -127: str[i]='u';break;
			case -89: str[i]='g';break;
			case -108: str[i]='o';break;
			case -97: str[i]='s';break;
			case -128: str[i]='C';break;
			case -104: str[i]='I';break;
			case -90: str[i]='G';break;
			case -102: str[i]='U';break;
			case -103: str[i]='O';break;
			case -98: str[i]='S';break;
			default:break;
		}

	}
	return str;
}

int AnaMenu()
{
int secim=0;
printf("\n-----------------------------\n");
printf("|   1 - Yeni Kayýt          |\n");
printf("|   2 - Olay Ara            |\n");
printf("|   3 - Öðrenci Ýþlem       |\n");
printf("|   4 - Kitap Ýþlem         |\n");
printf("|   5 - Çýkýþ               |\n");
printf("|   6 - Ekraný Temizle      |\n");
printf("-----------------------------\n");
printf("Seçiminiz : ");
scanf("%d",&secim);

	switch(secim)
	{
		case 1:KayitMenu();break;
		case 2:OlayAraMenu();break;
		case 3:OgrenciIslemMenu();break;
		case 4:KitapIslemMenu();break;
		case 5:return 0;break;
		case 6:system("cls");AnaMenu();break;
		default:printf("\nHatalý seçim yaptýnýz !\nLütfen yapmak istediðimiz iþlemin baþýndaki numarayý giriniz...\n");AnaMenu();break;
	} 
}

void KayitMenu()
{
int secim=0;
printf("\n---------------------------------\n");
printf("|   1 - Olay Kaydet             |\n");
printf("|   2 - Yeni Öðrenci Kaydet     |\n");
printf("|   3 - Yeni Kitap Kaydet       |\n");
printf("|   4 - Geri                    |\n");
printf("---------------------------------\n");
printf("Seçiminiz : "); 
scanf("%d",&secim);

	switch(secim)
	{
		case 1:if(YeniOlay()){ printf("\nOlay Eklendi.\n");AnaMenu();}else{ printf("\nHATA: Olay Eklenemedi!");AnaMenu();} break;
		case 2:if(YeniOgrenci()){printf("\nÖðrenci Eklendi.\n");AnaMenu();}else{printf("\nHATA: Öðrenci Eklenemedi!");AnaMenu();}break;
		case 3:if(YeniKitap()){ printf("\nKitap Eklendi.\n");AnaMenu();}else{ printf("\nHATA: Kitap Eklenemedi!");AnaMenu();} break;
		case 4:AnaMenu();break;
		default:printf("\nHatalý seçim yaptýnýz !\nLütfen yapmak istediðimiz iþlemin baþýndaki numarayý giriniz...\n");AnaMenu();break;
	} 
}

void OlayAraMenu()
{
int secim=0;
printf("\n-----------------------------------------\n");
printf("|   1 - Öðrenci Numarasýna Göre Ara     |\n");
printf("|   2 - Kitap Numarasýna Göre Ara       |\n");
printf("|   3 - Tarihe Göre Ara                 |\n");
printf("|   4 - Geri                            |\n");
printf("-----------------------------------------\n");
printf("Seçiminiz : "); 
scanf("%d",&secim);
	switch(secim)
	{
		case 1:if(OlayOgrAra()){ printf("\n\n");AnaMenu();}else{ printf("\nHATA: Sonuç Bulunamadý!\n");AnaMenu();} break;
		case 2:if(OlayKtpAra()){printf("\n\n");AnaMenu();}else{printf("\nHATA: Sonuç Bulunamadý!\n");AnaMenu();}break;
		case 3:if(OlayTarihAra()){printf("\n\n");AnaMenu();}else{ printf("\nHATA: Sonuç Bulunamadý!\n");AnaMenu();} break;
		case 4:AnaMenu();break;
		default:printf("\nHatalý seçim yaptýnýz !\nLütfen yapmak istediðimiz iþlemin baþýndaki numarayý giriniz...\n");AnaMenu();break;
	} 		
}

void OgrenciIslemMenu()
{
int secim=0;
printf("\n---------------------------------\n");
printf("|   1 - Numaradan Sorgula       |\n");
printf("|   2 - Ýsimden Sorgula         |\n");
printf("|   3 - Numaradan Güncelle      |\n");
printf("|   4 - Geri                    |\n");
printf("---------------------------------\n");
printf("Seçiminiz : "); 
scanf("%d",&secim);

	switch(secim)
	{
		case 1:if(OgrNoSorgula()){ printf("\n");AnaMenu();}else{ printf("\nHATA: Sorgulanamadý !\n");AnaMenu();} break;
		case 2:if(OgrIsimSorgula()){ printf("\n");AnaMenu();}else{ printf("\nHATA: Sorgulanamadý !\n");AnaMenu();} break;
		case 3:if(OgrNoGuncelle()){ printf("Güncellendi !\n");AnaMenu();}else{ printf("\nHATA: Güncellenemedi !\n");AnaMenu();} break;
		case 4:AnaMenu();break;
		default:printf("\nHatalý seçim yaptýnýz !\nLütfen yapmak istediðimiz iþlemin baþýndaki numarayý giriniz...\n");AnaMenu();break;
	} 
}

void KitapIslemMenu()
{
int secim=0;
printf("\n---------------------------------\n");
printf("|   1 - Numaradan Sorgula       |\n");
printf("|   2 - Ýsimden Sorgula         |\n");
printf("|   3 - Numaradan Güncelle      |\n");
printf("|   4 - Geri                    |\n");
printf("---------------------------------\n");
printf("Seçiminiz : "); 
scanf("%d",&secim);

	switch(secim)
	{
		case 1:if(KtpNoSorgula()){ printf("\n");AnaMenu();}else{ printf("\nHATA: Sorgulanamadý !\n");AnaMenu();} break;
		case 2:if(KtpIsimSorgula()){ printf("\n");AnaMenu();}else{ printf("\nHATA: Sorgulanamadý !\n");AnaMenu();} break;
		case 3:if(KtpNoGuncelle()){ printf("Güncellendi !\n");AnaMenu();}else{ printf("\nHATA: Güncellenemedi !\n");AnaMenu();} break;
		case 4:AnaMenu();break;
		default:printf("\nHatalý seçim yaptýnýz !\nLütfen yapmak istediðimiz iþlemin baþýndaki numarayý giriniz...\n");AnaMenu();break;
	} 
}

int KtpNoGuncelle()
{
	FILE *Kitaplar;
	FILE *Temp;
    struct Kitap KtpNoGun;
    char KtpNo[15],pass;
	printf("\nKitap No : ");
	scanf("%s",&KtpNo);
	
	if((Kitaplar = fopen("Kitaplar.txt","r"))==NULL)
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
		fscanf(Kitaplar,"%s %s %s %s %s %s %s %s %s\n",&KtpNoGun.No,&KtpNoGun.Isim,&KtpNoGun.Yazar,&KtpNoGun.Basim,&KtpNoGun.Raf,&KtpNoGun.KayitTarih,&KtpNoGun.SonAlinma,&KtpNoGun.SonAlan,&KtpNoGun.Durum);
		if(!strcmp(KtpNo,KtpNoGun.No))
		{
			printf("\n----------------------------------\n");
			printf( "\n Kitap No : %s",KtpNoGun.No);
			printf( "\n Ýsim : %s",replace(KtpNoGun.Isim));
			printf( "\n Yazar : %s",replace(KtpNoGun.Isim));
			printf( "\n Basim : %s",KtpNoGun.Basim);
			printf( "\n Raf : %s",KtpNoGun.Raf);
			printf( "\n Kayit Tarihi : %s",KtpNoGun.KayitTarih);
			printf( "\n Son Alýnma Tarihi : %s",KtpNoGun.SonAlinma);
			printf( "\n Son Alan : %s",KtpNoGun.SonAlan);
			printf( "\n Durum : %s",KtpNoGun.Durum);
			
			printf(" \n\n------ Kaydý düzeltme ------------------------");
		
			printf( "\n Kitap No : ");scanf("%s",&KtpNoGun.No);
			printf( "\n Ýsim : ");scanf("%s",&KtpNoGun.Isim);
			printf( "\n Yazar : ");scanf("%s",&KtpNoGun.Yazar);
			printf( "\n Basim : ");scanf("%s",&KtpNoGun.Basim);
			printf( "\n Raf : ");scanf("%s",&KtpNoGun.Raf);
			printf( "\n Kayit Tarihi : ");scanf("%s",&KtpNoGun.KayitTarih);
			printf( "\n Son Alýnma Tarihi : ");scanf("%s",&KtpNoGun.SonAlinma);
			printf( "\n Son Alan : ");scanf("%s",&KtpNoGun.SonAlan);
			printf( "\n Durum : ");scanf("%s",&KtpNoGun.Durum);
			printf("\n----------------------------------\n");
			printf( "\nYapýlan deðiþiklikleri kaydetmek istiyormusunuz (y) yes (n) no : ");scanf("%s",&pass);
			if( pass=='y' || pass=='Y')
			{
		 		fprintf(Temp, "%s %s %s %s %s %s %s %s %s\n", KtpNoGun.No,Turkce(KtpNoGun.Isim),Turkce(KtpNoGun.Yazar),KtpNoGun.Basim,KtpNoGun.Raf,KtpNoGun.KayitTarih,KtpNoGun.SonAlinma,KtpNoGun.SonAlan,KtpNoGun.Durum);
			}
			else
			{
				fclose(Kitaplar);
				fclose(Temp);
				remove("Temp.txt");
				return 0;
			}
		}
		else
		{
			fprintf(Temp, "%s %s %s %s %s %s %s %s %s\n", KtpNoGun.No,Turkce(KtpNoGun.Isim),Turkce(KtpNoGun.Yazar),KtpNoGun.Basim,KtpNoGun.Raf,KtpNoGun.KayitTarih,KtpNoGun.SonAlinma,KtpNoGun.SonAlan,KtpNoGun.Durum);
		}
	}while(!feof(Kitaplar));
	fclose(Kitaplar);
	fclose(Temp);
	remove("Kitaplar.txt");
	rename("Temp.txt", "Kitaplar.txt");
	return 1;

}

int KtpNoSorgula()
{
	char AraNo[15];
	printf("Kitap No : ");
	scanf("%s",&AraNo);
    FILE *Kitaplar;
    struct Kitap KtpNoSor;
    if((Kitaplar = fopen("Kitaplar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
    	
    while(!feof(Kitaplar))
      {
		fscanf(Kitaplar, "%s",&KtpNoSor.No);
		fscanf(Kitaplar, "%s",&KtpNoSor.Isim);
		fscanf(Kitaplar, "%s",&KtpNoSor.Yazar);
		fscanf(Kitaplar, "%s",&KtpNoSor.Basim);
		fscanf(Kitaplar, "%s",&KtpNoSor.Raf);
		fscanf(Kitaplar, "%s",&KtpNoSor.KayitTarih);
		fscanf(Kitaplar, "%s",&KtpNoSor.SonAlinma);
		fscanf(Kitaplar, "%s",&KtpNoSor.SonAlan);
		fscanf(Kitaplar, "%s\n",&KtpNoSor.Durum);
    	
		if(!strcmp(AraNo,KtpNoSor.No))
  		{
  			printf("\n----------------------------------\n");
   			printf("Kitap No : %s\n\n", KtpNoSor.No);
   			printf("Isim : %s\n\n",replace(KtpNoSor.Isim));
   			printf("Yazar : %s\n\n",replace(KtpNoSor.Yazar));
   			printf("Basim : %s\n\n", KtpNoSor.Basim);
   			printf("Raf : %s\n\n", KtpNoSor.Raf);
   			printf("Kayýt Tarihi : %s\n\n", KtpNoSor.KayitTarih);
   			printf("Son Alýnma Tarihi: %s\n\n", KtpNoSor.SonAlinma);
   			printf("Son Alan : %d\n\n", KtpNoSor.SonAlan);
   			printf("Durum : %d\n\n", KtpNoSor.Durum);
   			printf("\n----------------------------------\n");
  		}
      }
    fclose(Kitaplar);
    return 1;
}

int KtpIsimSorgula()
{
	char AraIsim[30];
	printf("Kitap Ýsmi : ");
	fflush(stdin);
	gets(AraIsim);
    FILE *Kitaplar;
    struct Kitap KtpIsimSor;
    if((Kitaplar = fopen("Kitaplar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
    	
    while(!feof(Kitaplar))
      {
		fscanf(Kitaplar, "%s",&KtpIsimSor.No);
		fscanf(Kitaplar, "%s",&KtpIsimSor.Isim);
		fscanf(Kitaplar, "%s",&KtpIsimSor.Yazar);
		fscanf(Kitaplar, "%s",&KtpIsimSor.Basim);
		fscanf(Kitaplar, "%s",&KtpIsimSor.Raf);
		fscanf(Kitaplar, "%s",&KtpIsimSor.KayitTarih);
		fscanf(Kitaplar, "%s",&KtpIsimSor.SonAlinma);
		fscanf(Kitaplar, "%s",&KtpIsimSor.SonAlan);
		fscanf(Kitaplar, "%s\n",&KtpIsimSor.Durum);
    	
		if(!strcmp(Turkce(AraIsim),KtpIsimSor.Isim))
  		{
  			printf("\n----------------------------------\n");
   			printf("Kitap No : %s\n\n", KtpIsimSor.No);
   			printf("Isim : %s\n\n",replace(KtpIsimSor.Isim));
   			printf("Yazar : %s\n\n",replace(KtpIsimSor.Yazar));
   			printf("Basim : %s\n\n", KtpIsimSor.Basim);
   			printf("Raf : %s\n\n", KtpIsimSor.Raf);
   			printf("Kayýt Tarihi : %s\n\n", KtpIsimSor.KayitTarih);
   			printf("Son Alýnma Tarihi: %s\n\n", KtpIsimSor.SonAlinma);
   			printf("Son Alan : %d\n\n", KtpIsimSor.SonAlan);
   			printf("Durum : %d\n\n", KtpIsimSor.Durum);
   			printf("\n----------------------------------\n");
  		}
      }
    fclose(Kitaplar);
    return 1;
}

int OgrNoGuncelle()
{
	FILE *Ogrenciler;
	FILE *Temp;
    struct Ogrenci NoGun;
    char OgrNo[15],pass;
	printf("\nÖðrenci No : ");
	scanf("%s",&OgrNo);
	
	if((Ogrenciler = fopen("Ogrenciler.txt","r"))==NULL)
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
		fscanf(Ogrenciler,"%s %s %s %s %s %s %s %d\n",&NoGun.No,&NoGun.Ad,&NoGun.Soyad,&NoGun.TC,&NoGun.Telefon,&NoGun.Mail,&NoGun.KayitTarih,&NoGun.KitapSayisi);
		if(!strcmp(OgrNo,NoGun.No))
		{
			printf("\n----------------------------------\n");
			printf( "\n Öðrenci No : %s",NoGun.No);
			printf( "\n Ad : %s",replace(NoGun.Ad));
			printf( "\n Soyad : %s",replace(NoGun.Soyad));
			printf( "\n TC : %s",NoGun.TC);
			printf( "\n Telefon : %s",NoGun.Telefon);
			printf( "\n E-Mail : %s",NoGun.Mail);
			printf( "\n Kayýt Tarihi : %s",NoGun.KayitTarih);
			printf( "\n Kitap Sayýsý : %d",NoGun.KitapSayisi);
			
			printf(" \n\n------ Kaydý düzeltme ------------------------");
		
			printf( "\n Öðrenci No : ");scanf("%s",&NoGun.No);
			printf( "\n Ad : ");scanf("%s",&NoGun.Ad);
			printf( "\n Soyad : ");scanf("%s",&NoGun.Soyad);
			printf( "\n TC : ");scanf("%s",&NoGun.TC);
			printf( "\n Telefon : ");scanf("%s",&NoGun.Telefon);
			printf( "\n E-Mail : ");scanf("%s",&NoGun.Mail);
			printf( "\n Kayýt Tarihi : ");scanf("%s",&NoGun.KayitTarih);
			printf( "\n Kitap Sayisi : ");scanf("%d",&NoGun.KitapSayisi);
			printf("\n----------------------------------\n");
			printf( "\nYapýlan deðiþiklikleri kaydetmek istiyormusunuz (y) yes (n) no : ");scanf("%s",&pass);
			if( pass=='y' || pass=='Y')
			{
		 		fprintf(Temp, "%s %s %s %s %s %s %s %d\n", NoGun.No,NoGun.Ad,NoGun.Soyad,NoGun.TC,NoGun.Telefon,NoGun.Mail,NoGun.KayitTarih,*NoGun.KitapSayisi);
			}
			else
			{
				fclose(Ogrenciler);
				fclose(Temp);
				remove("Temp.txt");
				return 0;
			}
		}
		else
		{
			fprintf(Temp, "%s %s %s %s %s %s %s %d\n", NoGun.No,NoGun.Ad,NoGun.Soyad,NoGun.TC,NoGun.Telefon,NoGun.Mail,NoGun.KayitTarih,*NoGun.KitapSayisi);
		}
	}while(!feof(Ogrenciler));
	fclose(Ogrenciler);
	fclose(Temp);
	remove("Ogrenciler.txt");
	rename("Temp.txt", "Ogrenciler.txt");
	return 1;
}

int OgrNoSorgula()
{
	char AraNo[15];
	printf("Öðrenci Numarasý : ");
	scanf("%s",&AraNo);
    FILE *Ogrenciler;
    struct Ogrenci NoSor;
    if((Ogrenciler = fopen("Ogrenciler.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
    	
    while(!feof(Ogrenciler))
      {
		fscanf(Ogrenciler, "%s",&NoSor.No);
		fscanf(Ogrenciler, "%s",&NoSor.Ad);
		fscanf(Ogrenciler, "%s",&NoSor.Soyad);
		fscanf(Ogrenciler, "%s",&NoSor.TC);
		fscanf(Ogrenciler, "%s",&NoSor.Telefon);
		fscanf(Ogrenciler, "%s",&NoSor.Mail);
		fscanf(Ogrenciler, "%s",&NoSor.KayitTarih);
		fscanf(Ogrenciler, "%d\n",&NoSor.KitapSayisi);
    	
		if(!strcmp(AraNo,NoSor.No))
  		{
  			printf("\n----------------------------------\n");
   			printf("Öðrenci No : %s\n\n", NoSor.No);
   			printf("Ad : %s\n\n",replace(NoSor.Ad));
   			printf("Soyad : %s\n\n",replace(NoSor.Soyad));
   			printf("TC : %s\n\n", NoSor.TC);
   			printf("Telefon : %s\n\n", NoSor.Telefon);
   			printf("E-Mail : %s\n\n", NoSor.Mail);
   			printf("Kayit Tarihi : %s\n\n", NoSor.KayitTarih);
   			printf("Kitap Sayýsý : %d\n", *NoSor.KitapSayisi);
   			printf("\n----------------------------------");
   			printf("\n\nÖðrenci Bilgileri Listelendi.\n");
   			break;
  		}
      }
    fclose(Ogrenciler);
}

int OgrIsimSorgula()
{
	char AraIsim[30];
	printf("Öðrenci Ýsmi : ");
	fflush(stdin);
	gets(AraIsim);
    FILE *Ogrenciler;
    struct Ogrenci IsimSor;
    if((Ogrenciler = fopen("Ogrenciler.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
    	
    while(!feof(Ogrenciler))
      {
		fscanf(Ogrenciler, "%s",&IsimSor.No);
		fscanf(Ogrenciler, "%s",&IsimSor.Ad);
		fscanf(Ogrenciler, "%s",&IsimSor.Soyad);
		fscanf(Ogrenciler, "%s",&IsimSor.TC);
		fscanf(Ogrenciler, "%s",&IsimSor.Telefon);
		fscanf(Ogrenciler, "%s",&IsimSor.Mail);
		fscanf(Ogrenciler, "%s",&IsimSor.KayitTarih);
		fscanf(Ogrenciler, "%d\n",&IsimSor.KitapSayisi);
    	
		if(!strcmp(Turkce(AraIsim),IsimSor.Ad))
  		{
  			printf("\n----------------------------------\n");
   			printf("Öðrenci No : %s\n\n", IsimSor.No);
   			printf("Ad : %s\n\n",replace(IsimSor.Ad));
   			printf("Soyad : %s\n\n",replace(IsimSor.Soyad));
   			printf("TC : %s\n\n", IsimSor.TC);
   			printf("Telefon : %s\n\n", IsimSor.Telefon);
   			printf("E-Mail : %s\n\n", IsimSor.Mail);
   			printf("Kayit Tarihi : %s\n\n", IsimSor.KayitTarih);
   			printf("Kitap Sayýsý : %d\n\n", *IsimSor.KitapSayisi);
   			printf("\n----------------------------------\n");
  		}
      }
    fclose(Ogrenciler);
}

int YeniOlay()
{
	FILE*Olaylar;
	struct Olay Olay;
	if((Olaylar=fopen("Olaylar.txt","a"))==NULL)
	{
		puts("Dosya açýlamýyor !!!\n");
		return 0;
	}
		printf("Öðrenci Numarasý : ");	scanf("%s",&Olay.OgrenciNo);
		printf("Kitap Numarasý : ");	scanf("%s",&Olay.KitapNo);
		printf("Tarih : ");				scanf("%s",&Olay.Tarih);
		printf("Olay : ");				scanf("%s",&Olay.Olay);
			
		if(!strcmp("0",Olay.Olay))
		{
			fprintf(Olaylar,"%s %s %s %s\n",Olay.OgrenciNo,Olay.KitapNo,Olay.Tarih,Olay.Olay);
			fclose(Olaylar);
			KitapArttir(Olay.OgrenciNo);
			KitapVer(Olay.KitapNo,Olay.Tarih,Olay.OgrenciNo);
		}
		else if(!strcmp("1",Olay.Olay))
		{
			fprintf(Olaylar,"%s %s %s %s\n",Olay.OgrenciNo,Olay.KitapNo,Olay.Tarih,Olay.Olay);
			fclose(Olaylar);
			KitapAl(Olay.KitapNo);
		}else{
			fclose(Olaylar);
			printf("HATA : 0 yada 1 girilmelidir!\n0 > Öðrenciye Verme\n1 > Öðrenciden Alma");
		}
	
}

int YeniOgrenci()
{
	FILE*Ogrenciler;
	struct Ogrenci Ogrenci,OgrKar;
	if((Ogrenciler=fopen("Ogrenciler.txt","a+"))==NULL)
	{
		puts("Dosya açýlamýyor !!!\n");
		return 0;
	}
		printf("ÖÐRENCÝNÝN >>>\n");
		printf("Numarasý : ");	scanf("%s",&Ogrenci.No);
		fflush(stdin);
		printf("Adý : ");		gets(Ogrenci.Ad);
		printf("Soyadý : ");	gets(Ogrenci.Soyad);
		printf("TC : ");		scanf("%s",&Ogrenci.TC);
		printf("Telefon : ");	scanf("%s",&Ogrenci.Telefon);
		printf("E-Posta : ");	scanf("%s",&Ogrenci.Mail);
		printf("Kayýt Tarihi : ");scanf("%s",&Ogrenci.KayitTarih);
		
		while(!feof(Ogrenciler))
	    {
			fscanf(Ogrenciler, "%s",&OgrKar.No);
			fscanf(Ogrenciler, "%s",&OgrKar.Ad);
			fscanf(Ogrenciler, "%s",&OgrKar.Soyad);
			fscanf(Ogrenciler, "%s",&OgrKar.TC);
			fscanf(Ogrenciler, "%s",&OgrKar.Telefon);
			fscanf(Ogrenciler, "%s",&OgrKar.Mail);
			fscanf(Ogrenciler, "%s",&OgrKar.KayitTarih);
			fscanf(Ogrenciler, "%d\n",&OgrKar.KitapSayisi);
	    	
			if(!strcmp(Ogrenci.No,OgrKar.No))
	  		{
	   			printf("\nBu Numarada Öðrenci Zaten Kayýtlý !\n");
	   			return 0;
	  		}
	    }
		fprintf(Ogrenciler,"%s %s %s %s %s %s %s %d\n",Ogrenci.No,Turkce(Ogrenci.Ad),Turkce(Ogrenci.Soyad),Ogrenci.TC,Ogrenci.Telefon,Ogrenci.Mail,Ogrenci.KayitTarih,0);
		fclose(Ogrenciler);	
}

int YeniKitap()
{
	FILE*Kitaplar;
	struct Kitap Kitap,KtpKar;
	if((Kitaplar=fopen("Kitaplar.txt","a+"))==NULL)
	{
		puts("Dosya açýlamýyor !!!\n");
		return 0;
	}
		printf("KÝTABIN >>>\n");
		printf("Numarasý : ");	scanf("%s",&Kitap.No);
		fflush(stdin);
		printf("Adý : ");		gets(Kitap.Isim);
		printf("Yazarý : ");	gets(Kitap.Yazar);
		printf("Basým : ");		scanf("%s",&Kitap.Basim);
		printf("Raf : ");		scanf("%s",&Kitap.Raf);
		printf("Kayýt Tarihi : ");scanf("%s",&Kitap.KayitTarih);
		while(!feof(Kitaplar))
	    {
			fscanf(Kitaplar, "%s",&KtpKar.No);
			fscanf(Kitaplar, "%s",&KtpKar.Isim);
			fscanf(Kitaplar, "%s",&KtpKar.Yazar);
			fscanf(Kitaplar, "%s",&KtpKar.Basim);
			fscanf(Kitaplar, "%s",&KtpKar.Raf);
			fscanf(Kitaplar, "%s",&KtpKar.KayitTarih);
	    	
			if(!strcmp(Kitap.No,KtpKar.No))
	  		{
	   			printf("\nBu Numarada Kitap Zaten Kayýtlý !\n");
	   			return 0;
	  		}
	    }
		fprintf(Kitaplar,"%s %s %s %s %s %s %s %s %s\n",Kitap.No,Turkce(Kitap.Isim),Turkce(Kitap.Yazar),Kitap.Basim,Kitap.Raf,Kitap.KayitTarih,"00.00.0000","0","1");
		fclose(Kitaplar);	
}

int KitapArttir(char *OgrNo)
{
	FILE*Ogrenciler;
	FILE*Temp;
	struct Ogrenci AraOgrenci;
    if((Ogrenciler = fopen("Ogrenciler.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý \n");
	return 0;
	}
	
	if((Temp = fopen("Temp.txt","a"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}

	do
	{
	fscanf(Ogrenciler,"%s %s %s %s %s %s %s %d\n",&AraOgrenci.No,&AraOgrenci.Ad,&AraOgrenci.Soyad,&AraOgrenci.TC,&AraOgrenci.Telefon,&AraOgrenci.Mail,&AraOgrenci.KayitTarih,&AraOgrenci.KitapSayisi);
	if(!strcmp(OgrNo,AraOgrenci.No))
	{
	fprintf(Temp,"%s %s %s %s %s %s %s %d\n",AraOgrenci.No,AraOgrenci.Ad,AraOgrenci.Soyad,AraOgrenci.TC,AraOgrenci.Telefon,AraOgrenci.Mail,AraOgrenci.KayitTarih,*AraOgrenci.KitapSayisi+1);
	}else{
	fprintf(Temp,"%s %s %s %s %s %s %s %d\n",AraOgrenci.No,AraOgrenci.Ad,AraOgrenci.Soyad,AraOgrenci.TC,AraOgrenci.Telefon,AraOgrenci.Mail,AraOgrenci.KayitTarih,*AraOgrenci.KitapSayisi);	
	}
	}while(!feof(Ogrenciler));
	
	fclose(Ogrenciler);
	fclose(Temp);
	remove("Ogrenciler.txt");
	rename("Temp.txt", "Ogrenciler.txt");

}

int KitapVer(char *KtpNo,char *Tarih,char *OgrNo)
{
	FILE*Kitaplar;
	FILE*Temp;
	struct Kitap AraKitap;
    if((Kitaplar = fopen("Kitaplar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý \n");
	return 0;
	}
	
	if((Temp = fopen("TempKitap.txt","a"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
	do
	{
		fscanf(Kitaplar,"%s %s %s %s %s %s %s %s %s\n",&AraKitap.No,&AraKitap.Isim,&AraKitap.Yazar,&AraKitap.Basim,&AraKitap.Raf,&AraKitap.KayitTarih,&AraKitap.SonAlinma,&AraKitap.SonAlan,&AraKitap.Durum);
		if(!strcmp(KtpNo,AraKitap.No))
		{
			fprintf(Temp,"%s %s %s %s %s %s %s %s %s\n",AraKitap.No,AraKitap.Isim,AraKitap.Yazar,AraKitap.Basim,AraKitap.Raf,AraKitap.KayitTarih,Tarih,OgrNo,"0");
		}else{
			fprintf(Temp,"%s %s %s %s %s %s %s %s %s\n",AraKitap.No,AraKitap.Isim,AraKitap.Yazar,AraKitap.Basim,AraKitap.Raf,AraKitap.KayitTarih,AraKitap.SonAlinma,AraKitap.SonAlan,AraKitap.Durum);	
		}
	}while(!feof(Kitaplar));
	
	fclose(Kitaplar);
	fclose(Temp);
	remove("Kitaplar.txt");
	rename("TempKitap.txt", "Kitaplar.txt");
	
}

int KitapAl(char *KtpNo)
{
	FILE*Kitaplar;
	FILE*Temp;
	struct Kitap AraKitap;
    if((Kitaplar = fopen("Kitaplar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý \n");
	return 0;
	}
	
	if((Temp = fopen("TempKitap.txt","a"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
	do
	{
	fscanf(Kitaplar,"%s %s %s %s %s %s %s %s %s\n",&AraKitap.No,&AraKitap.Isim,&AraKitap.Yazar,&AraKitap.Basim,&AraKitap.Raf,&AraKitap.KayitTarih,&AraKitap.SonAlinma,&AraKitap.SonAlan,&AraKitap.Durum);
	if(!strcmp(KtpNo,AraKitap.No))
	{
		fprintf(Temp,"%s %s %s %s %s %s %s %s %s\n",AraKitap.No,AraKitap.Isim,AraKitap.Yazar,AraKitap.Basim,AraKitap.Raf,AraKitap.KayitTarih,AraKitap.SonAlinma,AraKitap.SonAlan,"1");
	}else{
		fprintf(Temp,"%s %s %s %s %s %s %s %s %s\n",AraKitap.No,AraKitap.Isim,AraKitap.Yazar,AraKitap.Basim,AraKitap.Raf,AraKitap.KayitTarih,AraKitap.SonAlinma,AraKitap.SonAlan,AraKitap.Durum);	
	}
	}while(!feof(Kitaplar));
	
	fclose(Kitaplar);
	fclose(Temp);
	remove("Kitaplar.txt");
	rename("TempKitap.txt", "Kitaplar.txt");
	
}

int OlayOgrAra()
{
	char AraNo[15];
	printf("Öðrenci Numarasý : ");
	scanf("%s",&AraNo);
    FILE *Olaylar;
    struct Olay OlayOgrAra;
    int bulunan=0;
    if((Olaylar = fopen("Olaylar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
	printf("Öðrenci No\t\t");
    printf("Kitap\t\t");
   	printf("Tarih\t\t\t");
    printf("Olay\n");
    	
    while(!feof(Olaylar))
      {
		fscanf(Olaylar, "%s",&OlayOgrAra.OgrenciNo);
		fscanf(Olaylar, "%s",&OlayOgrAra.KitapNo);
		fscanf(Olaylar, "%s",&OlayOgrAra.Tarih);
		fscanf(Olaylar, "%s\n",&OlayOgrAra.Olay);
    	
		if(!strcmp(AraNo,OlayOgrAra.OgrenciNo))
  		{
   			printf("%s\t\t", OlayOgrAra.OgrenciNo);
    		printf("%s\t\t", OlayOgrAra.KitapNo);
    		printf("%s\t\t", OlayOgrAra.Tarih);
    		printf("%s\n", OlayOgrAra.Olay);
    		bulunan++;
  		}
      }
    fclose(Olaylar);
    printf("%d sonuç bulundu !",bulunan);
}

int OlayKtpAra()
{
	char AraKtp[15];
	printf("Kitap Numarasý : ");
	scanf("%s",&AraKtp);
    FILE *Olaylar;
    struct Olay OlayKtpAra;
    int bulunan=0;
    if((Olaylar = fopen("Olaylar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
	printf("Öðrenci No\t\t");
    printf("Kitap\t\t");
   	printf("Tarih\t\t\t");
    printf("Olay\n");
    
    while(!feof(Olaylar))
      {
		fscanf(Olaylar, "%s",&OlayKtpAra.OgrenciNo);
		fscanf(Olaylar, "%s",&OlayKtpAra.KitapNo);
		fscanf(Olaylar, "%s",&OlayKtpAra.Tarih);
		fscanf(Olaylar, "%s\n",&OlayKtpAra.Olay);
		
		if(!strcmp(AraKtp,OlayKtpAra.KitapNo))
  		{
   			printf("%s\t\t", OlayKtpAra.OgrenciNo);
    		printf("%s\t\t", OlayKtpAra.KitapNo);
    		printf("%s\t\t", OlayKtpAra.Tarih);
    		printf("%s\n", OlayKtpAra.Olay);
    		bulunan++;
  		}
      }
    fclose(Olaylar);
    printf("%d sonuç bulundu !",bulunan);
}

int OlayTarihAra()
{
	char AraTarih[15];
	printf("Tarih : ");
	scanf("%s",&AraTarih);
    FILE *Olaylar;
    struct Olay OlayTarihAra;
    int bulunan=0;
    if((Olaylar = fopen("Olaylar.txt","r"))==NULL)
	{
	printf("Dosya açýlamadý  \n");
	return 0; 
	}
	
	printf("Öðrenci No\t\t");
    printf("Kitap\t\t");
   	printf("Tarih\t\t\t");
    printf("Olay\n");
    
    while(!feof(Olaylar))
      {
		fscanf(Olaylar, "%s",&OlayTarihAra.OgrenciNo);
		fscanf(Olaylar, "%s",&OlayTarihAra.KitapNo);
		fscanf(Olaylar, "%s",&OlayTarihAra.Tarih);
		fscanf(Olaylar, "%s\n",&OlayTarihAra.Olay);
				
		if(!strcmp(AraTarih,OlayTarihAra.Tarih))
  		{
   			printf("%s\t\t", OlayTarihAra.OgrenciNo);
    		printf("%s\t\t", OlayTarihAra.KitapNo);
    		printf("%s\t\t", OlayTarihAra.Tarih);
    		printf("%s\n", OlayTarihAra.Olay);
    		bulunan++;
  		}
      }
    fclose(Olaylar);
    printf("%d sonuç bulundu !",bulunan);
}

  
int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("KÜTÜPHANE TAKÝP PROGRAMINA HOÞ GELDÝNÝZ\n");
	AnaMenu();
	
}
