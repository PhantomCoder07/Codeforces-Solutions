#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if (n==1)
    {
        if (a==b)
        {
            cout<<1<<endl;
            cout<<a<<':'<<b<<endl;
        }
        else
        {
            cout<<0<<endl;
            cout<<a<<':'<<b<<endl;
        }
    }
    else if (a+b<n)
    {
        cout<<n-(a+b)<<endl;
        for (int i=0; i<n-(a+b); i++)
            cout<<"0:0"<<endl;
        for (int i=0; i<a; i++)
            cout<<"1:0"<<endl;
        for (int i=0; i<b; i++)
            cout<<"0:1"<<endl;
    }
    else if (a+b>=n && (a==0 || b==0))
    {
        cout<<0<<endl;
        if (b==0)
        {
            for (int i=0; i<n-1; i++)
                cout<<"1:0"<<endl;
            cout<<a-(n-1)<<":0"<<endl;
        }
        if (a==0)
        {
            for (int i=0; i<n-1; i++)
                cout<<"0:1"<<endl;
            cout<<"0:"<<b-(n-1)<<endl;
        }
    }
    else
    {
        cout<<0<<endl;
        int x=1,y=1;
        a--;
        b--;
        vector<pair<int,int>> d;
        int c=n-2;
        int ca=min(a,c);
        for (int i=0; i<ca; i++)
            d.push_back({1,0});
        a-=ca;
        int cb=c-ca;
        for (int i=0; i<cb; i++)
            d.push_back({0,1});
        b-=cb;
        x+=a;
        y+=b;
        cout<<x<<":0"<<endl;
        cout<<"0:"<<y<<endl;
        for (auto &i: d)
            cout<<i.first<<':'<<i.second<<endl;
    }
    return 0;
}
