#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for (int i=0; i<n/2; i++)
        {
            if (a[i]!=a[n-1-i])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
