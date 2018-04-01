#include "MiClase.h"
#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
using namespace std;

class Alumno:public MiClase{
	private:
		string carrera;

	public:
		Alumno();
		//nombre,codigo,carrera
		Alumno(string,int,string);

		//accesores y mutadores;
		void setCarrera(string);
		string getCarrera();



};

#endif

