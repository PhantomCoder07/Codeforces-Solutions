#include <bits/stdc++.h>
using namespace std;
bool is_prime (int n)
{
    for (int i=2; i<n; i++)
        if (n%i==0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int sum=0,mn=205;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if (a[i]<mn && a[i]%2)
                mn=a[i];
        }
        if (is_prime(sum))
        {
            cout<<n-1<<endl;
            for (int i=0; i<n; i++)
            {
                if (a[i]!=mn)
                    cout<<i+1<<' ';
            }
        }
        else
        {
            cout<<n<<endl;
            for (int i=1; i<=n; i++)
                cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}
