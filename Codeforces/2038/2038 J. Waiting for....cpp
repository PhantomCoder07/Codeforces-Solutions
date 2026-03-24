#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    char ch;
    int tp=0;
    while (n--)
    {
        cin>>ch>>m;
        if (ch=='P')
            tp+=m;
        else
        {
            if (m-tp<=0)
            {
                tp-=m;
                cout<<"NO"<<endl;
            }
            else
            {
                tp=0;
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
