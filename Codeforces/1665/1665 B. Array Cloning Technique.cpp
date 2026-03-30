#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,mx=0;
        cin>>n;
        map<int,int> a;
        for (int i=0; i<n; i++)
        {
            cin>>m;
            a[m]++;
            mx=max(mx,a[m]);
        }
        m=n-mx;
        while(mx<n)
        {
            m++;
            mx*=2;
        }
        cout<<m<<endl;
    }
    return 0;
}
