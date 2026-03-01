#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1;
    cin>>n>>m;
    while (1)
    {
        if (m>=i)
            m-=i;
        else
            break;
        if (i<n)
            i++;
        else
            i=1;
    }
    cout<<m<<endl;
    return 0;
}
