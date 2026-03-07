#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int r=2*n;
    int g=5*n;
    int b=8*n;
    int cr=1,cg=1,cb=1;
    while (r>k)
    {
        r-=k;
        cr++;
    }
    while (g>k)
    {
        g-=k;
        cg++;
    }
    while (b>k)
    {
        b-=k;
        cb++;
    }
    cout<<cr+cg+cb<<endl;
    return 0;
}
