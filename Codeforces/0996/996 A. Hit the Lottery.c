#include<stdio.h>
int main()
{
    int n,ans=0;
    scanf ("%d",&n);
    int a[]={100,20,10,5,1};
    for (int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n%=a[i];
    }
    printf("%d\n",ans);
    return 0;
}
