#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,j=0;
    cin>>n>>t;
    vector<int> a(n);
    int sum=0,c=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        sum+=a[i];
        if (sum<=t)
            c++;
        else
            sum-=a[j++];
    }
    cout<<c<<endl;
    return 0;
}
