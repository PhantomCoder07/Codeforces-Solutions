#include <stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    while (n--)
    {
        char a[4];
        scanf("%s",a);
        for (int i=0; i<3; i++)
        {
            if (a[0]=='+')
            {
                ++x;
                break;
            }
            else if (a[2]=='+')
            {
                x++;
                break;
            }
            if (a[0]=='-')
            {
                --x;
                break;
            }
            else if (a[2]=='-')
            {
                x--;
                break;
            }
        }
    }
    printf("%d",x);
    return 0;
}
