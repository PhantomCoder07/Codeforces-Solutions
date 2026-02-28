#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> sum(n);
    for (int i=0; i<n; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum[i]=(a+b+c+d);
    }
    int ans=sum[0];
    sort(sum.rbegin(),sum.rend());
    for (int i=0; i<n; i++)
    {
        if (ans==sum[i])
        {
            cout<<i+1;
            break;
        }
    }
}
