#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if (k==1)
        cout<<n+1<<endl;
    else
    {
        for (int i=1; ; i++)
        {
            if (k*i>n)
            {
                cout<<k*i<<endl;
                break;
            }
        }
    }
    return 0;
}
