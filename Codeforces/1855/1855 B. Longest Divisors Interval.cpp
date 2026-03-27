#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,c=1;
        cin>>n;
        while (n%c==0)
            c++;
        cout<<c-1<<endl;
    }
    return 0;
}
