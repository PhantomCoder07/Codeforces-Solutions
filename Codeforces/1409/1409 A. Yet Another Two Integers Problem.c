#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int a,b,c=0;
        scanf("%d %d",&a,&b);
        if (a==b)
            printf("0\n");
        else if (b>a)
        {
            if ((b-a)%10==0)
                printf("%d\n",(b-a)/10);
            else
                printf("%d\n",((b-a)/10)+1);
        }
        else
        {
            if ((a-b)%10==0)
                printf("%d\n",(a-b)/10);
            else
                printf("%d\n",((a-b)/10)+1);
        }
    }
    return 0;
}
