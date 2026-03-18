#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    vector<int> s(n),b(m);
    for (int i=0; i<n; i++)
        cin>>s[i];
    for (int i=0; i<m; i++)
        cin>>b[i];
    int mx=*max_element(b.begin(),b.end());
    int mn=*min_element(s.begin(),s.end());
    if (mn>=mx)
        cout<<r<<endl;
    else
        cout<<floor(r/mn)*mx+(r-mn*floor(r/mn))<<endl;
    return 0;
}
