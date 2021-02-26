#include "genero.hpp"
genero::genero(){
	//vacio
}
genero::genero(string c){
	this->nombre=c;
}
genero::~genero(){
	
}
string genero::getNombre(){
	return this->nombre;
	
}
void genero::setNombre(string c){
	this->nombre=c;
}
string genero:: toString(){
	string s="";
	s+="Nombre: " + this->getNombre()+ "\n";
}

