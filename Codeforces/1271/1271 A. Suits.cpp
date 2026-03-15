#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int sf=min({b,c,d});
    int se=min(a,d);
    if (f>e)
        cout<<f*sf+e*min(a,d-sf)<<endl;
    else
        cout<<e*se+f*min({b,c,d-se})<<endl;
    return 0;
}
