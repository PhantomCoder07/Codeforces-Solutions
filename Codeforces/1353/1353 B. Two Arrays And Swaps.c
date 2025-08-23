#include <stdio.h>
void in_sort (int x[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (x[i]<x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
void di_sort (int x[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (x[i]>x[j])
            {
                int temp=x[i];
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
        int n,k,sum=0;
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        in_sort(a,n);
        di_sort(b,n);
        for (int i=0; i<k; i++)
        {
            if (b[i]>a[i])
            {
                int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
            else
                break;
        }
        for (int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
