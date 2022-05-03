#include<stdio.h>
#include<string.h>
struct AdresDefteri 
{ 
   int ID;
   char Ad[100];
   char Soyad[100];
   char TelNo[10];
   char Adres[200];
};
 
int main()
{
   struct AdresDefteri kontak;
 
   kontak.ID = 1;
   strcpy(kontak.Ad, "HalukCan");
   strcpy(kontak.Soyad, "Sarýöz");
   strcpy(kontak.TelNo, "123456789");
   strcpy(kontak.Adres, "xxxxxx ANKARA");
   return 0;
   
}
