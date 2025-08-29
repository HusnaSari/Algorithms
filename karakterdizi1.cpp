#include<iostream>
using namespace std;
main(){
	int x;
	int* p;
	p=&x;*p=1200;
	cout<<*p<<endl;
	cout<<--(*p)<<endl;
	cout<<++(*p)<<endl;
}
