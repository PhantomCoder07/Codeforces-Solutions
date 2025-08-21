#include <stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("%d ",b);
        ans=a-b;
        printf("%d",ans/2);
    }
    else
    {
        printf("%d ",a);
        ans=b-a;
        printf("%d",ans/2);
    }
    return 0;
}
