#include<stdio.h>
#define ll long long int
void sort (ll a[])
{
    ll temp;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    ll s[4];
    for (int i=0; i<4; i++)
    {
        scanf("%lld",&s[i]);
    }
    sort(s);
    int c=0;
    for (int i=0; i<4; i++)
    {
        if (s[i]==s[i+1])
            c++;
    }
    printf("%d",c);
    return 0;
}
