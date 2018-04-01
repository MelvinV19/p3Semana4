#include <iostream>
#include "MiClase.h"
#include "Alumno.h"
#include <typeinfo>
using namespace std;
//metodo de prueba de clases
void runClases();
//prueba con apuntadores
void runClasesPtr();
//prueba de clase heredada
void runAlumno();
//prueba de dinamic cast
void runDynamicCast();

int main(){
//	runClases();
//	runClasesPtr();
	runAlumno();
	runDynamicCast();
	return 0;
}
//prueba clase heredada
void runAlumno(){
	Alumno* alumno=new Alumno("jeje",123432,"Sistemas :v");
	cout<<"El nombre es: "<<alumno->getNombre()<<endl;
	cout<<"El codigo es: "<<alumno->getCodigo()<<endl;
	cout<<"La carrera es: "<<alumno->getCarrera()<<endl;

	
	delete alumno;
}

//prueba dinamic cast
void runDynamicCast(){
	MiClase* miClase=new Alumno();
	Alumno* alumno= NULL;
	MiClase miClase2 ("dsadasdsa",102343231);
	//informacion del typeid de las variables declaradas e instanciadas.
	
	cout<<"El tipo de dato es: "<<typeid(*miClase).name() <<endl;
	cout<<"El tipo de dato es: "<<typeid(miClase2).name()<<endl;

	cout<<"EL tipo de dato es: "<<typeid(alumno).name()<<endl;
	//comparar el tipo de dato de la variable
	if(typeid(miClase)==typeid(MiClase*)){
		cout<<"Es un apuntador a MiClase."<<endl;
	}
	//comparar el tipo de dato contenido en el apuntador
	if(typeid(*miClase)==typeid(Alumno)){
		cout<<"El contenido es un Alumno."<<endl;
	}


	//no compila miClase no tiene un metodo getCarrera()
	//cout<<"La carrera es: "<<miClase->getCarrera()<<endl;
	
	alumno=dynamic_cast<Alumno*>(miClase);
	if(alumno!=NULL){
		cout<<"La carrera es: "<<alumno->getCarrera()<<endl;
	}

	miClase->setNombre("jiji");
	cout<<"El nombre es: "<<alumno->getNombre()<<endl;
	delete miClase;
}

//prueba objeto instanciado con apuntadores
void runClasesPtr(){
	MiClase* var1=new MiClase("jaja",12343232);

	cout<<"El nombre es: "<<var1->getNombre()<<endl;
	cout<<"El codigo es: "<<var1->getCodigo()<<endl;
	//este cout imprime la direccion del objeto ya que es un apuntador
	//cout<<var;
	delete var1;
}
//prueba memoria estatica
void runClases(){
	MiClase var("jaja",10311124);
	cout<<"El nombre es: "<<var.getNombre()<<endl;
	cout<<"El codigo es: "<<var.getCodigo()<<endl;
	//este cout da error :v
	//cout<< var;
}

