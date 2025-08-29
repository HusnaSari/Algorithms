#include <iostream> 
#include <math.h> 
using namespace std; 
int main() { 
 setlocale(LC_ALL,"Turkish"); //Türkçe karakter 
 int Kira = 1000, ArtisMiktari = 5; 
 cout<<"2006 = "<<round(Kira)<<" YTL"<<endl; 
 cout<<"2007 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2008 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2009 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2010 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2011 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2012 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2013 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2014 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2015 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 cout<<"2016 = "<<round(Kira *= (1 + ArtisMiktari / 100))<<" YTL"<<endl;  
 } 

