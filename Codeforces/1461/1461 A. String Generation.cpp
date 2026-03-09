#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        char ch='a';
        string s;
        for (int i=0; i<k; i++)
            s+=ch;
        ch++;
        for (int i=k; i<n; i++)
        {
            s+=ch;
            ch++;
            if (ch-'a'>2)
                ch='a';
        }
        cout<<s<<endl;
    }
    return 0;
}
