#include <iostream>
using namespace std;

void ganjil(int *x, int y){ //prosedur untuk menghitung bilangan ganjil
    for (int i=1 ; i<=y ; i++){ //perulangan 
        if (i % 2 != 0){ //kelanjutan ketika bilangan adalah bilangan ganjil
            *x = *x + i; // jumlahkan semua nilai ganjil yang masuk
        }
    }
}

int main()
{
    int a,b; // inisiasi 
    cout << "jumlah bilangan : ";
    cin >> b; // masukan banyak bilangan yang akan di cek
    ganjil (&a,b); // memanggil sub untuk melakukan perhitungan
    cout <<"Hasil penjumlahan bilangan ganjil = "<<  a ; //mengeluarkan nilai a ketika sudah dilakukan oemanggilan subprogram
    
    return 0;
}
