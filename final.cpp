#include<iostream>
using namespace std;
//*p=i int i= *p-=i++
int main(){
	int i=3; 
	i+=i--;

	cout<<i;
}
