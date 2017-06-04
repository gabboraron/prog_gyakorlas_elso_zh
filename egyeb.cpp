#include "egyeb.h"

using namespace std;

//Feladat: 	Megadott felt�telt kiel�g�t� eg�sz sz�mot olvas be.
//Bemen� adatok:string msg	    - ki�rand� �zenet
//		string err    	- ki�rand� hiba�zenet
//              bool valid(int)- ellen�rz� f�ggv�ny
//Kimen� adatok:int n (visszat�r�si �rt�k)  - beolvasott eg�sz sz�m: visszat�r�si �rt�k
//Tev�kenys�g:	Billenty�zetr�l olvas be egy a valid() felt�telnek megfelel�
//		        eg�sz sz�mot.
//Copyright:    Gregorics Tibor
int read_int(const string &msg, const string &err, bool valid(int))
{
    int n;
    bool hiba;
    do{
        cout << msg;
        cin >> n;
        if((hiba=cin.fail())) cin.clear();
        string tmp=""; getline(cin, tmp);
        hiba = hiba || tmp.size()!=0 || !valid(n);
        if(hiba) cout << err << endl;
    }while(hiba);

    return n;
}

//bool nulla_harom(int&);
bool nulla_harom(int n) {return n>=0 && n<=1;}

int menu()
{
    cout<<"\nValassz a kovetkezok kozul:\n\n";
    cout<<"1. Feltoltes szoveges fajlbol\n";
    cout<<"0. kilepes\n";
    int v=read_int("\nMit valaszt:","\n0 .. 1 kozotti egesz szamot kerek",nulla_harom);
    return v;
}

