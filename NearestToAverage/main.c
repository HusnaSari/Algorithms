#include <stdio.h>

int main()
{
    //dizi tanımla 10 elemanlı enyakin, enYakinİndeks,toplam,ortfark ve ort değişkenitanımla 
    int dizi [10]={}; 
    int enYakinDeger=0 ;
    int enYakinDegerinIndeksi=0;
    float toplam=0;
    float ort=0;
    float ortfark=0;
    //döngü ile dizi elmanlarını kullanıcıdan oku ve topla
    for(int i=0; i<10;i++)
    {
        scanf("%d",&dizi[i]);
        toplam=toplam+dizi[i];

    }
    //ortalamyı bul
    ort=toplam / 10;
    // dizinin ortalama ile dizinin ilk elemanın farkını değişkene(ortfark) ata
    ortfark=dizi[0]-ort;
    if(ortfark<0)
    {
        ortfark=ortfark*(-1);
    }
    enYakinDeger=dizi[0];
    //enYakinIndekse 0 ı ata
    enYakinDegerinIndeksi=0;
    // 1 den başlayan döngü ile dizi elamanların ort. değeri ile farkının mutlak değerini bul sonra bu değer ile enYakin ı karşılaştır
    for(int i=1;i<10;i++)
    {
        float gecici=dizi[i]-ort;
        printf("fark:%f önceki fark: %f i:%d ort : %f\n",gecici,ortfark,dizi[i],ort);
        if(gecici<0)
        {
            gecici=gecici*(-1);
        }
        if(gecici<ortfark)
        {
            ortfark=gecici;
            enYakinDeger=dizi[i];
            enYakinDegerinIndeksi=i;
        }
    }
    // küçükse o elamanın değerini enYakin değiş.nine indeksini enYakinIndeks değişkenine ata
    //döngü bittikten sonra ekrana enYakin ve enYakinIndeks i yazdır 
    printf("Index : %d, element : %d",enYakinDegerinIndeksi,enYakinDeger);
}