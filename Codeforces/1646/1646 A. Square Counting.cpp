#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,s;
        cin>>n>>s;
        cout<<fixed<<setprecision(0)<<floor(s/(n*n))<<endl;
    }
    return 0;
}
