#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if (n%2 || n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        long long a=n/4;
        long long b=n/6;
        if (b*6<n)
            b++;
        if (a==0 || b==0)
            cout<<max(a,b)<<' '<<max(a,b)<<endl;
        else
            cout<<min(a,b)<<' '<<max(a,b)<<endl;
    }
    return 0;
}
