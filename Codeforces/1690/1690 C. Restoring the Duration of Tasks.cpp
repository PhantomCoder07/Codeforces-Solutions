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
        vector<int> s(n),f(n);
        for (int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for (int i=0; i<n; i++)
        {
            cin>>f[i];
        }
        int m=INT_MAX;
        for (int i=0; i<n; i++)
        {
            if (i!=0)
                m=f[i]-f[i-1];
            cout<<min(f[i]-s[i],m)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
