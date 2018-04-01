#include <iostream>
#include "MiClase.h"
#include <string>
using namespace std;

MiClase::MiClase(string pNombre,int pCodigo){
	this->nombre=pNombre;
	this->codigo=pCodigo;
}

MiClase::MiClase(){
	this-> nombre="Juan Pueblo";
	this-> codigo=504;
}
/*Metodos*/
int MiClase::getCodigo(){
	return codigo;
}

void MiClase::setCodigo(int pCodigo){
	codigo=pCodigo;
}

string MiClase::getNombre(){
	return nombre;
}

void MiClase::setNombre(string pNombre){
	nombre=pNombre;
}

/*destructor*/
MiClase::~MiClase(){
	cout<<"La instancia fue eliminada"<<endl;
}

