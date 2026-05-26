#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        vector<int> a(26,0);
        for (int i=0; i<n; i++)
            a[s[i]-'a']++;
        int mn=-1,mx=0;
        for (int i=0; i<26; i++)
        {
            if (a[i]==0)
                continue;
            if (mn==-1 || a[i]<a[mn] || (a[i]==a[mn] && i<mn))
                mn=i;
        }
        for (int i=0; i<26; i++)
        {
            if (a[i]>a[mx] || (a[i]==a[mx] && i>mx))
                mx=i;
        }
        for (int i=0; i<n; i++)
        {
            if (s[i]==char( 'a' + mn))
            {
                s[i]=char( 'a' + mx);
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
