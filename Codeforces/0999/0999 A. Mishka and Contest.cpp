#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n; i++)
    {
        if (a[i]<=k)
            c++;
        else
            break;
    }
    if (c<n)
    {
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]<=k)
                c++;
            else
                break;
        }
    }
    cout<<c<<endl;
    return 0;
}
