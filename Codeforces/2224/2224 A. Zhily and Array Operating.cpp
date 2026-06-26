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
        vector<long long> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=n-1; i>0; i--)
        {
            if (a[i]>0)
            {
                a[i-1]=a[i-1]+a[i];
                c++;
            }
        }
        if (a[0]>0)
            c++;
        cout<<c<<endl;
    }
    return 0;
}
