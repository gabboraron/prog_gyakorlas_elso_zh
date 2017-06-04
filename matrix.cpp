#include "matrix.h"
#include "egyeb.h"
#include <vector>
#include <iostream>

#include <string>
#include <sstream>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Matrix beolvasas fajlbol
//copyright: Gregorics Tibor
void FillMatriFromFile(std::vector< std::vector<int> >& t, std::string& filename)
{
    cout<<"\nfile name: "<<filename<<"\n";
    std::ifstream f(filename.c_str());
    if(f.fail()){
        cout << "Nincs meg a fajl!\n";
        exit(1);
    }

    cout<<"\n A file tartalma: \n";

    string str;
    getline(f,str);
    while( !f.fail()){
        istringstream is(str);
        vector<int> x;
        int n;
        is >> n;

        while(!is.fail()){
            x.push_back(n);
            cout<<n<<" ";
            is >> n;
        }
        cout<<endl;
        t.push_back(x);
        getline(f,str);
    }
}
