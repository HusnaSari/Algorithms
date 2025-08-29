#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int s1,s2,s3,toplam,ortalama,enbuyuk,enkucuk,carpim;
    scanf("%d %d %d",&s1,&s2,&s3);
    toplam =s1+s2+s3;
    printf("Sayıların toplamı : %d\n",toplam);
    ortalama=toplam/3;
    printf("sayıların ortalaması : %d\n",ortalama);
    carpim=s1*s2*s3;
    printf("sayıların çarpımı : %d\n",carpim);
    enkucuk=s1;
    if(enkucuk>s2)
        enkucuk=s2;
    if(enkucuk>s3)
        enkucuk=s3;
    enbuyuk=s1;
    if(enbuyuk<s2)
        enbuyuk=s2;
    if(enbuyuk<s3)
        enbuyuk=s3;
    printf("Girilen sayıların en küçüğü : %d \n Girilen sayıların en büyüğü : %d",enkucuk,enbuyuk);
}