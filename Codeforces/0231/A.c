#include <stdio.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    while (n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if ((a==1 || a==0) && (b==1 || b==0) && (c==1 || c==0))
        {
            if (a+b+c==2 || a+b+c==3)
                count++;
            else
                continue;
        }
        else
            printf("Invalid\n");
    }
    printf("%d\n",count);
    return 0;
}
