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
        int n;
        scanf("%d",&n);
        int s[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        sort(s,n);
        int min=1001;
        for (int i=0; i<n-1; i++)
        {
            int d=s[i+1]-s[i];
            if (d<min)
                min=d;
        }
        printf("%d\n",min);
    }
    return 0;
}
