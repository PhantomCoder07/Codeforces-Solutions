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
        int mx=0,c=0;
        for (int i=0; i<n; i++)
        {
            mx=max(mx,a[i]);
            if (a[i]==mx)
                c++;
        }
        cout<<n-c<<endl;
    }
    return 0;
}
