#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int n=(a-1)/c+1;
        int m=(b-1)/d+1;
        if (n+m>k)
            cout<<-1<<endl;
        else
            cout<<n<<' '<<m<<endl;
    }
    return 0;
}
