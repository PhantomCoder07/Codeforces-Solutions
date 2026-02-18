#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,c=0;
        cin>>n;
        while (n)
        {
            if (n==1)
                break;
            else if (n%2==0)
                n/=2;
            else if (n%3==0)
                n=((2*n)/3);
            else if (n%5==0)
                n=((4*n)/5);
            else
                break;
            c++;
        }
        if (n==1)
            cout<<c<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
