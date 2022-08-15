#include<iostream>
#include<stdlib.h>

using namespace std;

// Objeto 1 *****************************************************************************************
class Perro {
	private:
		string raza, nombre, color;
		int edad, peso;

  public:
		Perro(string, string,string, int, int);
		void ladrar();
};


Perro::Perro(string pRaza, string pNombre, string pColor, int pEdad, int pPeso) {
	raza = pRaza;
	nombre = pNombre;
	color = pColor;
	edad = pEdad;
	peso = pPeso;
}

void Perro::ladrar() {
	cout << "Woof Woof!"<<endl;
}


// Objeto 2 *****************************************************************************************

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

Persona::Persona(string pNombre, string pApellido, int pEdad, int pPeso, float pEstatura) {
	nombre = pNombre;
	apellido = pApellido;
	edad = pEdad;
	peso = pPeso;
	estatura = pEstatura;
}

void Persona::Presentarse() {
	cout << "Hola, mi nombre es " << nombre << " " << apellido << ", tengo " << edad << " años y mido " << estatura/100 << " metros" << endl;
}

// Objeto 3 *****************************************************************************************
class Semana {
	private:
		string dias[7];
	public:
		Semana();
		void dia(int);
};

Semana::Semana() {
	dias[0] = "Lunes";
	dias[1] = "Martes";
	dias[2] = "Miercoles";
	dias[3] = "Jueves";
	dias[4] = "Viernes";
	dias[5] = "Sábado";
	dias[6] = "Domingo";
}

void Semana::dia(int pDia) {
	cout << "Hoy es: " << dias[pDia] << "!" << endl;
}

// Objeto 4 *****************************************************************************************
class Celular {
	private:
		string nombre, marca, clave;
		int precio;

  public:
		Celular(string, string, string, int);
		void Encender(string);
		void Apagar();
};

Celular::Celular(string pNombre, string pMarca, string pClave, int pPrecio) {
	nombre = pNombre;
	marca = pMarca;
	clave = pClave;
	precio = pPrecio;
}

void Celular::Encender(string pClave) {
	if(clave == pClave) cout << "Acceso Concedido" << endl;
	else cout << "Acceso Denegado" << endl;
}


// Objeto 5 *****************************************************************************************
class Producto {
  public:
		string nombre, marca;
		float precio;
		Producto(string, string, float);
};

Producto::Producto(string pNombre, string pMarca, float pPrecio) {
	nombre = pNombre;
	marca = pMarca;
	precio = pPrecio;
}

int main() {
	Perro Toby = Perro("Toby", "Maltes", "Blanco", 11, 3);
	Toby.ladrar();
	
	Persona Rangel = Persona("David", "Rangel", 21, 80, 165.00);
	Rangel.Presentarse();

	Semana semana = Semana();
	semana.dia(2);

	Celular Honor = Celular("HonorX7", "Honor", "1123", 5000);
	Honor.Encender("2525");
	Honor.Encender("1123");

	Producto refresco = Producto("Sprite", "Coca-Cola", 11.00);
	cout << "Refresco: " << refresco.nombre << endl;

	return 0;
}