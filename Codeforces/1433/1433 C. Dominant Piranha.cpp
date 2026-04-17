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
        int mx=*max_element(a.begin(),a.end());
        int j=-1;
        for (int i=0; i<n; i++)
        {
            if (a[i]>a[i+1] && a[i]==mx && i<n-1)
            {
                j=i+1;
                break;
            }
            if (a[i]>a[i-1] && a[i]==mx && i>0)
            {
                j=i+1;
                break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
