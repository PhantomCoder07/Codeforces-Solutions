#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c=0;
        cin>>a>>b;
        if (b%4==0)
            c=0;
        else if (b%4==1)
            c-=b;
        else if (b%4==2)
            c=1;
        else if (b%4==3)
            c=b+1;
        else
            c=0;
        if (a%2)
            cout<<a-c<<endl;
        else
            cout<<a+c<<endl;
    }
    return 0;
}
