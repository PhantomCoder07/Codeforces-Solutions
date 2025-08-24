#include <stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    int max=(n>m)?n:m;
    for (int i=0; i<=max; i++)
    {
        for (int j=0; j<=max; j++)
        {
            if ((i*i)+j==n && i+(j*j)==m)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
