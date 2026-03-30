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
        vector<int> a(n),b;
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        for (int i=0; i<n; i++)
            if (a[i]%2==0)
                b.push_back(a[i]);
        for (int i=0; i<n; i++)
            if (a[i]%2)
                b.push_back(a[i]);
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (__gcd(b[i],2*b[j])>1)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
