#include<iostream>
using namespace std;
int bsmkTplm(int s){
	if(s/10==0)return s;
	
	return s%10+bsmkTplm(s/10);
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
	cout<<bsmkTplm(453)<<endl;
	cout<<asalmi(1);
}
