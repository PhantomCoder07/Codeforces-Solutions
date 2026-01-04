#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int m=y-x;
        int n=a+b;
        if (m%n==0)
            cout<<m/n<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
