#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int p[n],q[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&p[i],&q[i]);
        if (q[i]-p[i]>=2)
            c++;
    }
    printf("%d",c);
    return 0;
}
