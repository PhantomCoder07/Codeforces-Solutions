#include <stdio.h>
void sort (int x[], int n)
{
    int temp;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        for (int i=1; i<n; i++)
        {
            if (a[i]-a[i-1]>1)
            {
                c=1;
                printf("NO\n");
                break;
            }
        }
        if (c==0)
            printf("YES\n");
    }
    return 0;
}
