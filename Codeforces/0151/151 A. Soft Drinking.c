#include <stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,ans;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int tml=(k*l)/nl;
    int tsl=(c*d);
    int tsol=p/np;
    if (tml<=tsl && tml<=tsol)
        ans=tml/n;
    else if (tsl<=tml && tsl<=tsol)
        ans=tsl/n;
    else
        ans=tsol/n;
    printf("%d",ans);
    return 0;
}
