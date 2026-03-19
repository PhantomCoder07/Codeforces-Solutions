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
        if (k>0)
        {
            k-=(86400-a[i]);
            c++;
        }
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}
