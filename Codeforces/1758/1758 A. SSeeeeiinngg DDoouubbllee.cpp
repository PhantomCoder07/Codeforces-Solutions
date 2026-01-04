#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,v;
        cin>>s;
        v=s;
        reverse(v.begin(),v.end());
        cout<<s<<v<<endl;
    }
    return 0;
}
