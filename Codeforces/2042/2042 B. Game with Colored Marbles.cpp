#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0,m=0;
        cin>>n;
        vector<int> a(n),b(n+1,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        for (int i=1; i<=n; i++)
        {
            if (b[i]==1)
                c++;
            else if (b[i]>1)
                m++;
        }
        cout<<m+(c+1)/2*2<<endl;
    }
    return 0;
}
