#include <stdio.h>
void sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i]>a[j])
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
        int n,f,k,c=0;
        scanf("%d %d %d",&n,&f,&k);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int fav=a[f-1];
        sort(a,n);
        for (int i=0; i<k; i++)
        {
            if (a[i]==fav)
                c++;
        }
        if (c==0)
            printf("NO\n");
        else if (a[k]==fav)
            printf("MAYBE\n");
        else
            printf("YES\n");
    }
    return 0;
}
