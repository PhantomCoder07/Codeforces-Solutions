#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool ans=false;
    for (int i=0; i<=n; i++)
    {
        if (i*(i+1)/2==n)
        {
            ans=true;
            break;
        }
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
