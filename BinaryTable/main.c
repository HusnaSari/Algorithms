#include <stdio.h>

int main()
{
    
    int sutun,satir=1;
    scanf("%d",&sutun);
    for(int i=0;i<sutun;i++)
    {
        satir=satir*2;
    }
    
    for(int i=1;i<=satir;i++)
    {
        for(int j=1;j<=sutun;j++)
        {
            if(i<=satir/2)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            if(i<=satir/2*2||i>satir/2&&i<satir*3/4)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}