#include <stdio.h>
 int main()
 {

    int row,sayi=1;
    
    scanf("%d",&row);

    for(int i= 1; i<=row;i++)
    {
       for(int j=0; j<i;j++)
        {
            printf("%d ",sayi);
            sayi++;
        }
        printf("\n");
    }
    

 }