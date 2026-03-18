#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    cin>>s>>t;
    if (s>t)
        swap(t,s);
    int sum1=0,sum2=0;
    for (int i=s-1; i<t-1; i++)
        sum1+=a[i];
    for (int i=0; i<s-1; i++)
        sum2+=a[i];
    for (int i=t-1; i<n; i++)
        sum2+=a[i];
    cout<<min(sum1,sum2)<<endl;
    return 0;
}
