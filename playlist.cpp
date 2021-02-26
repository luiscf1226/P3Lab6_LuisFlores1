#include "playlist.hpp"
playlist::playlist(){
	
}
playlist::playlist(string n){
	this->nombre=n;
}
playlist::~playlist(){
	 for(int i = 0; i < this->listacan.size(); i++){
     delete listacan[i];
  }
}
string playlist::getNombre(){
	return this->nombre;
}
void playlist::setNombre(string n){
	this->nombre=n;
}
vector<canciones*> playlist::getCanciones(){
	return this->listacan;
}
void playlist::setCanciones(vector<canciones*> c ){
	this->listacan=c;
}

