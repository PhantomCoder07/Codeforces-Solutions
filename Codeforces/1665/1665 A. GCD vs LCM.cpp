#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n<4)
            cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        else
            cout<<n-3<<" "<<1<<" "<<1<<" "<<1<<endl;
    }
    return 0;
}
