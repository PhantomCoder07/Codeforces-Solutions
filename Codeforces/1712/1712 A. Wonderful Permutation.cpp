#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        b=a;
        sort(b.begin(),b.end());
        int ans=b[k-1];
        for (int i=0; i<k; i++)
        {
            if (a[i]>ans)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
