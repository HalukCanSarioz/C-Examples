#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
char ogrenci_no[20],kitap_no[20];
int main()
{
	baslangic:
	setlocale(LC_ALL, "Turkish");
	system("color A"); 
	int ana_secim;
    printf("\n1. Yeni Kayýt\n");
    printf("2. Kayýt Ara\n");
    printf("3. Öðrenci Sorgula\n");
    printf("4. Kitap Sorgula\n");
    printf("5. Çýkýþ\n");
    printf("\nBir Seçim Yapýnýz: ");
    scanf("%d",&ana_secim);
    if(ana_secim==1)  // Yeni Kayýt
    {
    	yeni_kayit:
    	int kayit_secim;
    	    printf("\n1. Olay Kaydet\n");
    	    printf("2. Yeni Öðrenci Kaydet\n");
    	    printf("3. Yeni Kitap Kaydet\n");
    	    printf("4. Geri\n");
    	    printf("\nBir Seçim Yapýnýz: ");
    	    scanf("%d",&kayit_secim);
    	    if(kayit_secim==1)  // Olay Kaydet
            {
            	FILE*olay_dosya;
            	char ogr_no[20],ktp_no[20],tarih[12];
            	int olay; // kitap veriliyorsa 0 iade ediliyorsa 1
            	    printf("ÖÐRENCÝ NO: ");
                 	scanf("%s",&ogr_no);
    				printf("KÝTAP NO: ");
    				scanf("%s",&ktp_no);
    				printf("TARÝH: ");
    				scanf("%s",&tarih);
    				printf("OLAY: ");
    				scanf("%d",&olay);
    				if(olay==0) 
					/* Kitap alýmý 
					1 - Alan ÖÐRENCÝ NOsundan KÝTAP SAYISIna +1
					2 - KÝTAP SON ALINMA TARÝHÝ
					3 - SON ALAN KÝÞÝ
					4 - KÝTAP DURUMU 0 */
    				{	
    				    FILE*ogr_dosya;
    				    FILE*kitap_dosya;
    					char f_ogr_no[20],f_ogr_ad[30],f_ogr_soyad[30],f_ogr_tc[12],f_ogr_tel[12],f_ogr_eposta[100],f_ogr_tarih[12];
            			int f_ogr_kitap;
    					ogr_dosya = fopen("ogrenciler.txt","r");
    				
    						while(!feof(ogr_dosya)){   // Öðrencinin daha önce kayýtlý olup olmaðýdýný kontrol ettiriyoruz
      	  					fscanf(ogr_dosya ,"%s %s %s %s %s %s %s %d\n",&f_ogr_no,&f_ogr_ad,&f_ogr_soyad,&f_ogr_tc,&f_ogr_tel,&f_ogr_eposta,&f_ogr_tarih,&f_ogr_kitap);
      	  						if(strcmp(ogr_no,f_ogr_no)==0)
      	  						{
      	  							// Kitap Kontrol
      	  							char f_ktp_no[20],f_ktp_ad[100],f_ktp_yazar[100],f_ktp_basim[12],f_ktp_raf[12],f_ktp_tarih[12],f_ktp_son_tarih[12],f_ktp_son_alan[12],f_ktp_durum[2];
    								kitap_dosya = fopen("kitaplar.txt","r");
    				
    									while(!feof(kitap_dosya)){   // Öðrencinin daha önce kayýtlý olup olmaðýdýný kontrol ettiriyoruz
      	  									fscanf(kitap_dosya ,"%s %s %s %s %s %s %s %s %s\n",&f_ktp_no,&f_ktp_ad,&f_ktp_yazar,&f_ktp_basim,&f_ktp_raf,&f_ktp_tarih,&f_ktp_son_tarih,&f_ktp_son_alan,&f_ktp_durum);
      	  									if(strcmp(ktp_no,f_ktp_no)==0)
      	  									{
      	  									//////////////////////////////////////////////////////////////////////	
      	  										/// Ýþlem yapýlacak
      	  										/* Kitap alýmý 
												1 - Alan ÖÐRENCÝ NOsundan KÝTAP SAYISIna +1
												2 - KÝTAP SON ALINMA TARÝHÝ
												3 - SON ALAN KÝÞÝ
												4 - KÝTAP DURUMU 0 */
											//////////////////////////////////////////////////////////////////////
      	  										getch();
      	  										goto yeni_kayit; // Öðrenci kayýtlýysa uyarý verip menüye geri dönüyor
      	  									}
    	 	    						}
    	 	    					fclose(kitap_dosya);
    	 	    					printf("\nKitap kayýtlý deðil...\n");
							getch();	
                			goto yeni_kayit;
      	  						}
    	 	    			}
    	 	    		fclose(ogr_dosya);
    	 	    		printf("\nÖðrenci kayýtlý deðil...\n");	
                		goto yeni_kayit;
    				}
    				else if(olay==1) 
					/* Kitap iade 
					1 - KÝTAP DURUMU 1 yapmalý 
					*/ 
    				{
    				}
                goto yeni_kayit;
            }
            if(kayit_secim==2)  // Yeni Öðrenci Kaydet
            {
            	FILE*ogr_dosya;
            	char ogr_no[20],ogr_ad[30],ogr_soyad[30],ogr_tc[12],ogr_tel[12],ogr_eposta[100],ogr_tarih[12];
            	char ogr_kitap[4] = "0";
            	    printf("ÖÐRENCÝ NO: ");
                 	scanf("%s",&ogr_no);
    				printf("AD: ");
    				scanf("%s",&ogr_ad);
    				printf("SOYAD: ");
    				scanf("%s",&ogr_soyad);
    				printf("TC NO: ");
    				scanf("%s",&ogr_tc);
    				printf("TELEFON NO: ");
    				scanf("%s",&ogr_tel);
    				printf("E-POSTA: ");
    				scanf("%s",&ogr_eposta);
    				printf("TARÝH: ");
    				scanf("%s",&ogr_tarih);
            		char f_ogr_no[20],f_ogr_ad[30],f_ogr_soyad[30],f_ogr_tc[12],f_ogr_tel[12],f_ogr_eposta[100],f_ogr_tarih[12];
            		int f_ogr_kitap;
    				ogr_dosya = fopen("ogrenciler.txt","r");
    				
    					while(!feof(ogr_dosya)){   // Öðrencinin daha önce kayýtlý olup olmaðýdýný kontrol ettiriyoruz
      	  				fscanf(ogr_dosya ,"%s %s %s %s %s %s %s %d\n",&f_ogr_no,&f_ogr_ad,&f_ogr_soyad,&f_ogr_tc,&f_ogr_tel,&f_ogr_eposta,&f_ogr_tarih,&f_ogr_kitap);
      	  					if(strcmp(ogr_no,f_ogr_no)==0)
      	  					{
      	  						printf("\nBu Numaraya Ait Öðrenci Zaten Kayýtlý...\n");
      	  						goto yeni_kayit; // Öðrenci kayýtlýysa uyarý verip menüye geri dönüyor
      	  					}
    	 	    		}
    	 	    	fclose(ogr_dosya);
    	 	    	ogr_dosya = fopen("ogrenciler.txt","a+"); // Öðrenci kayýtlý deðilse kayýt ettiriyoruz
            	    fprintf(ogr_dosya,"%s %s %s %s %s %s %s %s\n",&ogr_no,&ogr_ad,&ogr_soyad,&ogr_tc,&ogr_tel,&ogr_eposta,&ogr_tarih,&ogr_kitap);
                    printf("\nÖðrenci Kaydedildi....\n");
                    fclose(ogr_dosya);
				getch();	
                goto yeni_kayit;
            }
            if(kayit_secim==3)  // Yeni Kitap Kaydet
            {
            	FILE*kitap_dosya;
            	char ktp_no[20],ktp_ad[100],ktp_yazar[100],ktp_basim[12],ktp_raf[12],ktp_tarih[12];
            	char ktp_son_tarih[12] = "00/00/0000";
            	char ktp_son_alan[12] = "0";
            	char ktp_durum[2] = "1";
            	    printf("KÝTAP NO: ");
                 	scanf("%s",&ktp_no);
    				printf("AD: ");
    				scanf("%s",&ktp_ad);
    				printf("YAZAR: ");
    				scanf("%s",&ktp_yazar);
    				printf("BASIM: ");
    				scanf("%s",&ktp_basim);
    				printf("RAF: ");
    				scanf("%s",&ktp_raf);
    				printf("TARÝH: ");
    				scanf("%s",&ktp_tarih);
    				char f_ktp_no[20],f_ktp_ad[100],f_ktp_yazar[100],f_ktp_basim[12],f_ktp_raf[12],f_ktp_tarih[12],f_ktp_son_tarih[12],f_ktp_son_alan[12],f_ktp_durum[2];
    				kitap_dosya = fopen("kitaplar.txt","r");
    				
    					while(!feof(kitap_dosya)){   // Öðrencinin daha önce kayýtlý olup olmaðýdýný kontrol ettiriyoruz
      	  				fscanf(kitap_dosya ,"%s %s %s %s %s %s %s %s %s\n",&f_ktp_no,&f_ktp_ad,&f_ktp_yazar,&f_ktp_basim,&f_ktp_raf,&f_ktp_tarih,&f_ktp_son_tarih,&f_ktp_son_alan,&f_ktp_durum);
      	  					if(strcmp(ktp_no,f_ktp_no)==0)
      	  					{
      	  						printf("\nBu Numaraya Ait Kitap Zaten Kayýtlý...\n");
      	  						goto yeni_kayit; // Öðrenci kayýtlýysa uyarý verip menüye geri dönüyor
      	  					}
    	 	    		}
    	 	    	fclose(kitap_dosya);
    	 	    	kitap_dosya = fopen("kitaplar.txt","a+"); // Öðrenci kayýtlý deðilse kayýt ettiriyoruz
            	    fprintf(kitap_dosya,"%s %s %s %s %s %s %s %s %s\n",&ktp_no,&ktp_ad,&ktp_yazar,&ktp_basim,&ktp_raf,&ktp_tarih,&ktp_son_tarih,&ktp_son_alan,&ktp_durum);
                    printf("\nKitap Kaydedildi....\n");
                    fclose(kitap_dosya);
					getch();	
                goto yeni_kayit;
            }
            if(kayit_secim==4)  // Geri
            {
            	goto baslangic;
            }
    }
    if(ana_secim==2)  // Kayýt Arama
    {
    }
   	if(ana_secim==3)  // Öðrenci Sorgula
    {
    	char ogr_no[20];
    	char f_ogr_no[20],f_ogr_ad[30],f_ogr_soyad[30],f_ogr_tc[12],f_ogr_tel[12],f_ogr_eposta[100],f_ogr_tarih[12],f_ogr_kitap[5];
    	printf("Öðrenci No Giriniz : ");
    	scanf("%s",&ogr_no);
    	FILE*ogrenci_sorgu;
    	ogrenci_sorgu = fopen("ogrenciler.txt","r");
			while(!feof(ogrenci_sorgu))
    		{
       			fscanf(ogrenci_sorgu,"%s %s %s %s %s %s %s %s",&f_ogr_no,&f_ogr_ad,&f_ogr_soyad,&f_ogr_tc,&f_ogr_tel,&f_ogr_eposta,&f_ogr_tarih,&f_ogr_kitap);
	    		if(strcmp(ogr_no,f_ogr_no)==0){
        			printf("-\n No: %s\n Ad: %s\n Soyad: %s\n TC: %s\n Tel: %s\n E-posta: %s\n Kayýt Tarihi: %s\n Aldýðý Kitap Sayýsý: %s\n-\n",f_ogr_no,f_ogr_ad,f_ogr_soyad,f_ogr_tc,f_ogr_tel,f_ogr_eposta,f_ogr_tarih,f_ogr_kitap); // okuduðu bilgiler ekrana formatlý bir þekilde yazdýracak
				}
    		}
    		fclose(ogrenci_sorgu);
    		getch();
    	goto baslangic;	
    }
	if(ana_secim==4)  // Kitap Sorgula
    {
    	char ktp_no[20];
    	char f_ktp_no[20],f_ktp_ad[100],f_ktp_yazar[100],f_ktp_basim[12],f_ktp_raf[12],f_ktp_tarih[12],f_ktp_son_tarih[12],f_ktp_son_alan[12],f_ktp_durum[2];
    	printf("Kitap No Giriniz : ");
    	scanf("%s",&ktp_no);
    	
    	FILE*kitap_sorgu;
    	kitap_sorgu = fopen("kitaplar.txt","r");
			while(!feof(kitap_sorgu))
    		{
       			fscanf(kitap_sorgu,"%s %s %s %s %s %s %s %s %s",&f_ktp_no,&f_ktp_ad,&f_ktp_yazar,&f_ktp_basim,&f_ktp_raf,&f_ktp_tarih,&f_ktp_son_tarih,&f_ktp_son_alan,&f_ktp_durum);
	    		if(strcmp(ktp_no,f_ktp_no)==0){
        			printf("-\n No: %s\n Ad: %s\n Yazar: %s\n Basým: %s\n Raf: %s\n Kayýt Tarihi: %s\n Son Alma Tarihi: %s\n Son Alan No: %s\n Kitap Durumu: %s\n-\n",f_ktp_no,f_ktp_ad,f_ktp_yazar,f_ktp_basim,f_ktp_raf,f_ktp_tarih,f_ktp_son_tarih,f_ktp_son_alan,f_ktp_durum); // okuduðu bilgiler ekrana formatlý bir þekilde yazdýracak
				}
    		}
    		fclose(kitap_sorgu);
    		getch();
    	goto baslangic;	
    }	
    if(ana_secim==5)  // Çýkýþ
    {
    	return 0;
    }
}
