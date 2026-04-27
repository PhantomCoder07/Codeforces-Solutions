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
        bool ans=true;
        for (int i=0; i<n; i++)
        {
            if (a[i]<=i*2 || a[i]<=(n-i-1)*2)
            {
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
