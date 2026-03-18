#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int x=floor(r/k);
        cout<<max(x-l+1,0)<<endl;
    }
    return 0;
}
