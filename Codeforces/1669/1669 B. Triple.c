#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int f[200001]={0};
        int r=-1;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            f[a[i]]++;
            if (f[a[i]]==3 && r==-1)
            {
                r=a[i];
            }
        }
        printf("%d\n",r);
    }
    return 0;
}
