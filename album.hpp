#ifndef ALBUM_HPP
#define ALBUM_HPP
#include<iostream>
#include "canciones.hpp"
#include<string>
using namespace std;
class album{
  private:
  string nombre;
  string artista;
  vector<canciones*> listacan;		
  public:
  album();
  album(string,string);
  ~album();
  string getNombre();
  void setNombre(string);
  string getArtista();
  void setArtista(string);
  vector <canciones*> getCanciones();
  void setCanciones(vector<canciones*>);
};
#endif