#include <stdio.h>

int main()
{
    int toplam=0;
    for(int i=1;i<=10000;i++ )
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                toplam=toplam+j;
            }

        }
        if(toplam==i)
        {
            printf("  %d ",i);
        }
        toplam=0;
    }
    
}