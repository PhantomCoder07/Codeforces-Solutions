#include <stdio.h>
void sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
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
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        for (int i=1; i<n; i++)
        {
            sum+=(a[i-1]-a[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
