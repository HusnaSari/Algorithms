#include <stdio.h>

int main()
{
    int kontrol [20],sayac=0,sayi,gecici=0;
    int dizi[20];

    while(sayac!=20)
    {
        scanf("%d",&sayi);
        if(sayi>10&&sayi<100)
        {
            int gecici =0;
            for(int i=0;i<=sayac;i++)
            {
                
                if(kontrol[i]==sayi)
                {
                   gecici++;    
                }
                if(gecici==0)
                {
                    kontrol[i]=sayi;
                    dizi[i]=sayi;
                    sayac++;
                }
                
            }
        }
    }
    printf("yirmi sayi sunlardir: ");
    for(int i=0;i<20;i++)
    {
        printf("%d",dizi[i]);
    }
}