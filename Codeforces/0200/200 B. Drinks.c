#include<stdio.h>
int main()
{
    int n;
    float sum=0,ans;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    ans=sum/n;
    printf("%f\n",ans);
    return 0;
}
