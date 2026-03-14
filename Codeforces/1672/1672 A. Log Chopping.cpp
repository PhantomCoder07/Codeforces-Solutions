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
            sum+=a[i]-1;
        }
        cout<<(sum%2?"errorgorn":"maomao90")<<endl;
    }
    return 0;
}
