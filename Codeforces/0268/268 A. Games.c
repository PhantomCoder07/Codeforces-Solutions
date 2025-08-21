#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int h[n],a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&h[i],&a[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (h[i]==a[j])
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
