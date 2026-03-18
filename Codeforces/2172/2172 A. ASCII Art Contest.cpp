#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g,c,l;
    cin>>g>>c>>l;
    int mn=g,md=g,mx=g;
    if (g>=c && g>=l)
    {
        mx=g;
        if (l>c)
        {
            md=l;
            mn=c;
        }
        else
        {
            md=c;
            mn=l;
        }
    }
    if (c>=g && c>=l)
    {
        mx=c;
        if (l>g)
        {
            md=l;
            mn=g;
        }
        else
        {
            md=g;
            mn=l;
        }
    }
    if (l>=g && l>=c)
    {
        mx=l;
        if (g>c)
        {
            md=g;
            mn=c;
        }
        else
        {
            md=c;
            mn=g;
        }
    }
    if (mx-mn<10)
        cout<<"final "<<md<<endl;
    else
        cout<<"check again"<<endl;
    return 0;
}
