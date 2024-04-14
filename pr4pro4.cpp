#include<iostream>
using namespace  std;

    int max(int h, int f,int g)
    {
    if(h>f && h>g){
    return h;
    }

    if(f>h&&f>g){
    return f;
    }
    else{
    return g;
    }
}


string max(string a, string b,string c)
{
    int la = a.length();
    int lb = b.length();
    int lc = c.length();

    if(la>lb && la>lc)
    {
        return a;
    }
    if(lb>la&&lb>lc)
    {
        return b;
    }
    else
    {
        return c;
    }
    }
    int main()
    {
        string x,y,z;
        cout << "enter three strings" << endl;
        cin >> x>>y>>z;
        max(x,y,z);
        cout << max(x,y,z)<<" is greatest string " << endl;



        int p,q,r;
        cout << "enter three numbers" << endl;
        cin >> p>>q>>r;
        max(p,q,r);
        cout << max(p,q,r)<<"is greatest" << endl;


    return 0;
}