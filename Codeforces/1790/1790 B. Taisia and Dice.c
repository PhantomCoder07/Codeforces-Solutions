#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,s,r;
        scanf("%d %d %d",&n,&r,&s);
        int a=r-s;
        n=n-1;
        printf("%d ",a);
        while(s!=0)
        {
            int b=s/n;
            printf("%d ",b);
            s-=b;
            n--;
        }
        printf("\n");
    }
    return 0;
}
