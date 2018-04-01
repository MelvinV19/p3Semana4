#ifndef MICLASE_H
#define MICLASE_H
#include <string>
using namespace std;
class MiClase{ 
	//atributos o metodos privados
	private:	
		int codigo;
		string nombre;

	//metodos publicos
	public:
		//prototipos de metodos
		//constructor
		MiClase(string,int);
		MiClase();
		//metodos accesores/mutadores
		virtual int getCodigo();
		void setCodigo(int);
		string getNombre();
		void setNombre(string);

		//destructor
		//es publico,mismo nombre de la clase,no lleva parametros,solo puede haber uno
		~MiClase();
};

#endif

