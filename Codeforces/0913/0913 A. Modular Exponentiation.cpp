#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=1;
    cin>>n>>m;
    if (n<27)
    {
        while (n--)
            ans*=2;
    }
    cout<<(ans==1?m:m%ans)<<endl;
    return 0;
}
