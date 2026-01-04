#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<long long> a(n+1,0);
    for (int i=0; i<n; i++)
    {
        a[i+1]=a[i]+(s[i]-'a'+1);
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }
    return 0;
}
