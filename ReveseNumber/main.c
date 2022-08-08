#include <stdio.h>

int main()
{
    int sayi,k=0;
    scanf("%d",&sayi);
    for(int i=sayi; i>0; i/=10)
    {
        int mod = i%10;
        k=(k*10)+mod;
    }
    printf("%d",k);
}