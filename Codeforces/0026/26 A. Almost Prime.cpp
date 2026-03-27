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
    int n,m=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int c=0;
        for (int j=2; j<i; j++)
        {
            if (i%j==0 && is_prime(j))
                c++;
        }
        if (c==2)
            m++;
    }
    cout<<m<<endl;
    return 0;
}
