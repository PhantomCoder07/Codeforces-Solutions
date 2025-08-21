#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],b[n],ans[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        sum+=(b[i]-a[i]);
        ans[i]=sum;
    }
    int max=ans[0];
    for (int i=1; i<n; i++)
    {
        if (ans[i]>max)
            max=ans[i];
    }
    printf("%d",max);
    return 0;
}
