#include <stdio.h>
void sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]<a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
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
        int n,d;
        scanf("%d %d",&n,&d);
        int a[n],max=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        if (a[0]+a[1]<=d || a[n-1]<=d)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
