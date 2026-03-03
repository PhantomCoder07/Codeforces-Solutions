#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0,m=INT_MAX;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            int b=a[i],c=0;
            while ((a[i]%2)==(b%2))
            {
                b=floor(b/2);
                c++;
            }
            m=min(m,c);
        }
        if (sum%2==0)
            cout<<0<<endl;
        else
            cout<<m<<endl;
    }
    return 0;
}
