#include <iostream>
#include <string>
#include <vector>
#include "matrix.h"
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas

using namespace std;


int main()
{
    cout << "\n 1. beadando \n" << endl;

    std::vector<std::vector<int> >v;
    int n;
    int m;
    int osszeg;
    string filename = " ";

    int mod;
    do{
       //BEOLVASAS
       mod = menu();
       if(mod == 1)
       {
            cout<<"Adja meg a fajl nevet: ";
            cin>>filename;
            FillMatriFromFile(v,filename);
            //FillMatrixFromFile(filename, v);
       }

       //FELDOLGOZAS
        if(mod != 0)
        {
            cout<<" a)\n  "<<feldolgozas(v,osszeg);
            cout<<". sor osszeg: "<<osszeg<<"\n";
            cout<<" b)\n  "<<feldolgozas(v,osszeg);
            cout<<". sor osszeg: "<<osszeg<<"\n";
        }

    }while(mod>0);

    return 0;
}
