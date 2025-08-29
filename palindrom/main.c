#include<stdio.h>

int palindrommu(int s,int k)
{	
	if(s==0)
	{
		return k;
	}
	int mod =s%10;
	k=(k*10)+mod;
	return palindrommu(s/10,k);
}
int main(){
	int s;
	scanf("%d",&s);
	if(s == palindrommu(s,0))
	{
		printf("Sayi palindromdur.");
	}
	else
	{
		printf("Sayi palindrom degildir!");
	}
}
