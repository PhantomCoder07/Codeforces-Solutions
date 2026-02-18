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
        int mx=INT_MIN,mn=INT_MAX;
        vector<int> s(n),e(n);
        for (int i=0; i<n; i++)
        {
            cin>>s[i]>>e[i];
            mx=max(mx,s[i]);
            mn=min(mn,s[i]);
        }
        bool f=true;
        for (int i=1; i<n; i++)
        {
            if (s[i]>=s[0] && e[i]>=e[0])
            {
                f=false;
                break;
            }
        }
        if (f)
            cout<<s[0]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
