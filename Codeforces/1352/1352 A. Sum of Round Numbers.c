#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int n,d,c=0,e=1,j=0;
        int ans[10];
        scanf ("%d",&n);
        while (n!=0)
        {
            d=n%10;
            if (d!=0)
            {
                ans[j++]=d*e;
                c++;
            }
            e*=10;
            n/=10;
        }
        printf("%d\n",c);
        for (j=0; j<c; j++)
        {
            printf("%d ",ans[j]);
        }
        printf("\n");
    }
    return 0;
}
