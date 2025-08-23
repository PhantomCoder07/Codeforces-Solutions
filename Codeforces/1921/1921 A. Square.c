#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a[4],b[4];
        for (int i=0; i<4; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        int maxa=a[0],mina=a[0];
        int maxb=b[0],minb=b[0];
        for (int i=0; i<4; i++)
        {
            if (a[i]>maxa)
                maxa=a[i];
            if (b[i]>maxb)
                maxb=b[i];
            if (a[i]<mina)
                mina=a[i];
            if (a[i]<minb)
                minb=b[i];
        }
        int side=maxa-mina;
        if (maxa-mina<maxb-minb)
            side=maxb-minb;
        int area=side*side;
        printf("%d\n",area);
    }
    return 0;
}
