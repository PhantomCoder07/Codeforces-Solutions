#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for (int i=0; i<b; i++)
    {
        if (a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
        else
            break;
    }
    printf("%d\n",c);
    return 0;
}
