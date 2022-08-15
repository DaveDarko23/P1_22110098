#include<iostream>
#include<stdlib.h>

using namespace std;

// Objeto 1 *****************************************************************************************

class Persona {
	private:
		string nombre, apellido;
		int edad, peso;
    float estatura;

  public:
		Persona(string, string, int, int, float);
		void Presentarse();
		void comer();	//	 No las defino, pero son acciones que 
		void dormir();	//	 puede realizar el objeto Persona
};

void Persona::Presentarse() {
	cout << "Hola, mi nombre es " << nombre << " " << apellido << ", tengo " << edad << " años y mido " << estatura/100 << " metros" << endl;
}

Persona::Persona(string pNombre, string pApellido, int pEdad, int pPeso, float pEstatura) {
	nombre = pNombre;
	apellido = pApellido;
	edad = pEdad;
	peso = pPeso;
	estatura = pEstatura;
}

// Objeto 2 *****************************************************************************************
class Perro {
	private:
		string raza, nombre, color;
		int edad, peso;

  public:
		Perro(string, string,string, int, int);
		void ladrar();
};

void Perro::ladrar() {
	cout << "Woof Woof!"<<endl;
}

Perro::Perro(string pRaza, string pNombre, string pColor, int pEdad, int pPeso) {
	raza = pRaza;
	nombre = pNombre;
	color = pColor;
	edad = pEdad;
	peso = pPeso;
}

int main() {
	Persona Rangel = Persona("David", "Rangel", 21, 80, 165.00);
	Rangel.Presentarse();

	Perro Toby = Perro("Toby", "Maltes", "Blanco", 11, 3);
	Toby.ladrar();

	return 0;
}