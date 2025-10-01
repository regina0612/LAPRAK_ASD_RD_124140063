#include <iostream>
using namespace std;

int main () {
	int n; 
	cout << "inputkan jumlah array : " ;
	cin >> n; // inoutkan jumlah array yg akan digunakan
	int nilai[n]; // menginisiasi jumlah array sebanyak n
	int *ptr = nilai ; // mengarahkan nilai ke alamat ptr
	
	cout << "inputkan isi array : " ;
	for (int i=0; i<n ;i++){ // menginput isi array
		cin >> *(ptr + i);
	}
	cout << "isi array : ";
	for (int i=0; i<n ;i++){ // menampilkan isi array
		cout << *(ptr + i) << " " ;
	}
	
	for (int i=0 ; i< n/2 ; i++){ // mengubah posisi array menjadi terbalik
		int temp = *(ptr + i);
		*(ptr + i) = *(ptr + n - 1 - i);
		*(ptr + n - 1 - i) = temp;
	}
	cout << "\nisi array setelah rotasi : " ;
	for (int i=0; i<n ;i++){ // menampilkan kembali isi array setelah di rotasi
		cout << *(ptr + i) << " " ;
	}
	
}
