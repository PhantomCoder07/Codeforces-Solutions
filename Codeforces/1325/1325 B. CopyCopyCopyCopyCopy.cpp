#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>c;
        while(n--)
        {
            int a;
            cin>>a;
            c.insert(a);
        }
        cout<<c.size()<<endl;
    }
    return 0;
}
