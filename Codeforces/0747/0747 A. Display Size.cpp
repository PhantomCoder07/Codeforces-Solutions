#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0 && i<=(n/i))
            m=i;
    }
    cout<<m<<' '<<n/m<<endl;;
    return 0;
}
