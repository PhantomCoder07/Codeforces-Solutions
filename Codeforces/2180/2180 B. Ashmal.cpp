#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        vector<string> s(n);
        for (int i=0; i<n; i++)
            cin>>s[i];
        for (int i=0; i<n; i++)
            a=min(a+s[i],s[i]+a);
        cout<<a<<endl;
    }
    return 0;
}
