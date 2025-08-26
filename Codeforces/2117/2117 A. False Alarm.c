#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int l=0,r=n-1;
        while(a[l]!=1)
        {
            l++;
        }
        while(a[r]!=1)
        {
            r--;
        }
        if((r-l+1)<=x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
