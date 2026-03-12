#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=n%10;
    if (d>5)
        cout<<n+(10-d)<<endl;
    else
        cout<<n-d<<endl;
    return 0;
}
