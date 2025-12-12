#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],b[101]= {};
    int c[k],j=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
        if (b[a[i]]==1)
            c[j++]=i+1;
    }
    if (j<k)
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(int i=0; i<k; i++)
        {
            printf("%d ",c[i]);
        }
    }
    return 0;
}
