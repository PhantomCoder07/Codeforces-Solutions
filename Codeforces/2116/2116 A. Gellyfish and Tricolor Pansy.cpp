#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if (min(a,c)>=min(b,d))
            cout<<"Gellyfish"<<endl;
        else
            cout<<"Flower"<<endl;
    }
    return 0;
}
