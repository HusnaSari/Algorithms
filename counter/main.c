#include <stdio.h>

int main()
{
    int sayac=1;
    printf("Sayac başladı. ");
    while (sayac<=3000000000)
    {
       
       if( sayac % 1000000000  == 0)
       {
        printf("%ld \n",sayac);
       }
       sayac++; 
    }
    
} 