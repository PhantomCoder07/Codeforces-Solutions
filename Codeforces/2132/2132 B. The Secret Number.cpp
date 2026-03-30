#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,c=11;
        cin>>n;
        vector <ll> a;
        while (n>=c)
        {
            if (n%c==0)
                a.push_back(n/c);
            c=10*(c-1)+1;
        }
        cout<<a.size()<<endl;
        for (int i=a.size()-1; i>=0; i--)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
