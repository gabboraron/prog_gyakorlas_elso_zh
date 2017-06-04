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
        if(mod != 0) {cout<<feldolgozas(v)<<". sorszamu kutya indult a legtobb kategoriabann\n\n";}

    }while(mod>0);

    return 0;
}
