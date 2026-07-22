#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    cout<<fixed<<setprecision(0)<<pow(2,l)-1+n-l<<' '<<pow(2,r)-1+(n-r)*pow(2,r-1)<<endl;
    return 0;
}
