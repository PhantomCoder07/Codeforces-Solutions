#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        long long p,q;
        cin>>p>>q;
        long long d=3*p-2*q;
        if (d<0)
            cout<<"Alice"<<endl;
        else if (d<=min(p,q-1))
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
