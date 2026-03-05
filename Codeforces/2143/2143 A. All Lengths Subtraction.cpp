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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int st=0,ed=n-1;
        bool ans=true;
        for (int i=1; i<=n; i++)
        {
            if (a[st]==i)
                st++;
            else if (a[ed]==i)
                ed--;
            else
                ans=false;
        }
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
