#include <stdio.h>
int prime(int n)
{
    int c=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
            c++;
    }
    if (c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n,m,c1=0,c2=0;
    scanf("%d %d",&n,&m);
    for (int i=n+1; i<=m; i++)
    {
        if (prime(i)==1 && i!=m)
            c1=1;
        else if (prime(i)==1 && i==m)
            c2=1;
    }
    if (c1==1)
        printf("NO");
    else if (c2==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
