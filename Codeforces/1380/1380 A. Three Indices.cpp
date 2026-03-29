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
        int i,j,k;
        for (int x=1; x<n-1; x++)
        {
            if (a[x-1]<a[x] && a[x]>a[x+1])
            {
                ans=true;
                i=x;
                j=x+1;
                k=x+2;
                break;
            }
        }
        if (ans)
        {
            cout<<"YES"<<endl;
            cout<<i<<' '<<j<<' '<<k<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
