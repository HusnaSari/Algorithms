#include<iostream>
using namespace std;
int basmakToplam(int s){
	if(s==0){
		return 0;
	}
	int b=s%10;
	return b + basmakToplam(s/10);
}
int asalmi(int q){
	int i,k;
	int b=q/2;
	for(i=2;i<=b;i++){
		k=q%i;
		if(k==0) return 0;
	}
	return 1;	
}

int main(){
	int bastp,i,i2,sayac,asaltp;
	for(i=1;i<10000;i++){
		asaltp = 0;
		bastp = 0;
		bastp = basmakToplam(i);
		for(i2=2;i2<=i/2;i2++){
			sayac = 0;
			int l=i;
			while(asalmi(i2)==1&&l%i2==0){
				l=l/i2;
				sayac++;		   
			}
			asaltp=asaltp+basmakToplam(i2)*sayac;
		}		
		if(bastp==asaltp){
			cout<<i<<endl;
		}
	}
}


