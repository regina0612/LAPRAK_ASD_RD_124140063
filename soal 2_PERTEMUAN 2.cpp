#include <iostream>
using namespace std;

void nilai(int *x, int y, int *z){//prosedur menghitung bilangan
	for (int i=1 ; i <= y ; i++){ // perulangan sejjumlah nilai y
		*x = *x + (i * i); // nilai x adalah jumlah dari perpangkatan sebanyak y
		*z = *z * ((2 * i ) - 1) ; // nilai y adalah nilai dari perkalian
	}
}

int main () {
	int a = 0, b, c = 1; //  inisiasi nilai awal
	cout << "masukan nilai : " ;
	cin >> b; // memasukan nilai atau batasan untuk perhitungan
	nilai (&a,b,&c); // memanggil sub program
	cout << "nilai A adalah = "<< a << " dan  nilai B adalah = "<< c; // mengeluarkan nilai a dan c setelah pemanggilan sub program
}
