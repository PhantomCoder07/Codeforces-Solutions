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
        if (n<2020)
        {
            cout<<"NO"<<endl;
            continue;
        }
        while (n%2020!=0 && n>0)
            n-=2021;
        while (n%2020==0 && n>0)
            n-=2020;
        cout<<(n==0?"YES":"NO")<<endl;
    }
    return 0;
}
