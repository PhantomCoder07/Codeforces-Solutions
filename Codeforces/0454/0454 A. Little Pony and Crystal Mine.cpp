#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=1+n/2;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i+j<m-1)
                cout<<'*';
            else
                cout<<'D';
        }
        for (int j=1; j<m; j++)
        {
            if (i>=j)
                cout<<'D';
            else
                cout<<'*';
        }
        cout<<endl;
    }
    for (int i=1; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i>j)
                cout<<'*';
            else
                cout<<'D';
        }
        for (int j=1; j<m; j++)
        {
            if (i+j<m)
                cout<<'D';
            else
                cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
