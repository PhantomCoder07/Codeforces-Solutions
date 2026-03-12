#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for (int i=0; i<n; i++)
        cin>>s[i];
    vector<string> a{"Power","Time","Space","Soul","Reality","Mind"};
    vector<string> b{"purple","green","blue","orange","red","yellow"};
    cout<<6-n<<endl;
    for (int i=0; i<6; i++)
    {
        bool ans=false;
        for (int j=0; j<n; j++)
        {
            if (b[i]==s[j])
            {
                ans=true;
                break;
            }
        }
        if (!ans)
            cout<<a[i]<<endl;
    }
    return 0;
}
