#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n-1; i++)
        {
            if (a[i]%2!=a[i+1]%2)
            {
                f=1;
                break;
            }
        }
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
