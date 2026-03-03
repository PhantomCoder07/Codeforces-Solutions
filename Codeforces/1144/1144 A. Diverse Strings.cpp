#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        vector<int> a(27,0);
        sort(s.begin(),s.end());
        int n=s.length();
        for (int i=0; i<n; i++)
            a[s[i]-'a']++;
        bool ans=true;
        for (int i=0; i<26; i++)
            if (a[i]>1)
                ans=false;
        if (s[n-1]-s[0]==n-1 && ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
