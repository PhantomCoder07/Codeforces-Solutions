#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b;
        for (int i=a; ; i++)
        {
            if (i%a==i%b)
            {
                c=i;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
