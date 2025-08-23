#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,max=0,c;
        scanf("%d",&n);
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            if (b[i]>max && a[i]<=10)
            {
                max=b[i];
                c=i+1;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
