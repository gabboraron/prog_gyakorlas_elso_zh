#ifndef EGYEB_H_INCLUDED
#define EGYEB_H_INCLUDED
#include<iostream>
#include<string>

inline bool all(int n) { return true; } //Mindenre igazat ad� f�ggv�ny
int read_int(const std::string &msg, const std::string &err, bool valid(int) = all); //Egy eg�sz ellen�rz�tt beolvas�sa
int menu();


#endif // EGYEB_H_INCLUDED
