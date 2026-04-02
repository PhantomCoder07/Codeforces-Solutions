#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int c0=count(s.begin(),s.end(),'0');
        int c1=count(s.begin(),s.end(),'1');
        int mn=max(c0,c1)-n/2;
        int mx=c0/2+c1/2;
        if (k>=mn && (k-mn)%2==0 && k<=mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
