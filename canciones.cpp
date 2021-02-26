#include "canciones.hpp"
canciones::canciones(){
	
}
canciones::canciones(string n,string a, string d, genero g){
	this->nombre=n;
	this->artista=a;
	this->duracion=d;
	this->gen=g;
}
canciones::~canciones(){
	
}
string canciones::getNombre(){
	return this->nombre;
	
}
void canciones::setNombre(string c){
	this->nombre=c;
}
string canciones::getArtista(){
	return this->artista;
}
void canciones::setArtista(string a){
	this->artista=a;
}
string canciones::getDuracion(){
	return this->duracion;
}
void canciones::setDuracion(string d){
	this->duracion=d;
}
genero canciones::getGenero(){
	return this->gen;
}
void canciones::setGenero(genero g){
	this->gen=g;
}