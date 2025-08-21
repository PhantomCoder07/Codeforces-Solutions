#include <stdio.h>
void sort (int a[], int p)
{
    int temp;
    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p; j++)
        {
            if (a[i]<a[j])
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
    int n,p,q,a[250],c=0;
    scanf("%d %d",&n,&p);
    for (int i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for (int i=p; i<p+q; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,p+q);
    for (int i=0; i<p+q; i++)
    {
        if (a[i]!=a[i+1])
            c++;
    }
    if (n==c)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
