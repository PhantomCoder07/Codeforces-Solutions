#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n%3!=0)
        {
            for (int i=n; ; i++)
            {
                if (i%3==0)
                {
                    cout<<i-n<<endl;
                    break;
                }
            }
        }
        else
            cout<<0<<endl;
    }
    return 0;
}
