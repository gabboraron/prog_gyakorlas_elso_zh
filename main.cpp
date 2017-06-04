#include <iostream>
#include <string>
#include <vector>
#include "matrix.h"
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas
#include "tetelek.h" //b) pont miatt

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
            cout<<" a)  elso olyan sort, amelynek osszege pozitiv:\n  "<<feldolgozas(v,osszeg);
            cout<<". sor osszege: "<<osszeg<<"\n";
            cout<<" b)  csupa pozitiv szamot tartalmazo sorok kozul, \n  "<<feltminkiv(v,osszeg);
            cout<<". sor osszege a legkisebb: "<<osszeg<<"\n";
        }

    }while(mod>0);

    return 0;
}
