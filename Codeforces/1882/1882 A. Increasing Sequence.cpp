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
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            c++;
            if (c==a[i])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
