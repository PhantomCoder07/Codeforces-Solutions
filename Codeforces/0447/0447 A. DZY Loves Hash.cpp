#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,c=-1;
    cin>>p>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    bool ans=false;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (a[j]%p==a[i]%p)
            {
                c=i+1;
                ans=true;
                break;
            }
        }
        if (ans)
            break;
    }
    cout<<c<<endl;
    return 0;
}
