#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b)
{
    for (int i=a; ; i--)
    {
        if (a%i==0 && b%i==0)
        return i;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        cout<<100/gcd(k,100)<<endl;
    }
    return 0;
}
