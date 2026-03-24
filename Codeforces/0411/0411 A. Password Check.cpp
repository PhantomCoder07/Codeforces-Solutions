#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if (n<5)
    {
        cout<<"Too weak"<<endl;
        return 0;
    }
    bool cap=false,sml=false,dig=false,spe=false;
    for (int i=0; i<n; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            cap=true;
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            sml=true;
        }
        else if (isdigit(s[i]))
        {
            dig=true;
        }
        else
        {
            spe=true;
        }
    }
    cout<<(cap && sml && dig?"Correct":"Too weak")<<endl;
    return 0;
}
