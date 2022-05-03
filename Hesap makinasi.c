#include <stdio.h> 
#include <stdlib.h>
   int main()
   {
    int a,b,sonuc;
    char secim;
    printf ("a sayisini giriniz = ");
    scanf ("%d",&a);
    fflush(stdin);
     printf ("..islem seciniz[+ , - , * , /]..");
     secim = getchar();
     printf ("b sayisini giriniz.. ");
     printf ("%d %c  ",a,secim);
     scanf("%d",&b);
     switch(secim)
      {
	      case '+' :
	          sonuc = a + b;
	          printf("Toplama isleminin sonucu %d'dir..",sonuc);
	      break;
	      case '-' :
	          sonuc = a - b;
	          printf("Cikartma isleminin sonucu %d'dir..",sonuc);
	      break;
	
	      case '*' :
	          sonuc = a * b;
	          printf("Carpma isleminin sonucu %d'dir..",sonuc);
	      break;
	
	      case '/' :
	          sonuc = a / b;
	          printf("Bolme isleminin sonucu %d'dir..",sonuc);
	      break;
	      default :
	      printf ("Lutfen belirtilen karakterlerden biriniz seciniz..");
      }
     printf("icin enter tusuna basiniz..");
      fflush(stdin);
      return 0;
  }
