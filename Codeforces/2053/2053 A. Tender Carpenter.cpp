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
        bool ans=false;
        for (int i=0; i<n-1; i++)
        {
            if (2*min(a[i],a[i+1])>max(a[i],a[i+1]))
            {
                ans=true;
                break;
            }
        }
        if (ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
