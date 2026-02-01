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
        int f=0,c=0;
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
        {
            if (a[i]==0 && a[i+1]==0 && i!=n-1)
            {
                f=1;
                break;
            }
            if (a[i]==1)
                c++;
        }
        if (f==1 || c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
