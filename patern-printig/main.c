#include <stdio.h>

int main ()
{
    int satir = 10;
    while ((satir>=1))
    {
        int sutun = 1;
    while (sutun<=10)
    {
        
        printf("%s",satir%2?"<":">");
        sutun++;
    }
    --satir;
    printf("\n");
    }
    
    return 0;
    
}