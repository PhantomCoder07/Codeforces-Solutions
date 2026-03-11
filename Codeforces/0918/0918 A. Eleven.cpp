#include <bits/stdc++.h>
using namespace std;
void fibo (vector<int> &a, int n)
{
    int b=1,c=1;
    for (int i=1; i<=n; i++)
    {
        int d=b+c;
        b=c;
        c=d;
        a.push_back(b);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    fibo(a,n);
    for (int i=1; i<=n; i++)
    {
        if (count(a.begin(),a.end(),i))
            cout<<'O';
        else
            cout<<'o';
    }
    return 0;
}
