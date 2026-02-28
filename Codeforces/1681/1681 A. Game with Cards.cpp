#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        cin>>m;
        vector<int> b(m);
        for (int i=0; i<m; i++)
            cin>>b[i];
        int maxa=*max_element(a.begin(),a.end());
        int maxb=*max_element(b.begin(),b.end());
        cout<<((maxa>=maxb)?"Alice":"Bob")<<endl;
        cout<<((maxa>maxb)?"Alice":"Bob")<<endl;
    }
    return 0;
}
