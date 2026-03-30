#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        long long c1=count(s.begin(),s.end(),'-');
        long long c2=count(s.begin(),s.end(),'_');
        long long ans=(c1/2)*(c1-c1/2)*c2;
        cout<<ans<<endl;
    }
    return 0;
}
