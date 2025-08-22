#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t[n];
    int ps[n],ms[n],pe[n];
    int c1=0,c2=0,c3=0;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
        if (t[i]==1)
            ps[c1++]=i+1;
        else if (t[i]==2)
            ms[c2++]=i+1;
        else if (t[i]==3)
            pe[c3++]=i+1;
    }
    int c4=c1;
    if (c2<c4)
        c4=c2;
    if (c3<c4)
        c4=c3;
    printf("%d\n",c4);
    for (int i=0; i<c4; i++)
    {
        printf("%d %d %d\n",ps[i],ms[i],pe[i]);
    }
    return 0;
}
