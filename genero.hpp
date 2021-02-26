#ifndef GENERO_HPP
#define GENERO_HPP
#include<string>
#include<iostream>
#include<vector>
#include "asiento.hpp"
using namespace std;
class carro {
  private:
  string nombre;
  public:
  genero();
  genero (string);
  ~genero();  
};
#endif