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
        for (int i=0; i<n-2; i++)
            cin>>a[i];
        int ans=0;
        for (int i=1; i<n-3; i++)
        {
            if (a[i-1]==1 && a[i]==0 && a[i+1]==1)
            {
                ans=1;
                break;
            }
        }
        if (n==1)
            cout<<"YES"<<endl;
        else if (ans==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
