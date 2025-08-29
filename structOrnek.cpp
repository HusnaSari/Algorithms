#include <stdio.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	float vize;
	float final;	
};
typedef struct ogrenci Ogrenci;



int main(){
	
	Ogrenci ogrenciler[3];
	int i = 0; float t=0;
	for(i=0;i<3;i++){
		printf("%d. indis : ",i+1);
	    scanf("%s",ogrenciler[i].isim);
	    scanf("%s",ogrenciler[i].soyisim);
	    scanf("%f",&ogrenciler[i].vize);
	    scanf("%f",&ogrenciler[i].final);
	    t=t+(ogrenciler[i].vize)*(0.4)+(ogrenciler[i].final)*(0.6);
	    
	}
	for(i=0; i < 3; i++){
		printf("%s ",ogrenciler[i].isim);
		printf("%s ",ogrenciler[i].soyisim);
		printf("%f ",ogrenciler[i].vize);
		printf("%f ",ogrenciler[i].final);
		
	}
	t=t/3;
	printf("Sýnýfýn ders notu ortalamasý= %f",t);
}
