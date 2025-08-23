#include <stdio.h>
void sort (int a[], int n)
{
    int temp;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
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
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,n);
        for (int i=0; i<n; i++)
        {
            if (a[i]==a[i+1])
            {
                c=1;
                break;
            }
        }
        if (n==1)
            printf("YES\n");
        else if (c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
