#include <stdio.h>
#include <stdlib.h>
#define     SIZE    16

typedef struct Notlar
{
    int mat;
    int fiz;
    int bio;
    int sinav;
}Notlar;

typedef struct _Ogrenci
{
    char isim[SIZE];
    char soyIsim[SIZE];
    int no;
    Notlar *notptr;
}Ogrenci;

Ogrenci* ekle()
{
    int _sinav;
    Ogrenci *yeniOgr = (Ogrenci *)malloc(sizeof(Ogrenci));
    printf("Isim: ");
    scanf("%s",yeniOgr->isim);
    printf("Soyisim: ");
    scanf("%s",yeniOgr->soyIsim);
    printf("No: ");
    scanf("%d",&yeniOgr->no);
    printf("\nKac sinav notu gireceksiniz ?\n");
    scanf("%d",&_sinav);
    yeniOgr->notptr = malloc(sizeof(yeniOgr->notptr) *_sinav);
    yeniOgr->notptr->sinav = _sinav;

    for(int i = 0; i < _sinav; i++)
    {
        printf("%d. Mat:\n",i+1);
        scanf("%d",&(yeniOgr->notptr+i)->mat);
        printf("%d. Fiz:\n",i+1);
        scanf("%d",&(yeniOgr->notptr+i)->fiz);
        printf("%d. Bio:\n",i+1);
        scanf("%d",&(yeniOgr->notptr+i)->bio);
    }
    return yeniOgr;
}
int main()
{
    Ogrenci *yazdir = ekle();
    printf("Isým: %s\nSoyisim: %s\nNo: %d\n",yazdir->isim,yazdir->soyIsim,yazdir->no);
    for(int i = 0; i < yazdir->notptr->sinav; i++)
    {
        printf("%d. Mat: %d\n",i+1,(yazdir->notptr+i)->mat);
        printf("%d. Fiz: %d\n",i+1,(yazdir->notptr+i)->fiz);
        printf("%d. Bio: %d\n",i+1,(yazdir->notptr+i)->bio);
    }

    return 0;
}
