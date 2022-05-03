#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct ogr{
       int no;
       char *isim;
       char* bolum;
};
//www.bilgisayarkavramlari.com
int main(){
    typedef ogr ogrenci;
    while(1){
        printf("1. yeni kayit ekle\n");
        printf("2. kayit ara\n");
        printf("3. cikis\n");
        printf("bir secim yapiniz\n");
        int secim;
        scanf("%d",&secim);
        if(secim == 1){
                 FILE *fp = fopen("kayit.txt","a");
                 ogrenci a;
                 a.isim = (char*)malloc(sizeof(char)*20);
                 a.bolum = (char*)malloc(sizeof(char)*20);
                 printf("isim giriniz:");
                 scanf("%s",a.isim);
                 printf("bolumunu giriniz");
                 scanf("%s",a.bolum);
                 printf("no giriniz");
                 scanf("%d",&a.no);
                 fprintf(fp,"%s %s %d\n",a.isim,a.bolum,a.no);
                 fclose(fp);
        }
        if(secim == 2){
                 FILE *fp=fopen("kayit.txt","r");
                 char isim[100];
                 printf("aranan ismi giriniz");
                 scanf("%s",isim);
                 while(!feof(fp)){
                   ogrenci a;
                   fscanf(fp,"%s %s %d",a.isim,a.bolum,&a.no);
                   if(strcmp(a.isim,isim)==0){
                       printf("%s %s %d\n",a.isim,a.bolum,a.no);
                   }                            
                 }     
                 fclose(fp);    
        }
        if(secim == 3){
                 break;
        }
    }
}
             
