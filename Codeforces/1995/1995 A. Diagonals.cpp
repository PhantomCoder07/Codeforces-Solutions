#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        while (k>0)
        {
            k-=n;
            c++;
            if (c%2!=0)
                n--;
        }
        cout<<c<<endl;
    }
    return 0;
}
