#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    if (max(n-x,n-y)<max(x-1,y-1))
        cout<<"Black"<<endl;
    else
        cout<<"White"<<endl;
    return 0;
}
