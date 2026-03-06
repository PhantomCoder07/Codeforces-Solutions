#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int c=1,mx=0;
        for (int i=0; i<n-1; i++)
        {
            if (a[i]==a[i+1])
                c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(mx,c);
        if (mx>=k)
            cout<<k-1<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
}
