#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<fixed<<setprecision(0)<<n+2*(floor(n/2)+floor(n/3))<<endl;
    }
    return 0;
}
