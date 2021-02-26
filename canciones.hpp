#ifndef CANCIONES_HPP
#define CANCIONES_HPP
#include<iostream>
#include "genero.hpp"
#include<string>
using namespace std;
class canciones {
  private:
  string nombre;
  string artista;
  string duracion;
  genero gen;	
  public:
  canciones();
  canciones(string,string,string,genero);
  ~canciones();
  string getNombre();
  void setNombre(string);
  string getArtista();
  void setArtista(string);
  string getDuracion();
  void setDuracion(string);
  genero getGenero();
  void setGenero(genero);
};
#endif