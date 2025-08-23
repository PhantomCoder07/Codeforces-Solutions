#include <stdio.h>
int main()
{
    int k,c=0;
    scanf("%d",&k);
    int a[100000];
    while (k!=0)
    {
        if (k%2==0)
        {
            k-=2;
            a[c++]=2;
        }
        else
        {
            k-=3;
            a[c++]=3;
        }
    }
    printf("%d\n",c);
    for (int i=0; i<c; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
