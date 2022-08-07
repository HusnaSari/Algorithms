#include <stdio.h>

int main()
{
    int array [10],integer;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&integer);
        array[i]= integer;
    }
    for(int i=0;i<10;i++)
    {
        if(array[i]==0)
        {
            for(int j=i;j>0;j--)
            {
                if(array[j-1]!=0)
                {
                    int temporaryVariable=array[j-1];
                    array[j-1]=array[j];
                    array[j]=temporaryVariable;
                }
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
}