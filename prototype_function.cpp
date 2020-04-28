#include <iostream>
using namespace std ;

//prototype function 
void prototypeFunction() ;
float a , b ;

int main () {
	prototypeFunction() ;
}

void prototypeFunction() {
	cout << "Masukkan angka pertama : " ;
	cin >> a ;
	cout << endl ;
	cout << "Masukkan angka kedua : " ;
	cin >> b ;
	cout << endl ;
	cout << "Hasil dari angka pertama = " << a << " dikali angka kedua = " << b << " adalah  " << a*b << endl ;
	cout << "Hasil dari angka pertama = " << a << " dibagi angka kedua = " << b << " adalah  " << a/b << endl ;
	cout << "Hasil dari angka pertama = " << a << " ditambah angka kedua = " << b << " adalah  " << a+b << endl ;
	cout << "Hasil dari angka pertama = " << a << " dikurang angka kedua = " << b << " adalah  " << a-b << endl ;
}
