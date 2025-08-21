#include<stdio.h>
void sort (int x[])
{
    int temp;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
int main()
{
    int x[5];
    for (int i=0; i<4; i++)
    {
        scanf("%d",&x[i]);
    }
    sort(x);
    for (int i=0; i<3; i++)
    {
        printf("%d ",x[3]-x[i]);
    }
    return 0;
}
