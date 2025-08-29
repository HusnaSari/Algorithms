#include<iostream>
using namespace std;
main(){
	int i,j;
	for(i=2;i<=28;i++){
		int  t=0;
		for(j=1;j<=i/2;j++){
		
			if(i%j==0){
				t=t+j;
			}
			
		}
		if(t==i){
			cout<<i<<endl;
		}
	}
}
