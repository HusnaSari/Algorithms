#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p;
	int a=8;
    p=&a;
	printf("%d",*p);
	*p+=20;
	printf("\n%d",a);
	int *q= (int*)malloc(sizeof(int)*a);
	for(int i=0;i<20;i++){
		q[i]=i+2*i;
	}
	printf("\n%d %d %d",q[0],q[1],q[19]);
}

