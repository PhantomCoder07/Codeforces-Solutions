#include <stdio.h>
void sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]<a[j])
            {
                int temp=a[i];
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
        int n,m=0;
        scanf("%d",&n);
        int a[n],c=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        for (int i=1; i<n; i++)
        {
            if (a[i-1]!=a[i])
                c++;
        }
        if ((n-c+1)%2==0)
            printf("%d\n",c+1);
        else
            printf("%d\n",c);
    }
    return 0;
}
