#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if ((a+b)%2==0)
            cout<<a/2<<' '<<(b+1)/2<<endl;
        else
            cout<<-1<<' '<<-1<<endl;
    }
    return 0;
}
