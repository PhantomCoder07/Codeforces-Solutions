#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n;
    vector<int> l(n),r(n);
    for (int i=0; i<n; i++)
        cin>>l[i]>>r[i];
    cin>>k;
    for (int i=0; i<n; i++)
    {
        if (r[i]<=(k-1))
            c++;
        else
            break;
    }
    cout<<n-c<<endl;
    return 0;
}
