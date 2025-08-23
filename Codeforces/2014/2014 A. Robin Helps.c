#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int get=0,give=0;
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]>=k)
                get+=a[i];
            else if (a[i]==0 && get!=0)
            {
                get--;
                give++;
            }
        }
        printf("%d\n",give);
    }
    return 0;
}
