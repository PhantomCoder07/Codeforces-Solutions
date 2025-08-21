#include<stdio.h>
int main()
{
    int k,r,ans=0;
    scanf("%d %d",&k,&r);
    for (int i=1; ; i++)
    {
        ans+=k;
        if ((ans%10==0) || (ans%10==r))
        {
            printf("%d\n",i);
            break;
        }
        else
            continue;
    }
    return 0;
}
