#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a,x;
        int max=0,min=1000000005;
        int k[500],m=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d %d",&a,&x);
            if (a==1)
                max=(max>x)?max:x;
            else if (a==2)
                min=(min<x)?min:x;
            else
                k[c++]=x;
        }
        for (int i=0; i<c; i++)
        {
            if (k[i]<=min && k[i]>=max)
                m++;
        }
        int ans=min-max+1-m;
        if (ans<0)
            printf("0\n");
        else
            printf("%d\n",ans);
    }
    return 0;
}
