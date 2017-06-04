#ifndef TETELEK_H_INCLUDED
#define TETELEK_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "tetelek.h" // maxKiv; szamlalas;
#include "matrix.h" //PrintMatrix, ReadMatrix, initMatrixConsole, FillMatrixRnd, MatrixTest
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas

//ALKALMAZOTT TETELEK

//KERESES
int linker(const std::vector< std::vector<int> >& , int&);

//osszegzess
int osszegzes(const std::vector<int>& ,int&);

//feltminkiv
int feltminkiv(const std::vector< std::vector<int> >& , int& );

#endif // TETELEK_H_INCLUDED
