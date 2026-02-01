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
        int n=s.size();
        vector<int> a;
        int c=0,ans=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
                c++;
            else
            {
                a.push_back(c);
                c=0;
            }
        }
        a.push_back(c);
        sort(a.begin(),a.end());
        for (int i=a.size()-1; i>=0; i-=2)
            ans+=a[i];
        cout<<ans<<endl;
    }
    return 0;
}
