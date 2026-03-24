#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for (int i=1; i<n; i++)
    {
        if (n%i==0 && i<=n/i)
            ans=i;
    }
    if (n==1)
        cout<<4<<endl;
    else
        cout<<2*(ans+(n/ans))<<endl;
    return 0;
}
