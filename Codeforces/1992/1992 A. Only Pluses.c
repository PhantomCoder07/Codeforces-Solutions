#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        for (int i=0; i<5; i++)
        {
            if (a<=b && a<=c)
                a++;
            else if (b<=a && b<=c)
                b++;
            else if (c<=a && c<=b)
                c++;
        }
        int max=a*b*c;
        printf("%d\n",max);
    }
    return 0;
}
