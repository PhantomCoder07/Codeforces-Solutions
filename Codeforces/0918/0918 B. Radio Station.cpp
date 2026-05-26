#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n),b(n);
    for (int i=0; i<n; i++)
        cin>>a[i]>>b[i];
    while (m--)
    {
        string s,t;
        cin>>s>>t;
        t.pop_back();
        for (int i=0; i<n; i++)
        {
            if (t==b[i])
            {
                cout<<s<<' '<<t<<"; #"<<a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
