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
            while (a[i]%2==0)
            {
                a[i]/=2;
                c++;
            }
        }
        sort(a.begin(),a.end());
        long long sum=a[n-1]*pow(2,c);;
        for (int i=0; i<n-1; i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}
