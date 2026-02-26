#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]%2==1)
                sum++;
        }
        if (sum<n)
            cout<<sum+1<<endl;
        else
            cout<<n-1<<endl;
    }
    return 0;
}
