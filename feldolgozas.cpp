#include "feldolgozas.h"

using namespace std;

//Meghivas: maxKiv(adat_matrix, kutya_ertekeles_darab_szamlalo_vector, n, m,)
int feldolgozas(std::vector< std::vector<int> >& t, int& osszeg)
{
    int nr=0;
    nr = linker(t, osszeg);


    //cout<<"\n *** \n osszeg: "<<osszeg<<"\n *** \n";

    return nr;
}
