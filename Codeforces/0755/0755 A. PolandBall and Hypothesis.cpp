#include <bits/stdc++.h>
using namespace std;
bool is_prime (int n)
{
    for (int i=2; i<n; i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for (int i=1; ; i++)
    {
        if (is_prime((n*i)+1))
            continue;
        else
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
