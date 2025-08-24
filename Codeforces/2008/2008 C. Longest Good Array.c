#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int s=r-l;
        int low=1,high=44722,ans=1;
        while (low<=high)
        {
            int mid=(low+high)/2;
            int sum=1LL*(mid-1)*mid/2;
            if (sum<=s)
            {
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
