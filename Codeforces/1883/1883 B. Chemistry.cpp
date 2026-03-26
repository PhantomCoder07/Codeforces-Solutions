#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=0;
        string s;
        cin>>n>>k>>s;
        vector<int> a(26,0);
        for (int i=0; i<n; i++)
            a[s[i]-'a']^=1;
        for (int i=0; i<26; i++)
            c+=a[i];
        if (c-1<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
