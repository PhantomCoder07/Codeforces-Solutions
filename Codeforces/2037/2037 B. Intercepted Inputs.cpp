#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int m=n-2;
        for (int i=0; i<n; i++)
        {
            int x=a[i];
            if (m%x!=0)
                continue;
            int y=m/x;
            if (binary_search(a.begin(),a.end(),y))
            {
                cout<<x<<" "<<y<<endl;
                break;
            }
        }
    }
    return 0;
}
