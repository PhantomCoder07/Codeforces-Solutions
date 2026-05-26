#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(max(a,b)>min(a,b)*2+2 || max(c-a,d-b)>min(c-a,d-b)*2+2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
