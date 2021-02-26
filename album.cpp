#include "album.hpp"
album::album(){
	
}
album::album(string n,string a){
	this->nombre=n;
	this->artista=a;

}
album::~album(){
	 for(int i = 0; i < this->listacan.size(); i++){
     delete listacan[i];
  }
}
string album::getNombre(){
	return this->nombre;
}
void album::setNombre(string n){
	this->nombre=n;
}
string album::getArtista(){
	return this->artista;
}
void album::setArtista(string a){
	this->artista=a;
}
vector<canciones*> album::getCanciones(){
	return this->listacan;
}
void album::setCanciones(vector<canciones*> c ){
	this->listacan=c;
}
