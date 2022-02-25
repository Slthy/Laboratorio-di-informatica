#include <iostream>
using namespace std;

int main() {
	int primoIntero = 0;											//definizione e inizializzazione di una variabile "Best Practice"
	cout << "Inserisci il primo numero: ";
	cin >> primoIntero;
	int secondoIntero = 0;
	cout <<"Inserisci il secondo numero: ";
	cin >> secondoIntero;
	
	/*
		int primoIntero = 0;
		int secondoIntero = 0;
		cout << "inserisci due interi separati da uno spazio: "		//buffer di dati
		cin >> primoIntero >> secondoIntero;
	*/
	
	cout << "Hai inserito " << primoIntero << " e " << secondoIntero << endl;
	return 0;				
}
