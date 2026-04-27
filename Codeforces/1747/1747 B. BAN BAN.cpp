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
        cout<<ceil(n/2.0)<<endl;
        for (int i=0; i<ceil(n/2.0); i++)
            cout<<(i+1)*3-2<<' '<<(n-i)*3<<endl;
    }
    return 0;
}
