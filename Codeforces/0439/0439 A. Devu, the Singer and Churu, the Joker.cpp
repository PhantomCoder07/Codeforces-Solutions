#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int t=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        t+=a;
    }
    if (t+10*(n-1)<=d)
        cout<<(d-t)/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
