#include<iostream>
using namespace std;
int asalmi(int sayi);
int main(){
	int es;
	cin>>es;
	while(1){
		es++;
		if(asalmi(es)==1){
			break;
		}
	}
	cout<<es;
}
int asalmi(int sayi){
	int k=sayi/2;
	int i;
	for(i=2;i<k;i++){
		int mod=sayi%k;
		if(mod==0) return 0;
		
	}
	return 1;		
}