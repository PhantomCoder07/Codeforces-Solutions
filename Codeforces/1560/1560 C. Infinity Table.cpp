#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        int n=1;
        while (n*n<k)
        {
            n++;
        }
        int m=n*n-k;
        if (m<n)
            cout<<n<<" "<<m+1<<endl;
        else
            cout<<2*n-m-1<<" "<<n<<endl;
    }
    return 0;
}
