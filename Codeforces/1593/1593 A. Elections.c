#include <stdio.h>
int max(int x, int y)
{
    return (x>y)?x:y;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int A=(a>max(b,c))?0:max(b,c)-a+1;
        int B=(b>max(a,c))?0:max(a,c)-b+1;
        int C=(c>max(a,b))?0:max(a,b)-c+1;
        printf("%d %d %d\n",A,B,C);
    }
    return 0;
}
