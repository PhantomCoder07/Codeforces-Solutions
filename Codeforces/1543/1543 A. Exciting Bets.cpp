#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        if (a==b)
        {
            cout<<0<<' '<<0<<endl;
            continue;
        }
        long long n=abs(a-b);
        cout<<n<<' '<<min(a%n,n-a%n)<<endl;
    }
    return 0;
}
