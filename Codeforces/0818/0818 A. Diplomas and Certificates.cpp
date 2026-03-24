#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long a=n/2/(k+1);
    cout<<a<<' '<<a*k<<' '<<n-a*(k+1)<<endl;
    return 0;
}
