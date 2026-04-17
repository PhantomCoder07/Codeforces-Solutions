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
        vector<int> a(n),b(n+1,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        for (int i=0; i<k; i++)
        {
            if (b[i]==0)
                c++;
        }
        cout<<max(c,b[k])<<endl;
    }
    return 0;
}
