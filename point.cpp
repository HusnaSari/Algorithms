#include<iostream>
using namespace std;
main(){
	int *p; int a=6,b=5,c=5;
	p=&b;
	*p+=--b;
	b+=4;
	cout<<b<<endl;
	cout<<*p;
	
	
}
