#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string n;
        cin>>n;
        if (n.size()==2)
            cout<<n[1]<<endl;
        else
        {
            sort(n.begin(),n.end());
            cout<<n[0]<<endl;
        }
    }
    return 0;
}
