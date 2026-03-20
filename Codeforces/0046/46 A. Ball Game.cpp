#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    for (int i=0; i<n-1; i++)
    {
        c=(c+i)%n+1;
        cout<<c<<' ';
    }
    return 0;
}
