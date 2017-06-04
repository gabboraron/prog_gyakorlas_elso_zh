#include "tetelek.h"

using namespace std;

int linker(const std::vector< std::vector<int> >& v, int& osszeg)
{
    bool l = false;
    int i = 0;
    int ind;

    while((l == false) && (i<v.size()))
    {
        l = (osszegzes(v[i], osszeg) > 0);
        ind = i;
        i = i+1;
    }
    //cout<<"\n *** \n osszeg: "<<osszeg<<"\n *** \n";
    return ind;
}

//osszegzes
int osszegzes(const std::vector<int>& w, int& osszeg)
{
    int s = 0;
    int m = w.size();

    for(int i = 0; i<m; ++i)
    {
        s = s + w[i];
    }
    //cout<<"\n *** \n s: "<<s<<"\n *** \n";
    osszeg = s;
    return s;
}
