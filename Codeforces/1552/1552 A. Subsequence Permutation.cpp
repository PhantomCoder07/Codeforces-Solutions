#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string s,a;
        cin>>n>>s;
        a=s;
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
            if (s[i]!=a[i])
                c++;
        cout<<c<<endl;
    }
    return 0;
}
