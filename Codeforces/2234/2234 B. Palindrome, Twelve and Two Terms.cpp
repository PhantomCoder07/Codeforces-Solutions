#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if (n%12==10)
        {
            if (n-(n%12)==0)
                cout<<-1<<endl;
            else
            {
                cout<<22<<' '<<n-22<<endl;
            }
        }
        else
            cout<<n%12<<' '<<n-(n%12)<<endl;
    }
    return 0;
}
