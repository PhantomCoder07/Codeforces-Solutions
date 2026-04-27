#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> l(n),r(n);
        for (int i=0; i<n; i++)
            cin>>l[i]>>r[i];
        int c1=count(l.begin(),l.end(),k);
        int c2=count(r.begin(),r.end(),k);
        if (c1 && c2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
