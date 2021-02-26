#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include<string>
#include<iostream>
#include<vector>
#include "canciones.hpp"
using namespace std;
class playlist {
  private:
  string nombre;
  
  vector<canciones*> listacan;
  public:
  playlist();
  playlist(string);
  ~playlist();

  string getNombre();
  void setNombre(string);
  vector <canciones*> getCanciones();
  void setCanciones(vector<canciones*>);
};
#endif