#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[101]={};
    for (int i=0; i<n; i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    int max=0;
    for (int i=1; i<=100; i++)
    {
        if (a[i]>max)
            max=a[i];
    }
    printf("%d\n",max);
    return 0;
}
