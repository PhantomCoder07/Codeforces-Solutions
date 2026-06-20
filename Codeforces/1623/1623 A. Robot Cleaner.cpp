#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        int c1,c2;
        if (rb>rd)
            c1=2*n-rb-rd;
        else
            c1=rd-rb;
        if (cb>cd)
            c2=2*m-cb-cd;
        else
            c2=cd-cb;
        cout<<min(c1,c2)<<endl;
    }
    return 0;
}
