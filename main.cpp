#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include "album.hpp"
#include "genero.hpp"
#include "canciones.hpp"
#include "playlist.hpp"
#include <string>
//Playlist operator*(Playlist p,) 
int main() {
	int menu=0;
	vector<genero*> lista1;
	vector<album*> lista2;
	vector<canciones*> lista3;
	vector<playlist*> lista4;
	while(menu!=5){
		cout<<"1. Mantenimiento "<<endl<<"2. Sobecargar *"<<endl<<"3. Sobrecargar +"<<endl<<"4. Sobrecargar -"<<endl<<"5. Salir"<<endl;
		cin>>menu;
		if(menu==1){
			int m=0;
			while(m!=12){
				cout<<"1. Agregar Genero"<<endl<<"2. Agregar Cancion"<<endl;
				cout<<"3. Modificar Genero"<<endl<<"4. Modificar Cancion"<<endl;
				cout<<"5. Eliminar Genero"<<endl<<"6. Eliminar Cancion"<<endl;
				cout<<"7. Listar Genero"<<endl<<"8. Listar Cancion"<<endl;
				cout<<"9. Listar Album"<<endl<<"10. Listar Playlist"<<endl;
				cout<<"11. Regresar"<<endl;
				cin>>m;
				if(m==1){
					
					string g;
					cout<<"Ingrese el Nombre del Genero: "<<endl;
					cin>>g;
					lista1.push_back(new genero(g));
				    cout<<"Creado Exitosamente"<<endl;
				    m=12;
				}//agregar
				if(m==2){
					string n,a,d,g;
					cout<<"Ingrese nombre de la Cancion: "<<endl;
					cin>>n;
					cout<<"Ingrese Artista de la Cancion "<<endl;
					cin>>a;
					cout<<"Ingrese Duracion de la Cancion"<<endl;
					cin>>d;
					for(int i = 0; i < lista1.size(); i++){
			          genero *c = lista1[i];
			          cout <<"------" << "Genero #" << i <<"------"<<endl;
			          
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			        }
			        int n2;
			        cout<<"Ingrese el indice Genero Deseado de la lista: "<<endl;
			       
			        cin>>n2;
			        genero *c=lista1[n2];
			        lista3.push_back(new canciones(n,a,d,c));
			        cout<<"Creado"<<endl;
					m=12;
				}//agregar 
				if(m==3){
					for(int i = 0; i < lista1.size(); i++){
			          genero *c = lista1[i];
			          cout <<"------" << "Genero #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			        }
					int i = -1;
				    cout << "Ingrese el indice del genero a modificar: ";
				    cin >> i;
				    genero *s = lista1[i];
				    string nn;
				    cout<<"Ingrese nuevo Nombre: "<<endl;
				    cin>>nn;
				    s->setNombre(nn);
				    cout<<"exitosamente"<< endl;
				    m=12;
				}//3
				if(m==4){
					for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
					int i = -1;
				    cout << "Ingrese el indice dela Cancion a modificar: ";
				    cin >> i;
				    canciones *s = lista3[i];
				    string n,a,d,g;
					cout<<"Ingrese nombre de la Cancion: "<<endl;
					cin>>n;
					cout<<"Ingrese Artista de la Cancion "<<endl;
					cin>>a;
					cout<<"Ingrese Duracion de la Cancion"<<endl;
					cin>>d;
					for(int i = 0; i < lista1.size(); i++){
			          genero *c = lista1[i];
			          cout <<"------" << "Genero #" << i <<"------"<<endl;
			          
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			        }
			        int n2;
			        cout<<"Ingrese el indice Genero Deseado de la lista: "<<endl;
			       
			        cin>>n2;
			        genero *c=lista1[n2];
			        s->setNombre(n);
			        s->setArtista(a);
			        s->setDuracion(d);
			        s->setGenero(c);
			        cout<<"Creado"<<endl;
				}//4
				if(m==5){
					for(int i = 0; i < lista1.size(); i++){
			          genero *c = lista1[i];
			          cout <<"------" << "Genero #" << i <<"------"<<endl;
			          
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			        }
					int c = -1;
			        cout << "Ingrese el indice del Genero que eliminara: ";
			        cin >> c;
			        delete lista1[c];
			        lista1.erase(lista1.begin()+c);
			        cout<<"eliminado"<<endl;
			        break;
				}//5
				if(m==6){
					for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
			        int c = -1;
			        cout << "Ingrese el indice de la Cancion que eliminara: ";
			        cin >> c;
			        delete lista3[c];
			        lista3.erase(lista3.begin()+c);
			        cout<<"eliminado"<<endl;
			        break;
					
				}//6
				if(m==7){
					for(int i = 0; i < lista1.size(); i++){
			          genero *c = lista1[i];
			          cout <<"------" << "Genero #" << i <<"------"<<endl;
			          
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			        }
				}
				if(m==8){
						for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
					
				}
				if(m==9){
					//lsitar album
				}
				if(m==10){
					//listar playlist
				}
			}//qhile
		}//manete
		if(menu==2){
			
		}
	}//while menu
	for(int i = 0; i < lista1.size(); i++){
    	delete lista1[i];
    }
    for(int i = 0; i < lista2.size(); i++){
    	delete lista1[i];
    }
    for(int i = 0; i < lista3.size(); i++){
    	delete lista1[i];
    }
    for(int i = 0; i < lista4.size(); i++){
    	delete lista1[i];
    }
	return 0;
}