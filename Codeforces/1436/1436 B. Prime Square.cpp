#include <bits/stdc++.h>
using namespace std;
bool is_prime (int n)
{
    for (int i=2; i<n; i++)
        if (n%i==0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        if (is_prime(n))
        {
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
        }
        else
        {
            for (int i=n+1; ; i++)
            {
                if (is_prime(i) && !is_prime(i-n+1))
                {
                    m=i-n+1;
                    break;
                }
            }
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)
                {
                    if (i==j)
                        cout<<m<<' ';
                    else
                        cout<<1<<' ';
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
