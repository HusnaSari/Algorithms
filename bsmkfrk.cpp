#include<stdio.h>


int bsmkfrk(int s){
	if(s==0)return 1;
	int k=s%10;
	int i;
	for(i=s/10;i>0;i=i/10){
		if(i%10==k)return 0;
	}
	return bsmkfrk(s/10);	 
}

main(){
	printf("%d",bsmkfrk(15869));
	
}
