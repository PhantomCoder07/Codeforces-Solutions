#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,mx=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (i%2==0)
                mx=max(mx,a[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
