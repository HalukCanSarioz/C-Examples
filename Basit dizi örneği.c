#include <stdio.h>
#include <stdlib.h>
void not_gir(char *, int *);
int minimumBul(int *);
int ara(int *);
#define KAC_KISI 3
int main()
{
    char adsoyad[KAC_KISI][10];
    int puan[KAC_KISI];
    int x;
    not_gir(adsoyad, puan);
    printf("\nEn dusuk not: %d\n\n", minimumBul(puan));
    x = ara(puan);
    printf("En dusuk notlu ogrenci: %s\n", adsoyad[x]);
    printf("Ogrencinin notu: %d\n", puan[x]);
    return 0;
}
void not_gir(char *a, int *p)
{
    int i = 0;
    int j = 0;
    while(i < KAC_KISI)
    {
        printf("\n%d. ogrenci // Ad Soyad: ", (i+1));
        scanf("%s", &a[j]);
        printf("%d. ogrenci // Notu: ", (i+1));
        scanf("%d", &p[i]);
        j += 10;
        i++;
    }
}
int minimumBul(int *p)
{
    int i = 1;
    int ek = p[0];
    while(i < KAC_KISI)
    {
        if(p[i] < ek)
            ek = p[i];
        i++;
    }
    return ek;
}

int ara(int *p)
{
    int min = minimumBul(p);
    int i = 0;
    while(i < KAC_KISI)
    {
        if(p[i] == min)
            break;
        i++;
    }
    return i;
}
