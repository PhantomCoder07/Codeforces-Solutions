#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,r;
        cin>>n>>r;
        vector<int> a(n);
        int c1=0,c2=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            c2+=(a[i]/2)*2;
            r-=a[i]/2;
            c1+=a[i]%2;
        }
        if (c1>r)
            c2+=r*2-c1;
        else
            c2+=c1;
        cout<<c2<<endl;
    }
    return 0;
}
