#include <bits/stdc++.h>
using namespace std;
int solve (int n)
{
    for (int i=2; i<n/2; i++)
        if (n%i==0)
            return i;
    return n;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if (n%2)
        {
            n+=solve(n);
            k--;
        }
        cout<<n+(2*k)<<endl;
    }
    return 0;
}
