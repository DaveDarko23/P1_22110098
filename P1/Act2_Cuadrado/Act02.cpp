#include<iostream>
#include<stdlib.h>

using namespace std;

class Square {
	private:
		int width, height;

  public:
		Square(int, int);
		void Rellenar();
		void Vaciar();
};

Square::Square(int pWidth, int pHeight){
	width = pWidth;
	height = pHeight;
}

void Square::Rellenar() {
	for (int i = 0; i < width; i++){
		for (int j = 0; j < height; j++){
			cout << "*";
		}	
		cout << endl;
	}
}

void Square::Vaciar() {
	for (int i = 0; i < width; i++){
		for (int j = 0; j < height; j++){
			if((i == 0 || i == width - 1) || (j == 0 || j == height - 1))
				cout << "*";
			else
				cout << " ";
		}	
		cout << endl;
	}
}

int main() {
	Square square5x5 = Square(5, 5);
	Square square5x10 = Square(5, 10);
	Square square10x5 = Square(10, 5);

	cout << "\nCuadro 5x5" << endl;

	cout << "\nRellenado: " << endl;
	square5x5.Rellenar();

	cout << "\nSin Rellenar: " << endl;
	square5x5.Vaciar();
	cout << endl;
	cout << " ----------------------------------------------- " << endl;

	cout << "\nCuadro 5x10" << endl;

	cout << "\nRellenado: " << endl;
	square5x10.Rellenar();

	cout << "\nSin Rellenar: " << endl;
	square5x10.Vaciar();
	cout << endl;

	cout << " ----------------------------------------------- " << endl;

	cout << "\nCuadro 10x5" << endl;

	cout << "\nRellenado: " << endl;
	square10x5.Rellenar();

	cout << "\nSin Rellenar: " << endl;
	square10x5.Vaciar();
	cout << endl;

	cout << " ----------------------------------------------- " << endl;

	return 0;
}