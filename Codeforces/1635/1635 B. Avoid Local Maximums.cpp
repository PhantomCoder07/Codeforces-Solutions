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
        int c=0;
        for (int i=n-2; i>0; i--)
        {
            if (a[i]>a[i+1] && a[i]>a[i-1])
            {
                a[i-1]=max(a[i],a[i-2]);
                c++;
            }
        }
        cout<<c<<endl;
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
