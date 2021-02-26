#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include "album.hpp"
#include "genero.hpp"
#include "canciones.hpp"
#include "playlist.hpp"
#include <string>
playlist operator+(playlist p, canciones c){
	playlist pp;
	vector<canciones> listacc;
	listacc.push_back(c);
	canciones *cc;
	vector<canciones*> lista22;
	*cc=c;
	lista22.push_back(cc);
	pp.setCanciones(lista22);
	return pp;
	
}
playlist operator*(album a,int n){
	
	playlist p;
	string s="";
	s=a.getNombre();
	p.setNombre(s);
	vector<canciones*> lista6;
	
	for(int i=0;i<n;i++){
		p.setCanciones(a.getCanciones());
	}
	return p;
} 

int main() {
	int menu=0;
	vector<genero*> lista1;
	vector<album*> lista2;
	vector<canciones*> lista3;
	vector<canciones*> lista33;
	vector<playlist*> lista4;
	vector<album> lista8;
	
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
					for(int i = 0; i < lista2.size(); i++){
			          album *c = lista2[i];
			          cout <<"------" << "album #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          
			          for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
			          
			        }
					//lsitar album
				}
				if(m==10){
					//listar playlist
						for(int i = 0; i < lista4.size(); i++){
			          playlist *c = lista4[i];
			          cout <<"------" << "Playlist #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          vector <canciones*> listaca=c->getCanciones();
				           for(int i = 0; i < listaca.size(); i++){
				          canciones *c = listaca[i];
				          cout <<"------" << "Cancion #" << i <<"------"<<endl;
				          cout <<"Nombre: "<< c->getNombre()<< endl;
				          cout<<"Artista: "<<c->getArtista()<<endl;
				          cout<<"Duracion: "<<c->getDuracion()<<endl;
				          
				        }
			          
			        }
				}
			}//qhile
		}//manete
		if(menu==2){
			cout<<"sobrecarga *"<<endl;
			string n;
			string a;
			cout<<"Ingrese el Nombre de el Album"<<endl;
			cin>>n;
			cout<<"Ingrese Artista ALbum: "<<endl;
			//album aa=(n,a);
			cin>>a;
			lista2.push_back(new album(n,a));
			lista8.push_back(album(n,a));
			for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
			string res="";
			cout<<"Desea agregar estas canciones al album?(si o no)"<<endl;
			cin>>res;
			if(res=="si"){
				//cout<<"hola"<<endl;
				int l=0;
				album *a=lista2[l];
				//album aa=*a;
				l++;
				a->setCanciones(lista3);
				lista2.push_back(a);
				
				cout<<"album creado"<<endl;
			}else{
				cout<<"album creado"<<endl;
			}
			int k;
			cout<<"Ingrese Numero de Veces de operacion: "<<endl;
			cin>>k;
			//playlist p=  operator*(a,k);
			playlist p;
			album aa=lista8[0];
			p=operator*(aa,k);
			
		}
		if(menu==3){
			cout<<"sobrecarga +"<<endl;
			int op=0;
			while(op!=5){
				cout<<"1. Agregar Cancion a Playlist"<<endl<<"2. Agregar todas canciones de un album a una playlist"<<endl<<"3. Agregar cancion a Album"<<endl<<"4. unificar 2"<<endl<<"5. salir"<<endl;
				cin>>op;
				if(op==1){
					int n,nn;
					for(int i = 0; i < lista3.size(); i++){
			          canciones *c = lista3[i];
			          cout <<"------" << "Cancion #" << i <<"------"<<endl;
			          cout <<"Nombre: "<< c->getNombre()<< endl;
			          cout<<"Artista: "<<c->getArtista()<<endl;
			          cout<<"Duracion: "<<c->getDuracion()<<endl;
			          
			        }
					cout<<"Ingrese Indice de la Cancion"<<endl;
					cin>>n;
					cout<<"Ingrese Indice Playlist"<<endl;
					cin>>nn;
					canciones *c=lista3[n];
					playlist *p=lista4[nn];
					canciones cc=*c;
					playlist pp=*p;
					playlist ppp;
					ppp=operator+(pp,cc);
					*p=ppp;
					lista4.push_back(p);
				}
			}
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