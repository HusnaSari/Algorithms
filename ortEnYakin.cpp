#include <iostream>
using namespace std;

int main(){
	int i=0,t=0,o=0,ef=0,a=0; 
	int l[10];
	for(i=0;i<10;i++){
	   	cin>>l[i];
		t=t+l[i];
	}
    o=t/10;
    for(i=0;i<10;i++){
    	int f=o-l[i];
    	if(f<0){
    		f=f*(-1);
		}
		
		if(i == 0){
			ef = f;
			a = i;
			continue;
		}
		
		if(ef>f){
			ef=f;
			a=i;
		}
	}
	cout<<"En küçük eleman : "<<l[a];
    
}
