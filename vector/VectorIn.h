#pragma once


#include "vectorIn.cpp"

template<typename T>
istream& operator>>(istream&,vector<T>&);

template<typename T>
ostream& operator<<(ostream&,vector<T>);
