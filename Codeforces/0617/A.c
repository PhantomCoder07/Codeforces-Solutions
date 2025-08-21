#include <stdio.h>
int main()
{
    int x,ans=0;
    int a[]={5,4,3,2,1};
    scanf("%d",&x);
    for (int i=0; i<5; i++)
    {
        ans+=x/a[i];
        x%=a[i];
    }
    printf("%d\n",ans);
    return 0;
}
