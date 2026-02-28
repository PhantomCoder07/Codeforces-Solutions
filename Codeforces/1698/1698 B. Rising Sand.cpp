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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (k>1)
        {
            for (int i=1; i<n-1; i++)
                if (a[i]>a[i-1]+a[i+1])
                    c++;
            cout<<c<<endl;
        }
        else
            cout<<(n-1)/2<<endl;
    }
    return 0;
}
