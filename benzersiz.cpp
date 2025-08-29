#include <stdio.h>
#include <stdlib.h>

int main(){	
	int d[10]; int i,j,s;
	for(i=0;i<10;i++){
		//rasgele sayý üret
		s = rand()%10 + 1;
		//sayý dizide var mý kontrol et
		int kontrolDegiskeni = 0;
		for(j=0;j<i;j++){
			//sayý dizide var
			if(d[j]==s){
				kontrolDegiskeni = 1;
				break;
			}
		}
		if(kontrolDegiskeni == 1){
			i--;
		}else{
			d[i] = s;	
		}
	}
	for(i = 0; i < 10; i++){
		printf("%d\n",d[i]);
	}
}
