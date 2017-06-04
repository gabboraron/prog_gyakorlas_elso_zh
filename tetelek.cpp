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

//feltminkiv
int feltminkiv(const std::vector< std::vector<int> >& v, int& osszeg)
{
    int minimum,ind,osszegtmp,tmp;
    bool l = false;

    //minimum = osszegzes(v[0]);
    for(int i=0; i<v.size(); ++i)
    {
        tmp = osszegzes(v[i], osszegtmp);
        if((tmp > 0) && (l == true))
            {
                if(minimum > tmp)
                {
                    minimum = tmp;
                    ind = i;
                    osszeg = osszegtmp;
                }
            }
        if((tmp > 0) && (l == false))
            {
                l = true;
                osszeg = osszegtmp;
                minimum = tmp;
                ind = i;
            }
    }

    return ind;
}
