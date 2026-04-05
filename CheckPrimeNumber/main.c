#include <stdio.h>

int main()
{
    int sayi,i;
    scanf("%d",&sayi);
    for(i=2;i<=(sayi/2);i++)
    {
        if(sayi%i==0)
        {
            break;
        }        
    }

    if(i==(sayi/2))
    {
        printf("The number you entered is a prime number");
    }
    else
    {
        printf("The number you entered is not a prime number");
    }
}