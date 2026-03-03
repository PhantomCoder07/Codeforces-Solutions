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
            sum+=a[i];
        }
        if (sum%3==0)
            cout<<"1 2"<<endl;
        else
            cout<<"0 0"<<endl;
    }
    return 0;
}
