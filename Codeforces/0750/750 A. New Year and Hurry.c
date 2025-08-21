#include <stdio.h>
int main()
{
    int n,k,sum=0,c=0,e=5,d;
    scanf("%d %d",&n,&k);
    int m=240-k;
    if (m%5!=0)
    {
        d=m%5;
        m=m-d;
    }
    for (int i=0; ; i++)
    {
        if (sum<m && c<n)
        {
            sum+=e;
            if (sum<=m)
                c++;
            e+=5;
        }
        else
            break;
    }
    printf("%d",c);
    return 0;
}
