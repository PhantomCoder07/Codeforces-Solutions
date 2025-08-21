#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],temp,c=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0],maxc=0,minc=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            maxc=i;
        }
        if (a[i]<=min)
        {
            min=a[i];
            minc=i;
        }
    }
    if (minc<maxc)
    {
        minc=(n-1)-minc;
        printf("%d",minc+maxc-1);
    }
    else
    {
        minc=(n-1)-minc;
        printf("%d",minc+maxc);
    }
    return 0;
}
