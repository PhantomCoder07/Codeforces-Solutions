#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,c=1,sum=1;
        cin>>n;
        while (1)
        {
            sum+=pow(2,c++);
            if (n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }
    }
    return 0;
}
