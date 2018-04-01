#include "Alumno.h"
#include <string>
using namespace std;
Alumno::Alumno(){
	carrera="I-1";

}
Alumno::Alumno(string pNombre,int pCodigo,string pCarrera):MiClase(pNombre,pCodigo){
	carrera=pCarrera;
}

void Alumno::setCarrera(string carrera){
	this->carrera=carrera;
	
}
string Alumno::getCarrera(){
	return carrera;
}
