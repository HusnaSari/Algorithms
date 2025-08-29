#include<stdio.h>
#include<conio.h>

int main(){
	int g=0,ort,t=0,s=0;
	while(g!=-1){
	scanf("%d",&g);
	t=t+g;
	s++;
	}
	ort=t+1/s-1;
	printf("%d",ort);
	getche();
}
