#include <iostream>
#include <string>

using namespace std;

// Struktur Node untuk Single Linked List
struct Node {
    string nama;
    int nilai;
    Node* next;
    
    Node(string n, int a) : nama(n), nilai(a), next(nullptr) {}//posisi
};

Node* head = nullptr; //kondisi awal null
    
    // Fungsi untuk menambahkan node baru
    void insert(string nama, int nilai) {
        Node* newNode = new Node(nama, nilai);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    
    // Fungsi untuk menampilkan semua data siswa
    void printList(){
        if (head == nullptr) { //ketika head masih kosong atau tidak ada  data
            cout << "Belum ada data siswa!" << endl;
        }
        //ketika terdapat data
        cout << "\n DAFTAR NILAI SISWA " << endl;
        Node* temp = head;
        int i = 1;
        while (temp != nullptr) {
            cout << i << " Nama : " << temp->nama << ", Nilai: " << temp->nilai << endl;
            temp = temp->next;
            i++;
        }
    }
    

int main() {
    
    int pilihan;
    string nama;
    int nilai;
    
    cout << "DATA MAHASISWA" << endl;
    cout << "Pilih yang ingin digunakan" << endl;
    //gunakan do while agar program berjalan terlebih dahulu
    //bagian eksekusi yg dapat dilakukan
    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah " << endl;
        cout << "2. Tampilkan data siswa" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        cin.ignore(); 
        //eksekusi pilihan 
        switch (pilihan) {
            case 1: //menambahkan data
                cout << "Masukkan nama siswa: ";
                getline(cin, nama);
                cout << "Masukkan nilai siswa: ";
                cin >> nilai;
                cin.ignore(); 
                insert(nama, nilai);
                break;
                
            case 2: //mencetak data
                printList();
                break;
                
            case 3: //keluar
                cout << " Program selesai." << endl;
                break;
                
            }
    } while (pilihan != 3);
    
    return 0;
}
